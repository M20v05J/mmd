#ifndef CONFIRMPROFILE_H
#define CONFIRMPROFILE_H

#include <QMainWindow>

namespace Ui {
class confirmprofile;
}

class confirmprofile : public QMainWindow
{
    Q_OBJECT

public:
    explicit confirmprofile(QWidget *parent = nullptr);
    ~confirmprofile();

private:
    Ui::confirmprofile *ui;
};

#endif // CONFIRMPROFILE_H
