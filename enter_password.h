#ifndef ENTER_PASSWORD_H
#define ENTER_PASSWORD_H

#include <QWidget>

namespace Ui {
class enter_password;
}

class enter_password : public QWidget
{
    Q_OBJECT

public:
    explicit enter_password(QWidget *parent = nullptr);
    ~enter_password();

private:
    Ui::enter_password *ui;
};

#endif // ENTER_PASSWORD_H
