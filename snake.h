#ifndef SNAKE_H
#define SNAKE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Snake; }
QT_END_NAMESPACE

class Snake : public QWidget
{
    Q_OBJECT

public:
    Snake(QWidget *parent = nullptr);
    ~Snake();

private:
    Ui::Snake *ui;
};
#endif // SNAKE_H
