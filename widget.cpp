#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QPixmap>
#include <QFont>
#include <QDebug>
#include <QStringList>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置标题内容
    ui->weight->setText("重量转换");
    ui->length->setText("长度转换");
    ui->area->setText("面积转换");
    ui->volume->setText("体积转换");
    ui->temperature->setText("温度转换");
    ui->money->setText("货币转换");

    // 设置标题字体大小
    QFont ft;
    ft.setPointSize(14);
    ui->weight->setFont(ft);
    ui->length->setFont(ft);
    ui->area->setFont(ft);
    ui->volume->setFont(ft);
    ui->temperature->setFont(ft);
    ui->money->setFont(ft);

    // 设置标题颜色
    ui->Sub_weight_1->setStyleSheet("background-color: rgb(255,227,132)");
    ui->Sub_length_1->setStyleSheet("background-color: rgb(255,227,132)");
    ui->Sub_area_1->setStyleSheet("background-color: rgb(255,227,132)");
    ui->Sub_volume_1->setStyleSheet("background-color: rgb(255,227,132)");
    ui->Sub_temperature_1->setStyleSheet("background-color: rgb(255,227,132)");
    ui->Sub_money_1->setStyleSheet("background-color: rgb(255,227,132)");

    // 设置label提示内容
    // weight
    ui->weight_label_1->setText("（其他制式）");
    ui->weight_label_2->setText("=");
    ui->weight_label_3->setText("（公制）");
    // length
    ui->length_label_1->setText("（其他制式）");
    ui->length_label_2->setText("=");
    ui->length_label_3->setText("（公制）");
    // area
    ui->area_label_1->setText("（其他制式）");
    ui->area_label_2->setText("=");
    ui->area_label_3->setText("（公制）");
    // volume
    ui->volume_label_1->setText("（其他制式）");
    ui->volume_label_2->setText("=");
    ui->volume_label_3->setText("（公制）");
    // temperature
    ui->temperature_label_1->setText("（其他制式）");
    ui->temperature_label_2->setText("=");
    ui->temperature_label_3->setText("（公制）");
    // money
    ui->money_label_1->setText("兑");

    // 设置lable提示大小
    ft.setPointSize(12);
    // weight
    ui->weight_label_1->setFont(ft);
    ui->weight_label_2->setFont(ft);
    ui->weight_label_3->setFont(ft);
    // length
    ui->length_label_1->setFont(ft);
    ui->length_label_2->setFont(ft);
    ui->length_label_3->setFont(ft);
    // area
    ui->area_label_1->setFont(ft);
    ui->area_label_2->setFont(ft);
    ui->area_label_3->setFont(ft);
    // volume
    ui->volume_label_1->setFont(ft);
    ui->volume_label_2->setFont(ft);
    ui->volume_label_3->setFont(ft);
    // temperature
    ui->temperature_label_1->setFont(ft);
    ui->temperature_label_2->setFont(ft);
    ui->temperature_label_3->setFont(ft);
    // money
    ft.setPointSize(14);
    ui->money_label_1->setFont(ft);

    // 设置label字体颜色
    ui->money_label_1->setStyleSheet("color:red");

    // 设置button内容
    // weight
    ui->weight_pushButton_1->setText("其他->公制");
    ui->weight_pushButton_2->setText("其他<-公制");
    // length
    ui->length_pushButton_1->setText("其他->公制");
    ui->length_pushButton_2->setText("其他<-公制");
    // area
    ui->area_pushButton_1->setText("其他->公制");
    ui->area_pushButton_2->setText("其他<-公制");
    // volume
    ui->volume_pushButton_1->setText("其他->公制");
    ui->volume_pushButton_2->setText("其他<-公制");
    // temperature
    ui->temperature_pushButton_1->setText("其他->公制");
    ui->temperature_pushButton_2->setText("其他<-公制");
    // money
    ui->money_pushButton_1->setText("其他->公制");
    ui->money_pushButton_2->setText("其他<-公制");

    // 设置button大小
    // weight
    ui->weight_pushButton_1->setFixedSize(110,30);
    ui->weight_pushButton_2->setFixedSize(110,30);
    // length
    ui->length_pushButton_1->setFixedSize(110,30);
    ui->length_pushButton_2->setFixedSize(110,30);
    // area
    ui->area_pushButton_1->setFixedSize(110,30);
    ui->area_pushButton_2->setFixedSize(110,30);
    // volume
    ui->volume_pushButton_1->setFixedSize(110,30);
    ui->volume_pushButton_2->setFixedSize(110,30);
    // temperature
    ui->temperature_pushButton_1->setFixedSize(110,30);
    ui->temperature_pushButton_2->setFixedSize(110,30);
    // money
    ui->money_pushButton_1->setFixedSize(110,30);
    ui->money_pushButton_2->setFixedSize(110,30);

    // 设置button字体大小
    ft.setPointSize(11);
    // weight
    ui->weight_pushButton_1->setFont(ft);
    ui->weight_pushButton_2->setFont(ft);
    // length
    ui->length_pushButton_1->setFont(ft);
    ui->length_pushButton_2->setFont(ft);
    // area
    ui->area_pushButton_1->setFont(ft);
    ui->area_pushButton_2->setFont(ft);
    // volume
    ui->volume_pushButton_1->setFont(ft);
    ui->volume_pushButton_2->setFont(ft);
    // temperature
    ui->temperature_pushButton_1->setFont(ft);
    ui->temperature_pushButton_2->setFont(ft);
    // money
    ui->money_pushButton_1->setFont(ft);
    ui->money_pushButton_2->setFont(ft);

    // 设置lineEdit大小
    // weight
    ui->weight_lineEdit_1->setFixedSize(210, 21);
    ui->weight_lineEdit_2->setFixedSize(210, 21);
    // length
    ui->length_lineEdit_1->setFixedSize(210, 21);
    ui->length_lineEdit_2->setFixedSize(210, 21);
    // area
    ui->area_lineEdit_1->setFixedSize(210, 21);
    ui->area_lineEdit_2->setFixedSize(210, 21);
    // volume
    ui->volume_lineEdit_1->setFixedSize(210, 21);
    ui->volume_lineEdit_2->setFixedSize(210, 21);
    // temperature
    ui->temperature_lineEdit_1->setFixedSize(210, 21);
    ui->temperature_lineEdit_2->setFixedSize(210, 21);
    // money
    ui->money_lineEdit_1->setFixedSize(210, 21);
    ui->money_lineEdit_2->setFixedSize(210, 21);

    // 设置comboBox内容
    // weight
    // weight_comboBox_1
    ui->weight_comboBox_1->insertItem(0,"--英制--","0");
    ui->weight_comboBox_1->insertItem(1, "磅", "1");
    ui->weight_comboBox_1->insertItem(2, "盎司", "2");
    ui->weight_comboBox_1->insertItem(3, "英吨", "3");
    ui->weight_comboBox_1->insertItem(4, "美吨", "4");
    ui->weight_comboBox_1->insertItem(5, "打兰", "5");
    ui->weight_comboBox_1->insertItem(6, "格令", "6");
    ui->weight_comboBox_1->insertItem(7, "克拉", "7");
    ui->weight_comboBox_1->insertItem(8, "--市制--", "8");
    ui->weight_comboBox_1->insertItem(9, "市担", "9");
    ui->weight_comboBox_1->insertItem(10, "市斤", "10");
    ui->weight_comboBox_1->insertItem(11, "市两", "11");
    ui->weight_comboBox_1->insertItem(12, "市钱", "12");
    ui->weight_comboBox_1->insertItem(13, "市厘", "13");
    ui->weight_comboBox_1->insertItem(14, "市毫", "14");
    ui->weight_comboBox_1->insertItem(15, "市丝", "15");

    // weight_comboBox_2
    ui->weight_comboBox_2->insertItem(0, "公斤（千克）", "0");
    ui->weight_comboBox_2->insertItem(1, "克", "1");
    ui->weight_comboBox_2->insertItem(2, "吨", "2");
    ui->weight_comboBox_2->insertItem(3, "公担", "3");
    ui->weight_comboBox_2->insertItem(4, "分克", "4");
    ui->weight_comboBox_2->insertItem(5, "厘克", "5");
    ui->weight_comboBox_2->insertItem(6, "毫克", "6");

    // length
    // length_comboBox_1
    // QStringList strings;
    // strings << "--英制--" << "英寸" << "英寸";
    // ui->length_comboBox_1->addItems(strings);
    ui->length_comboBox_1->insertItem(0, "--英制--", "0");
    ui->length_comboBox_1->insertItem(1, "英寸", "1");
    ui->length_comboBox_1->insertItem(2, "英尺", "2");
    ui->length_comboBox_1->insertItem(3, "码", "3");
    ui->length_comboBox_1->insertItem(4, "英里", "4");
    ui->length_comboBox_1->insertItem(5, "--市制--", "5");
    ui->length_comboBox_1->insertItem(6, "市里", "6");
    ui->length_comboBox_1->insertItem(7, "市引", "7");
    ui->length_comboBox_1->insertItem(8, "市丈", "8");
    ui->length_comboBox_1->insertItem(9, "市尺", "9");
    ui->length_comboBox_1->insertItem(10, "市寸", "10");
    ui->length_comboBox_1->insertItem(11, "市分", "11");
    ui->length_comboBox_1->insertItem(12, "市厘", "12");
    ui->length_comboBox_1->insertItem(13, "市毫", "13");

    // length_comboBox_2
    ui->length_comboBox_2->insertItem(0, "公里（千米）", "2");
    ui->length_comboBox_2->insertItem(1, "米", "1");
    ui->length_comboBox_2->insertItem(2, "海里", "2");
    ui->length_comboBox_2->insertItem(3, "分米", "3");
    ui->length_comboBox_2->insertItem(4, "厘米", "4");
    ui->length_comboBox_2->insertItem(5, "毫米", "5");
    ui->length_comboBox_2->insertItem(6, "丝米", "6");
    ui->length_comboBox_2->insertItem(7, "忽米", "7");
    ui->length_comboBox_2->insertItem(8, "微米", "8");

    // area
    // area_comboBox_1
    ui->area_comboBox_1->insertItem(0, "--英制--", "0");
    ui->area_comboBox_1->insertItem(1, "平方英里", "1");
    ui->area_comboBox_1->insertItem(2, "平方英寸", "2");
    ui->area_comboBox_1->insertItem(3, "平方英尺", "3");
    ui->area_comboBox_1->insertItem(4, "平方码", "4");
    ui->area_comboBox_1->insertItem(5, "英亩", "5");
    ui->area_comboBox_1->insertItem(6, "--市制--", "6");
    ui->area_comboBox_1->insertItem(7, "市顷", "7");
    ui->area_comboBox_1->insertItem(8, "市亩", "8");
    ui->area_comboBox_1->insertItem(9, "市分", "9");
    ui->area_comboBox_1->insertItem(10, "平方市尺", "10");

    // area_comboBox_2
    ui->area_comboBox_2->insertItem(0, "公顷", "0");
    ui->area_comboBox_2->insertItem(1, "公亩", "1");
    ui->area_comboBox_2->insertItem(2, "平方公里", "2");
    ui->area_comboBox_2->insertItem(3, "平方米", "3");
    ui->area_comboBox_2->insertItem(4, "平方分米", "4");
    ui->area_comboBox_2->insertItem(5, "平方厘米", "5");

    // volume
    // volume_comboBox_1
    ui->volume_comboBox_1->insertItem(0, "--英制--", "0");
    ui->volume_comboBox_1->insertItem(1, "英国加仑", "1");
    ui->volume_comboBox_1->insertItem(2, "美国液体加仑", "2");
    ui->volume_comboBox_1->insertItem(3, "美国固体加仑", "3");
    ui->volume_comboBox_1->insertItem(4, "立方英寸", "4");
    ui->volume_comboBox_1->insertItem(5, "立方英尺", "5");
    ui->volume_comboBox_1->insertItem(6, "立方码", "6");
    ui->volume_comboBox_1->insertItem(7, "--市制--", "7");
    ui->volume_comboBox_1->insertItem(8, "立方市寸", "8");
    ui->volume_comboBox_1->insertItem(9, "立方市尺", "9");
    ui->volume_comboBox_1->insertItem(10, "立方市丈", "10");

    // volume_comboBox_2
    ui->volume_comboBox_2->insertItem(0, "立方米", "0");
    ui->volume_comboBox_2->insertItem(1, "立方分米", "1");
    ui->volume_comboBox_2->insertItem(2, "立方厘米", "2");
    ui->volume_comboBox_2->insertItem(3, "升", "3");
    ui->volume_comboBox_2->insertItem(4, "毫升", "4");



    // 设置comboBox大小
    // weight
    ui->weight_comboBox_1->setFixedSize(110,22);
    ui->weight_comboBox_2->setFixedSize(110,22);
    // length
    ui->length_comboBox_1->setFixedSize(110,22);
    ui->length_comboBox_2->setFixedSize(110,22);
    // area
    ui->area_comboBox_1->setFixedSize(110,22);
    ui->area_comboBox_2->setFixedSize(110,22);
    // volume
    ui->volume_comboBox_1->setFixedSize(110,22);
    ui->volume_comboBox_2->setFixedSize(110,22);
    // temperature
    ui->temperature_comboBox_1->setFixedSize(110,22);
    ui->temperature_comboBox_2->setFixedSize(110,22);
    // money
    ui->money_comboBox_1->setFixedSize(110,22);
    ui->money_comboBox_2->setFixedSize(110,22);




}

Widget::~Widget()
{
    delete ui;
}










