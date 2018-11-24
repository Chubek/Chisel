#include "chisel.h"
#include "ui_chisel.h"

Chisel::Chisel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Chisel)
{
    ui->setupUi(this);
}

Chisel::~Chisel()
{
    delete ui;
}
