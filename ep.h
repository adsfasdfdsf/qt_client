#ifndef EP_H
#define EP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class EP;
}
QT_END_NAMESPACE

class EP : public QMainWindow
{
    Q_OBJECT

public:
    EP(QWidget *parent = nullptr);
    ~EP();
    Ui::EP* getUi();
private:
    Ui::EP *ui;

};
#endif // EP_H
