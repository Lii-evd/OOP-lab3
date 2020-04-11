#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void sendData(QString from, QString to, QString date);
private slots:
    void on_change_clicked();
    void onButtonSend();
    void slotShortcutCtrlN();
    void slotShortcutCtrlH();
    void on_ticket_clicked();

private:
    Ui::MainWindow *ui;
    QShortcut       *keyCtrlN;  // объект сочетания клавиш Ctrl + N
    QShortcut       *keyCtrlH;  // объект сочетания клавиш Ctrl + H
};

#endif // MAINWINDOW_H
