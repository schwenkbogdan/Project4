#include "ComplexNumbers.h"
#include "Logger.h"
#include <sstream>
#include <fstream>
	
using namespace std;
ComplexNumbers::ComplexNumbers()
{

}
ComplexNumbers::ComplexNumbers(float RealPart, float ImaginaryPart)
{
	Logger a("construct coplex number", Enable);
	_RealPart = RealPart;
	_ImaginaryPart = ImaginaryPart;
}


istream& operator>>(istream& in, ComplexNumbers& Z1)
{
	in >> Z1._RealPart >> Z1._ImaginaryPart;
	return in;
	// TODO: insert return statement here
}
ostream& operator<<(ostream& out, const ComplexNumbers& Z1)
{
	out << Z1._RealPart << "+" << Z1._ImaginaryPart << "i" << endl;
	return out;
}
ostream& ComplexNumbers::operator<<(ostream& out)
{
	Logger a("output operator", Enable);
	if (_ImaginaryPart >= 0)
	{
		out << _RealPart << "+" << _ImaginaryPart << "i" << endl;
	}
	else
	{
		out << _RealPart << _ImaginaryPart << "i" << endl;
	}
	
	return out;
}
istream& ComplexNumbers::operator>>(istream& in)
{	
	Logger a("input operator", Enable);
	in >> _RealPart >> _ImaginaryPart;
	return in;
	// TODO: insert return statement here
}

void ComplexNumbers::thrigonometryForm()
{
	Logger a("Trigonometric form of a complex number.", Enable);
	float r = sqrt(_RealPart * _RealPart + _ImaginaryPart * _ImaginaryPart);
	float cos_f = acos(_RealPart / r);
	float sin_f = asin(_ImaginaryPart / r);
	cout << r << "*" << "(" << cos_f << "+" << sin_f << "i" << ")" << endl;
}


ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers& _Zres)
{
	Logger a("the addition operation", Enable);
	//_RealPert, _ImaginaryPart
	return ComplexNumbers(_RealPart + _Zres._RealPart, _ImaginaryPart + _Zres._ImaginaryPart);
}

ComplexNumbers ComplexNumbers::operator-(const ComplexNumbers& _Zres)
{
	Logger a("the subtraction operation", Enable);
	return ComplexNumbers(_RealPart - _Zres._RealPart, _ImaginaryPart - _Zres._ImaginaryPart);
}

ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers& Zres)
{
	Logger a("the multiplication  operation", Enable);
	int z1 = _RealPart, z1i = _ImaginaryPart, z2 = Zres._RealPart, z2i = Zres._ImaginaryPart;
	//4+3i * 12-7i
	//	4			12					3i					7i
	(_RealPart * Zres._RealPart) + (_ImaginaryPart * Zres._ImaginaryPart);
	//	4
	(_RealPart * Zres._ImaginaryPart) + (Zres._RealPart * Zres._ImaginaryPart);
	return ComplexNumbers((_RealPart * Zres._RealPart) - (_ImaginaryPart * Zres._ImaginaryPart), (_RealPart * Zres._ImaginaryPart) + (Zres._RealPart * _ImaginaryPart));
}

ComplexNumbers ComplexNumbers::operator/(const ComplexNumbers& Zres)
{
	Logger a("the division operation", Enable);
	// Z1 13+1i
	// Z2 7-6i
	// Z1/Z2 = (Z1 * Z2)/( (-Z2) * Z2) = ()/()
	//	
	//Complex_number res((_RealPart * Zres._RealPart - _ImaginaryPart * (-Zres._ImaginaryPart)) / (Zres._RealPart * Zres._RealPart - Zres._ImaginaryPart * (-Zres._ImaginaryPart)), (_RealPart * (-Zres._ImaginaryPart) + _ImaginaryPart * Zres._RealPart) / (Zres._RealPart * Zres._RealPart - Zres._ImaginaryPart * (-Zres._ImaginaryPart)));
	return ComplexNumbers((_RealPart * Zres._RealPart - _ImaginaryPart * (-Zres._ImaginaryPart)) / (Zres._RealPart * Zres._RealPart - Zres._ImaginaryPart * (-Zres._ImaginaryPart)), 		
		(_RealPart * (-Zres._ImaginaryPart) + _ImaginaryPart * Zres._RealPart) / (Zres._RealPart * Zres._RealPart - Zres._ImaginaryPart * (-Zres._ImaginaryPart)));
}
