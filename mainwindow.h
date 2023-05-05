#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    bool widgetstate=true;
    QList<QString> widgetname={"leftclick","rightclick","comboBox","lineEdit","checkBox","pushButton_2"};
    ~MainWindow();
    int delay;
private slots:
    
    void onClick_LockPresets();
    void delaychange(QString delay);
    void outputstring(QKeySequence keyy);
    
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
