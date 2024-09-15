#include "server_settings.h"
#include "ui_server_settings.h"

server_settings::server_settings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::server_settings)
{
    ui->setupUi(this);
}

server_settings::~server_settings()
{
    delete ui;
}

Ui::server_settings *server_settings::getUi()
{
    return ui;
}
