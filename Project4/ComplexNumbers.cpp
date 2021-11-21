#include "ComplexNumbers.h"
#include <sstream>
#include <fstream>
using namespace std;
ComplexNumbers::ComplexNumbers()
{

}
ComplexNumbers::ComplexNumbers(int RealPart, int ImaginaryPart)
{
	_RealPart = RealPart;
	_ImaginaryPart = ImaginaryPart;
}

//ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers& Z1, const ComplexNumbers& Z2)
//{
//	return ComplexNumbers();
//}

ostream& ComplexNumbers::operator<<(ostream& out)
{	
	out << _RealPart <<"+" << _ImaginaryPart << "i" << endl;
	return out;
}
istream& ComplexNumbers::operator>>(istream& in)
{	
	in >> _RealPart >> _ImaginaryPart;
	return in;
	// TODO: insert return statement here
}

void ComplexNumbers::operator<(const ComplexNumbers& Zres)
{
	//Logger a("Input", Enable);
	/*if (numerator * B.denominator < B.numerator * denominator)
	{
		cout << numerator << "/" << denominator << " less " << B.numerator << "/" << B.denominator << endl;
	}
	else
	{
		cout << numerator << "/" << denominator << " not less " << B.numerator << "/" << B.denominator << endl;
	}*/
}
void ComplexNumbers::operator>(const ComplexNumbers& Zres)
{

}

ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers& _Zres)
{
	//_RealPert, _ImaginaryPart
	return ComplexNumbers(_RealPart + _Zres._RealPart);
}
