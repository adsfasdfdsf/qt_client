#ifndef CHOSE_SERVER_H
#define CHOSE_SERVER_H

#include <QWidget>

namespace Ui {
class chose_server;
}

class chose_server : public QWidget
{
    Q_OBJECT

public:
    explicit chose_server(QWidget *parent = nullptr);
    ~chose_server();
    Ui::chose_server* getUi();
private:
    Ui::chose_server *ui;
};

#endif // CHOSE_SERVER_H
