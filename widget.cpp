#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QChar>
#include <QDebug>
#include <QPushButton>

float calculate_result(float first_num,float second_num, QChar sym){
    if(sym == '+'){
        return first_num+second_num;
    }else if(sym == '-'){
        return first_num-second_num;
    }else if(sym == '*'){
        return first_num * second_num;
    }else if(sym == '/'){
        return first_num / second_num;
    }else{
        return 0;
    }
}


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");
    //初始化为calStr
    calStr = "";
    //QString resultStr;
    sym = '0';
    //ui->label_calculate->setText(calStr);
    //ui->label_calculate->clear();

    //开始计算
    first_num = 0;
    second_num = 0;

    //点击数字键 返回数字
    connect(ui->num_0,&QPushButton::clicked,this,[this](){
        //qDebug() << "点击0";
        calStr += "0";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_1,&QPushButton::clicked,this,[this](){
        calStr += "1";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_2,&QPushButton::clicked,this,[this](){
        calStr += "2";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_3,&QPushButton::clicked,this,[this](){
        calStr += "3";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_4,&QPushButton::clicked,this,[this](){
        calStr += "4";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_5,&QPushButton::clicked,this,[this](){
        calStr += "5";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_6,&QPushButton::clicked,this,[this](){
        calStr += "6";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_7,&QPushButton::clicked,this,[this](){
        calStr += "7";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_8,&QPushButton::clicked,this,[this](){
        calStr += "8";
        ui->label_calculate->setText(calStr);
    });
    connect(ui->num_9,&QPushButton::clicked,this,[this](){
        calStr += "9";
        ui->label_calculate->setText(calStr);
    });
    //小数点
    connect(ui->symDot,&QPushButton::clicked,this,[this](){
        calStr += ".";
        ui->label_calculate->setText(calStr);
    });

    //点击符号键 返回符号
    connect(ui->symEqual,&QPushButton::clicked,this,[this](){
        //如果只输入了一位
        if(sym == '0'){
            ui->label_calculate->setText(calStr);
            return;
        }
        //将符号后面的保存为第二位
        int symPos = calStr.lastIndexOf(QChar(sym));
        first_num = calStr.left(symPos).toFloat();
        second_num = calStr.mid(symPos+1).toFloat();

        //连算，结果保存为第一个数
        first_num = calculate_result(first_num,second_num,sym);
        second_num = 0;
        //计算得出结果
        resultStr = QString::number(first_num);

        calStr = resultStr;
        //返回结果
        ui->label_calculate->setText(resultStr);
    });

    connect(ui->symPlus,&QPushButton::clicked,this,[this](){
        first_num = calStr.toFloat();
        calStr += "+";
        sym = '+';
        ui->label_calculate->setText(calStr);
    });
    connect(ui->symMinus,&QPushButton::clicked,this,[this](){
        first_num = calStr.toFloat();
        calStr += "-";
        sym = '-';
        ui->label_calculate->setText(calStr);
    });
    connect(ui->symMul,&QPushButton::clicked,this,[this](){
        first_num = calStr.toFloat();
        calStr += "*";
        sym = '*';
        ui->label_calculate->setText(calStr);
    });
    connect(ui->symDiv,&QPushButton::clicked,this,[this](){
        first_num = calStr.toFloat();
        calStr += "/";
        sym = '/';
        ui->label_calculate->setText(calStr);
    });

    //点击功能 返回功能
    connect(ui->symDel,&QPushButton::clicked,this,[&](){
        //删除一位
        calStr.chop(1);
        ui->label_calculate->setText(calStr);

    });
    connect(ui->symClear,&QPushButton::clicked,this,[&](){
        //清除计算
        calStr = "";
        first_num = 0;
        second_num = 0;
        sym = '0';
        ui->label_calculate->clear();
    });


}

Widget::~Widget()
{
    delete ui;
}
