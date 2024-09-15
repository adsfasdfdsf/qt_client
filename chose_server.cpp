#include "chose_server.h"
#include "ui_chose_server.h"

chose_server::chose_server(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chose_server)
{
    ui->setupUi(this);
}

chose_server::~chose_server()
{
    delete ui;
}

Ui::chose_server *chose_server::getUi()
{
    return ui;
}
