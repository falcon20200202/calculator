#pragma once //防止头文件重复包含
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <map>
#include <vector>
#include <string>


using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:

    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    // 数字按钮点击处理
    void onDigitPressed();
    // 操作符按钮点击处理
    void onOperatorPressed();
    // 清除按钮点击处理
    void onClearPressed();
    // 退位按钮点击处理
    void onDeletePressed();
    // 小数点按钮点击处理
    void onDecimalPressed();
    // 括号按钮点击处理
    void onBracketsPressed();
    // 等号按钮点击处理
    void onEqualPressed();


private:
    Ui::Widget *ui;

    // 操作符优先级
    map<char,int> precedence;

    // 当前表达式
    string curExpression;

    // 判断是否为数字，与符号区分
    bool isNum(const string& token);

    // 中缀表达式转逆波兰表达式
    vector<string> infixToRPN(const string& expression);

    // 计算逆波兰表达式
    double evaluateRPN(const vector<string>& rpn);



};
#endif // WIDGET_H
