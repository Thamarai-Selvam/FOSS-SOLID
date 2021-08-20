#pragma once
#include <string>
#pragma warning(disable : 4996)
using namespace std;
class Time
{
public:
	static string getDay();
	static tm* getCurrTime();
	static string getDateAndTime();
	static string getYear();
	static string getMonth();
	static string getDate();


};

