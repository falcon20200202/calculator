#pragma once //防止头文件重复包含
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    QString calStr;
    QString resultStr;
    QChar sym;
    float first_num;
    float second_num;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
