#include "calculator.h"
//created by student 
//of group IO-04
//Vodzinskiy Roman
//some changes 1
//some changes 2
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
