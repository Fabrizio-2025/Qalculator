#ifndef QCALWINDOW_H
#define QCALWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QCalWindow; }
QT_END_NAMESPACE

class QCalWindow : public QMainWindow
{
    Q_OBJECT

public:
    QCalWindow(QWidget *parent = nullptr);
    ~QCalWindow();

private:
    Ui::QCalWindow *ui;
};








#endif // QCALWINDOW_H
