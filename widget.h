#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_weight_pushButton_1_clicked();

    void on_weight_pushButton_2_clicked();

    void on_length_pushButton_1_clicked();

    void on_length_pushButton_2_clicked();

    void on_area_pushButton_1_clicked();

    void on_area_pushButton_2_clicked();

    void on_volume_pushButton_1_clicked();

    void on_volume_pushButton_2_clicked();

    void on_temperature_pushButton_1_clicked();

    void on_temperature_pushButton_2_clicked();

    void on_money_pushButton_1_clicked();

    void on_money_pushButton_2_clicked();

    bool Judgt(QString str);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
