#include "conjecturemain.h"
#include "ui_conjecturemain.h"
#include "conjecturecomputation.h"
#include <QObject>

ConjectureMain::ConjectureMain(QWidget *parent): QMainWindow(parent) , ui(new Ui::ConjectureMain)
{

    ui->setupUi(this);
}

void ConjectureMain::ShowCalculates()
{
     int number = ui->plainTextEdit->toPlainText().toInt();
     ConjectureComputation* cl = new ConjectureComputation(number);

        cl->MainCalculate(ui);

}

ConjectureMain::~ConjectureMain()
{
    delete ui;
}


void ConjectureMain::on_pushButton_clicked()
{
    ShowCalculates();

}
