#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include "InputIError.h"
#include "MathIError.h"
using namespace std;
class IError
{
public:
	virtual void Print();
	//virtual void Print_error_list(vector err);
};