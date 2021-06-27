#include "qcalwindow.h"
#include "ui_qcalwindow.h"

//Constructor
QCalWindow::QCalWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::QCalWindow)
{
    ui->setupUi(this);
    ans = 0;
    setWindowTitle("Qalculator 1.0");
    setFixedSize(273,344);
}
//Destructor
QCalWindow::~QCalWindow()
{
    delete ui;
}

void QCalWindow::on_pB1_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "1"); }
void QCalWindow::on_pB2_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "2"); }
void QCalWindow::on_pB3_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "3"); }
void QCalWindow::on_pB4_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "4"); }
void QCalWindow::on_pB5_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "5"); }
void QCalWindow::on_pB6_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "6"); }
void QCalWindow::on_pB7_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "7"); }
void QCalWindow::on_pB8_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "8"); }
void QCalWindow::on_pB9_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "9"); }
void QCalWindow::on_pB0_clicked() { ui->lineNumEdit->setText(ui->lineNumEdit->text() + "0"); }

void QCalWindow::on_pBSum_clicked()
{
    flagOp = 1;
    ans = ui->lineNumEdit->text().toFloat();
    ui->lineNumEdit->setText("");
}
void QCalWindow::on_pBRes_clicked() {
    flagOp = 2;
    ans = ui->lineNumEdit->text().toFloat();
    ui->lineNumEdit->setText("");
}
void QCalWindow::on_pBDiv_clicked() {
    flagOp = 3;
    ans = ui->lineNumEdit->text().toFloat();
    ui->lineNumEdit->setText("");
}
void QCalWindow::on_pBMul_clicked() {
    flagOp = 4;
    ans = ui->lineNumEdit->text().toFloat();
    ui->lineNumEdit->setText("");
}
void QCalWindow::on_pBClear_clicked() { ui->lineNumEdit->setText(""); }
void QCalWindow::on_pBEq_clicked()
{
    switch(flagOp)
    {
        case 1:
            ans = ans + ui->lineNumEdit->text().toFloat();
        break;
        case 2:
            ans = ans - ui->lineNumEdit->text().toFloat();
        break;
        case 3:
            ans = ans / ui->lineNumEdit->text().toFloat();
        break;
        case 4:
            ans = ans * ui->lineNumEdit->text().toFloat();
        break;
        default:
        break;
    }
    ui->lineNumEdit->setText(QString::number(ans));
}


