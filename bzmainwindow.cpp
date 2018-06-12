#include "bzmainwindow.h"
#include "ui_bzmainwindow.h"

BzMainWindow::BzMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BzMainWindow)
{
    ui->setupUi(this);
}

BzMainWindow::~BzMainWindow()
{
    delete ui;
}

void BzMainWindow::on_action_Nouveau_triggered()
{

}

void BzMainWindow::on_action_Quitter_triggered()
{
    close();
}
