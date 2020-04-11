#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QShortcut>
#include <QMessageBox>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void recieveData(QString from, QString to, QString date);

    void on_SecondWindow_finished(int result);
    // слоты для обработки нажатий горячих клавиш
    void slotShortcutCtrlD();


private:
    Ui::SecondWindow *ui;
    QShortcut       *keyCtrlD;  // объект сочетания клавиш Ctrl + D
};

#endif // SECONDWINDOW_H
