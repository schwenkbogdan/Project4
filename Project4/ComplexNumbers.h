#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
class ComplexNumbers
{
	int _RealPart, _ImaginaryPart;
public:
	ComplexNumbers();
	ComplexNumbers(int RealPart, int ImaginaryPart);
	ostream& operator <<(ostream& out);
	istream& operator >>(istream& in);
	void operator<(const ComplexNumbers& Zres);
	void operator>(const ComplexNumbers& Zres);
	ComplexNumbers operator+(const ComplexNumbers& Zres);
	

	//ComplexNumbers operator+(const ComplexNumbers& Z1, const ComplexNumbers& Z2);
};

