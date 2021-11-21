#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include "Logger.h"

using namespace std;



class ComplexNumbers
{
public:
	float _RealPart, _ImaginaryPart;

	ComplexNumbers();
	ComplexNumbers(float RealPart, float ImaginaryPart);
	
	

	friend istream& operator>>(istream& in, ComplexNumbers& Z1);	
	friend ostream& operator<<(ostream& out, const ComplexNumbers& Z1);
		
	ostream& operator <<(ostream& out);	
	istream& operator >>(istream& in);
	
	void thrigonometryForm();

	ComplexNumbers operator+(const ComplexNumbers& Zres);
	ComplexNumbers operator-(const ComplexNumbers& Zres);
	ComplexNumbers operator*(const ComplexNumbers& Zres);
	ComplexNumbers operator/(const ComplexNumbers& Zres);
	


	//ComplexNumbers operator+(const ComplexNumbers& Z1, const ComplexNumbers& Z2);
};

//ostream& operator<<(ostream& out, const ComplexNumbers& Z1);