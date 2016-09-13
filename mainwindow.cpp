#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
 int Pikachu,Squirtle,Charmander;
 float total=0,discount=0;
 Pikachu=ui->spinBox->value();
 Squirtle=ui->spinBox_2->value();
 Charmander=ui->spinBox_3->value();

 if(Pikachu>0 && Squirtle>0 && Charmander>0)
 {
     discount=0.2;
 }
 else if((Pikachu>0 && Squirtle>0) || (Pikachu>0 && Charmander>0) || (Squirtle>0 && Charmander>0))
 {
     discount=0.1;
 }
 float vPD=0;
 if(Pikachu>0)
 {
     vPD+=6-(6*discount);
     Pikachu--;
 }
 if(Squirtle>0)
 {
     vPD+=5-(5*discount);
     Squirtle--;
 }
if(Charmander>0)
{
    vPD+=5-(5*discount);
    Charmander--;
}
total=vPD+(Pikachu*6+Squirtle*5+Charmander*5);
ui->doubleSpinBox->setValue(total);
}

