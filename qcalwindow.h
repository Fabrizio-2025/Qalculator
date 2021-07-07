#ifndef QCALWINDOW_H
#define QCALWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QCalWindow; }
QT_END_NAMESPACE

class QCalWindow : public QMainWindow
{
    Q_OBJECT
    float ans;
    int flagOp;

public:
    QCalWindow(QWidget *parent = nullptr);
    ~QCalWindow();

private slots:
    void on_pB1_clicked();
    void on_pB2_clicked();
    void on_pB3_clicked();
    void on_pB4_clicked();
    void on_pB5_clicked();
    void on_pB6_clicked();
    void on_pB7_clicked();
    void on_pB8_clicked();
    void on_pB9_clicked();
    void on_pB0_clicked();
    void on_pBSum_clicked();
    void on_pBMul_clicked();
    void on_pBDiv_clicked();
    void on_pBRes_clicked();
    void on_pBEq_clicked();
    void on_pBClear_clicked();
    void on_pBDot_clicked();

private:
    Ui::QCalWindow *ui;
};








#endif // QCALWINDOW_H
