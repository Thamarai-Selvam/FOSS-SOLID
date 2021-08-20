#include "pch.h"
#include <iostream>
#include "framework.h"
#include "Calculator.h"
#include "../Logger/Logger.h"
#include <string>

using namespace std;

void Calculator::fnResLogger(double x, char oper, double y, double res)
{
    Logger* logger = logger->getInstance();
    string calcMsg = "Operation : " + to_string(oper) + " N1 : " + to_string(x) + " N2 : " + to_string(y) + " Result : " + to_string(res);
    logger->Log("Calculator::fnCalculator", calcMsg);
}

double Calculator::fnCalculator(double x, char oper, double y)
{
    double res;
    switch (oper)
    {
    case '+':
        res = x + y;
        break;
    case '-':
        res = x - y;
        break;
    case '*':
        res = x * y;
        break;
    case '/':
        res = x / y;
        break;
    default:
        res = 0.0;
    }
    fnResLogger(x, oper, y, res);
    return res;
}
