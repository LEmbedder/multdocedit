#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_action_14_triggered()
{
    QMessageBox mess;
    mess.setWindowTitle(tr("Help"));
    mess.setIcon(QMessageBox::Information);
    mess.setText(tr(VERSION));
    mess.exec();
}
