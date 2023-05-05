#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include<Windows.h>
MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClick_LockPresets(){
    widgetstate=!widgetstate;
    for(int i=0;i<widgetname.length();i++){
        this->findChild<QWidget*>(widgetname[i])->setEnabled(widgetstate);
    }
    
    //qDebug()<< "Hello World!";
    
}
void MainWindow::delaychange(QString delays){
    this->delay=delays.toInt();
    qDebug()<< QString::number(this->delay,10);
    //qDebug()<< delays;
}
void MainWindow::outputstring(QKeySequence keyy){
    //qDebug()<<  keyy.;
}
