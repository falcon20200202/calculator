#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QStack>
#include <QDebug>
#include <QPushButton>
#include <QMessageBox>
//#include <cmath>
#include <sstream>
#include <stack>


// 数字按钮点击处理
void Widget::onDigitPressed(){
    QPushButton *button = (QPushButton*)sender();
    QString buttonValue = button->text();
    curExpression += buttonValue.toStdString();
    ui->label_calculate->setText(QString::fromStdString(curExpression));
}
// 操作符按钮点击处理
void Widget::onOperatorPressed(){
    QPushButton *button = (QPushButton*)sender();
    QString buttonSym = button->text();
    curExpression += buttonSym.toStdString();
    ui->label_calculate->setText(QString::fromStdString(curExpression));
}

// 清除按钮点击处理
void Widget::onClearPressed(){
    curExpression.clear();
    ui->label_calculate->clear();
}

// 退位按钮点击处理
void Widget::onDeletePressed(){
    curExpression.pop_back();
    ui->label_calculate->setText(QString::fromStdString(curExpression));
}

// 小数点按钮点击处理
void Widget::onDecimalPressed(){
    curExpression += ".";
    ui->label_calculate->setText(QString::fromStdString(curExpression));
}

// 括号按钮点击处理
void Widget::onBracketsPressed(){
    QPushButton *button = (QPushButton*)sender();
    QString buttonValue = button->text();
    curExpression += buttonValue.toStdString();
    ui->label_calculate->setText(QString::fromStdString(curExpression));
}

// 等号按钮点击处理
void Widget::onEqualPressed(){
    try{
        // 转换为逆波兰表达式
        vector<string> rpn = infixToRPN(curExpression);
        // 计算逆波兰表达式
        double result = evaluateRPN(rpn);
        // 显示结果
        ui->label_calculate->setText(QString::number(result));
        // 清除curExpression
        curExpression.clear();

    }catch(exception &e){
        QMessageBox::warning(this, "Error", "Invalid expression");
        curExpression.clear();
        ui->label_calculate->clear();
    }


}



// 判断是否为数字，与符号区分
bool Widget::isNum(const string& token){
    istringstream iss(token);
    double f;
    return (iss >> f) && iss.eof();
}

// 中缀表达式转逆波兰表达式
vector<string> Widget::infixToRPN(const string& expression) {
    stack<char> operators;
    vector<string> output;
    string number; // 用于构建数字

    for (size_t i = 0; i < expression.size(); ++i) {
        char ch = expression[i];

        if (isdigit(ch) || ch == '.') {  // 如果是数字或小数点
            number += ch;
        } else {
            if (!number.empty()) {  // 把之前的数字存入output
                output.push_back(number);
                number.clear();
            }
            if (ch == '(') {
                operators.push(ch);
            } else if (ch == ')') {
                while (!operators.empty() && operators.top() != '(') {
                    output.push_back(string(1, operators.top()));
                    operators.pop();
                }
                operators.pop();  // 弹出 '('
            } else {  // 处理操作符
                while (!operators.empty() && operators.top() != '(' && precedence[operators.top()] >= precedence[ch]) {
                    output.push_back(string(1, operators.top()));
                    operators.pop();
                }
                operators.push(ch);
            }
        }
    }

    // 最后处理剩余的数字
    if (!number.empty()) {
        output.push_back(number);
    }

    // 处理剩下的操作符
    while (!operators.empty()) {
        output.push_back(string(1, operators.top()));
        operators.pop();
    }

    return output;
}


// 计算逆波兰表达式
double Widget::evaluateRPN(const vector<string>& rpn){
    stack<double> values;

    for (const auto& token : rpn) {
        if (isNum(token)) {
            values.push(stod(token));
        } else {
            double val2 = values.top(); values.pop();
            double val1 = values.top(); values.pop();
            if (token == "+") values.push(val1 + val2);
            else if (token == "-") values.push(val1 - val2);
            else if (token == "*") values.push(val1 * val2);
            else if (token == "/") values.push(val1 / val2);
        }
    }

    return values.top();
}


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");

    // 初始化操作符优先级
    precedence['+'] = 1;
    precedence['-'] = 1;
    precedence['*'] = 2;
    precedence['/'] = 2;

    // 连接数字按钮
    connect(ui->num_0,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_1,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_2,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_3,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_4,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_5,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_6,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_7,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_8,&QPushButton::clicked,this,&Widget::onDigitPressed);
    connect(ui->num_9,&QPushButton::clicked,this,&Widget::onDigitPressed);

    // 连接操作符按钮
    connect(ui->symPlus,&QPushButton::clicked,this,&Widget::onOperatorPressed);  // 加
    connect(ui->symMinus,&QPushButton::clicked,this,&Widget::onOperatorPressed); // 减
    connect(ui->symMul,&QPushButton::clicked,this,&Widget::onOperatorPressed);   // 乘
    connect(ui->symDiv,&QPushButton::clicked,this,&Widget::onOperatorPressed);   // 除

    // 连接清除按钮
    connect(ui->symClear,&QPushButton::clicked,this,&Widget::onClearPressed);
    // 连接退位按钮
    connect(ui->symDel,&QPushButton::clicked,this,&Widget::onDeletePressed);
    // 连接小数点按
    connect(ui->symDot,&QPushButton::clicked,this,&Widget::onDecimalPressed);
    // 连接括号按钮
    connect(ui->buttonLeftParen,&QPushButton::clicked,this,&Widget::onBracketsPressed);
    connect(ui->buttonRightParen,&QPushButton::clicked,this,&Widget::onBracketsPressed);
    // 连接等号按钮
    connect(ui->symEqual,&QPushButton::clicked,this,&Widget::onEqualPressed);


};




Widget::~Widget()
{
    delete ui;
}



