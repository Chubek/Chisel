#ifndef CHISEL_H
#define CHISEL_H

#include <QMainWindow>

namespace Ui {
class Chisel;
}

class Chisel : public QMainWindow
{
    Q_OBJECT

public:
    explicit Chisel(QWidget *parent = nullptr);
    ~Chisel();

private:
    Ui::Chisel *ui;
};

#endif // CHISEL_H
