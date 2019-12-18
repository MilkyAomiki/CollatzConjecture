#ifndef CONJECTUREMAIN_H
#define CONJECTUREMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ConjectureMain; }
QT_END_NAMESPACE

class ConjectureMain : public QMainWindow
{
    Q_OBJECT

public:
    ConjectureMain(QWidget *parent = nullptr);
    void ShowCalculates();
    ~ConjectureMain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ConjectureMain *ui;
};
#endif // CONJECTUREMAIN_H
