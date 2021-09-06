#include "Penguin.h"
#include <exception>
#include <iostream>
#include "Exceptions.h"
using namespace std;


void Penguin::swim()
{
	cout << "I'm swimming"<<endl;
}

void Penguin::fly()
{
	throw MyException("Cannot fly");
}

Penguin::Penguin(){}

Penguin::~Penguin(){}