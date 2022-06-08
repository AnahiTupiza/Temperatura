#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Conversor; }
QT_END_NAMESPACE

class Conversor : public QMainWindow
{
    Q_OBJECT

public:
    Conversor(QWidget *parent = nullptr);
    ~Conversor();

private:
    Ui::Conversor *ui;
};
#endif // CONVERSOR_H
