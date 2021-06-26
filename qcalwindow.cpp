#include "qcalwindow.h"
#include "ui_qcalwindow.h"

//Constructor
QCalWindow::QCalWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::QCalWindow)
{
    ui->setupUi(this);
    setWindowTitle("Qalculator 1.0");
    setFixedSize(273,344);
}
//Destructor
QCalWindow::~QCalWindow()
{
    delete ui;
}


void QCalWindow::on_pB1_clicked() { ui->lineNumEdit->setText("1"); }
