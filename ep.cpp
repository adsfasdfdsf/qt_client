#include "ep.h"
#include "./ui_ep.h"

EP::EP(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EP)
{
    ui->setupUi(this);
}

EP::~EP()
{
    delete ui;
}

Ui::EP* EP::getUi()
{
    return ui;
}
