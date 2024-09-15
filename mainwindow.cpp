#include "mainwindow.h"
#include "ep.h"
#include "./ui_ep.h"
#include "chose_server.h"
#include "server_settings.h"
#include "./ui_chose_server.h"
#include "./ui_server_settings.h"
#include "user.h"
#include "ui_user.h"
#include "chat.h"
#include "./ui_chat.h"

mainwindow::mainwindow() {
    _ep = new EP();
    connect(_ep->getUi()->createSession, &QPushButton::clicked, this, &mainwindow::createSession);
    connect(_ep->getUi()->enterSession, &QPushButton::clicked, this, &mainwindow::enterSession);
    _ep->show();
}

void mainwindow::createSession()
{
    delete _ep;
    _chose_server = nullptr;
    _serv_settings = new server_settings();
    connect(_serv_settings->getUi()->continue_2, &QPushButton::clicked, this, &mainwindow::winName);
    _serv_settings->show();
}

void mainwindow::enterSession()
{
    delete _ep;
    _chose_server = new chose_server();
    _serv_settings = nullptr;
    connect(_chose_server->getUi()->continue_2, &QPushButton::clicked, this, &mainwindow::winName);
    _chose_server->show();
}


void mainwindow::winName()
{
    if (_chose_server == nullptr){
        delete _serv_settings;
    }
    else {
        delete _chose_server;
    }
    _username = new user();
    connect(_username->getUi()->continue_button, &QPushButton::clicked, this, &mainwindow::setName);
    _username->show();
}

void mainwindow::sendMessage()
{

}

void mainwindow::setName()
{
    _name = _username->getUi()->lineEdit->text();
    delete _username;
    _chat = new chat();
    connect(_chat->getUi()->buttonSend, &QPushButton::clicked, this, &mainwindow::sendMessage);
    _chat->show();
}
