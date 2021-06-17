#include "qcalwindow.h"
#include "ui_qcalwindow.h"

//Constructor
QCalWindow::QCalWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::QCalWindow)
{
    ui->setupUi(this);
    setWindowTitle("Qalculator 1.0");
}
//Destructor
QCalWindow::~QCalWindow()
{
    delete ui;
}

