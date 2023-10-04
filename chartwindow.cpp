#include "chartwindow.h"
#include "ui_chartwindow.h"

chartWindow::chartWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chartWindow)
{
    ui->setupUi(this);
}

chartWindow::~chartWindow()
{
    delete ui;
}
