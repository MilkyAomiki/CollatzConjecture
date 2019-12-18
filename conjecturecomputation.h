#ifndef CONJECTURECOMPUTATION_H
#define CONJECTURECOMPUTATION_H

#include <QObject>
#include <iostream>
#include "ui_conjecturemain.h"
#include "conjecturemain.h"
using namespace std;

class ConjectureComputation
{
public:
    ConjectureComputation(int num): number(num)
    {

    }

int MainCalculate(Ui::ConjectureMain* ui);

private:
      int number;


};

#endif // CONJECTURECOMPUTATION_H
