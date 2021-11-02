#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QWidget>
#include <QString>
#include<string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Clean the basement");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString itemtxt;
    itemtxt = ui->lineEdit->displayText();
    ui->listWidget->addItem(itemtxt);
}



void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}


void MainWindow::on_pushButton_2_clicked()
{
   // QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentItem());
    //delete it;
    foreach (QListWidgetItem *NAME, ui->listWidget->selectedItems()) {
       delete ui->listWidget->takeItem(ui->listWidget->row(NAME));
    }
}

