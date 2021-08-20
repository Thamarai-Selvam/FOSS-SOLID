#pragma once
#include "pch.h"
using namespace std;

class Logger
{
public:
    static Logger* getInstance();
    bool Log(string moduleName, string message);
private:
    // private constructor and destructor
    Logger();
    ~Logger();

    // private copy constructor and assignment operator
    Logger(const Logger&);
    Logger& operator=(const Logger&);

    //util functions
    string getLogFile();
    void generateLogFile();
    void generateLogFileName();
    string logStartLine();

    //data members
    static Logger* m_Logger;
    string m_logFile;

    friend class ILog;
};


