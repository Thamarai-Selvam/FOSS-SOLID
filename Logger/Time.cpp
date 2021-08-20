#include "pch.h"
#include "Time.h"
#include <iostream>
#include <string>

using namespace std;

string Time::getDay()
{
    char yyyymmdd[256];
    tm* ltm = Time::getCurrTime();
    strftime(yyyymmdd, sizeof(yyyymmdd), "%Y%m%d ", ltm);

    return string(yyyymmdd);
}

tm* Time::getCurrTime()
{
    time_t now = time(0);
    tm* ltm = localtime(&now);

    return ltm;
}

/// <summary>
/// This function gives date and time in string format
/// </summary>
/// <returns>string of date and time</returns>
string Time::getDateAndTime()
{
    char dateAndTime[256];
    tm* ltm = getCurrTime();
    strftime(dateAndTime, sizeof(dateAndTime), "%d-%m-%Y %H:%M:%S", ltm);
    return string(dateAndTime);
}

string Time::getYear()
{
    return to_string(getCurrTime()->tm_year);
}

string Time::getMonth()
{
    return to_string(getCurrTime()->tm_mon);
}

string Time::getDate()
{
    return to_string(getCurrTime()->tm_mday);
}
