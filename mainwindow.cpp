#include <QMessageBox>

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Hello!", "Hello, you clicked the button!");
}


void MainWindow::on_setButton_clicked()
{
    ui->something->setText(ui->textToSet->text());
}


void MainWindow::on_textToSet_returnPressed()
{
    on_setButton_clicked();
}


void MainWindow::on_pushButton_2_clicked()
{
    unsigned int value = ui->progressBar->value() + 1;
    
    if (value > 100) {
        value = 0;
    }
    
    ui->progressBar->setValue(value);
}


void MainWindow::on_warningButton_clicked()
{
    QMessageBox::warning(this, "Warning", "This is a warning.");
}


void MainWindow::on_errorButton_clicked()
{
    QMessageBox::warning(this, "Error", "This is a error");
}

