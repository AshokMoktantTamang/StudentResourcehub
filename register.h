#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>


namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:


    void on_pushButton_register_clicked();




    void on_pushButton_2_clicked();



private:
    Ui::Register *ui;


};

#endif // REGISTER_H
