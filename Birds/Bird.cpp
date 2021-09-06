#include "Bird.h"
#include <iostream>
using namespace std;

Bird::Bird()
{
	cout << "A Bird" << endl;
}

Bird::~Bird()
{
}

void Bird::fly()
{
	cout << "I'm flying...." << endl;
}
