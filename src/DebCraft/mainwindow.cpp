#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->destHelp->setIcon(qApp->style()->standardIcon(QStyle::SP_DialogHelpButton));
    ui->statusBar->showMessage("debcraft v0.0");

    connect(ui->actionQuit, SIGNAL(triggered()), SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
