#ifndef SERVER_SETTINGS_H
#define SERVER_SETTINGS_H

#include <QWidget>

namespace Ui {
class server_settings;
}

class server_settings : public QWidget
{
    Q_OBJECT

public:
    explicit server_settings(QWidget *parent = nullptr);
    ~server_settings();
    Ui::server_settings* getUi();

private:
    Ui::server_settings *ui;
};

#endif // SERVER_SETTINGS_H
