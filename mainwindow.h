#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QTcpSocket>

class EP;
class chose_server;
class server_settings;
class user;
class chat;

class mainwindow: public QObject
{
    Q_OBJECT

public:
    mainwindow();
private:
    EP* _ep;
    QString _name;
    QTcpSocket* _sock;
    chose_server* _chose_server;
    server_settings* _serv_settings;
    user* _username;
    chat* _chat;
public slots:
    void createSession();
    void enterSession();
    void setName();
    void winName();
    void sendMessage();
};

#endif // MAINWINDOW_H
