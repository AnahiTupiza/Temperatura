#include "conversor.h"
#include "ui_conversor.h"

Conversor::Conversor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Conversor)
{
    ui->setupUi(this);
}

Conversor::~Conversor()
{
    delete ui;
}

