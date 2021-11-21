#include "Logger.h"
#include <iostream>
using namespace std;

bool Enable = false;

Logger::Logger(const string& str, const bool _enable) : nameclass(str, _enable)
{
    cout << endl << "construct " << str << endl;
}

Logger::~Logger() 
{
    cout << endl << "destruct " << nameclass << endl;
}   
