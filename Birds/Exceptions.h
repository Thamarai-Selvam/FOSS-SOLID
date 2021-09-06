#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class NotImplementedException : public std::logic_error
{
public:
    NotImplementedException() : std::logic_error{ "Function not yet implemented." } {}
};


class MyException : public exception
{
public:
    MyException(const string& msg) : m_msg(msg)
    {
        cout << "Exception : " << m_msg << endl;
    }

    ~MyException()
    {
        cout << "MyException::~MyException" << endl;
    }

    virtual const char* what() const throw ()
    {
        cout << "MyException - what" << endl;
        return m_msg.c_str();
    }

    const string m_msg;
};