#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setText("Voici la 1ère ligne");
    ui->textEdit->append("Ajout de la 2ème ligne");

}

MainWindow::~MainWindow()
{
    delete ui;
}
