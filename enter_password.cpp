#include "enter_password.h"
#include "ui_enter_password.h"

enter_password::enter_password(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::enter_password)
{
    ui->setupUi(this);
}

enter_password::~enter_password()
{
    delete ui;
}
