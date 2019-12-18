#include <QObject>
#include "conjecturecomputation.h"
#include "conjecturemain.h"
#include "ui_conjecturemain.h"

int ConjectureComputation::MainCalculate(Ui::ConjectureMain* ui)
{
    int checkExit = 0;
    ui->textBrowser->clear();
    while(checkExit < 3)
    {
        int lastNumber = number;
        if(number % 2 == 0)
        {
            number /= 2;
            int textToPrint = number;

            ui->textBrowser->append(QString::number(textToPrint));
            ui->textBrowser->insertPlainText("\teven\t"+  QString::number(textToPrint)+ " -> " + QString::number(lastNumber) +" / 2");

        }
        else
        {
             number = number * 3 + 1;
             int textToPrint = number;
             ui->textBrowser->append(QString::number(textToPrint));
             ui->textBrowser->insertPlainText("\todd\t"+  QString::number(textToPrint)+ " -> " + QString::number(lastNumber) +" * 3 + 1");
        }

        if(number == 1 && checkExit == 0)
        {
            ui->textBrowser->append("\n\tThis is the end\n\tFurther - just loop\n");
        }

        if(number == 1)
        {
            checkExit ++;
        }


    }

    QString dots = ".";
    for(int dot = 0; dot < 8; dot++)
    {

        ui->textBrowser->append(dots);
        dots += dots[0];
    }
    return 0;
}

