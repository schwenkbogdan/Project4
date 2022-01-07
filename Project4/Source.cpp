/*������� � ������ : ����������� �������������� ������� � �������������� �������.
�������������� ������ ������ � ������������ � �������������� ���������.
�������� ���������� ������ :
1. ����������� �������� ������� ������ �� ��������������� �������.
2. �������� � �������� ��������� ������� ������.
3. �������������� ������ ��������� �� ��������� �������� ������.
4. ����������� ������ �� ������� :
��� ���������� ��� ��� ?
����������� � ��������������� �������� �������� �������� ��������� ������
(��������������� ������������ �����������, ��������, ���������, �����������, �������������).
��� �������� ��� �����������, ���������� ����������� ?
��� ���������� ��� ����������� ������ ? 
����������� � ��������������� ������ ������� � ������ ������.
� ��� �������������� ������� ������������� ������� � �������� ?
����������� ������������� ������� �������.
����������� ���� �������������.
��������������� ������� ������ ����� �������.����� ������� ���������� ������� � ��������� ? 
����� ������� ����������� ����� ��������� ������� ���������� / �������� ����������� ������ ?
��� �������������� ��������� ����� ������� ?
��� �������� ��� ������������� �������� ? ������� ������������������ ������ �������.
����� ������� ������������ ������� ������� �������� �� ��������� ���� �� ������.
��� ���������� ��� ����������� ?
��������� � ��������������� �������� ��������� ��������� ���������� ?
����������� �������� ������� ������������� ���������� � ����.
��������� ������ ��������� � ��������� ������������ ������ � ������ ���������� ������ � ���������� ?
����� ������� ��������� ������������ ������� ������ ?
��� �������� ��� ����������� ������� ?
*/
/* ������� 1
����������� ����� ��� ������ � ������������ �������.
������ ����������, ������������� � ���������� ���������� ������:
1. ����������� ����������������� (������ � ������������ ��������� �
�����������)  �  �������������������.  ���  ������������  �����  ���������
����������� ����������.
2.  �����������  ����������  ������  A+B,  A-B,  A*B,  A/B.  �  ������
������������� ���������� �������� (� ����� ������ ����������) ���������
����������� ����������.

3. ������� ������ ������, �����������:

- ���������� ����������� ����� � �������, ������� ������;
-  ���������� ������ �� ����������� �����, ���������� ��������� �
������������ �������.

5. ����������� ��������� ���������.

7. �������� ������������� ������� ���� � ����������� ������� ������.

8.  ������  ������  �  ������,  �����������  �������  ������  ���������
�������� ������.*/
/*
������� 2
��������  ���������  �����������  ������  �  �������  (���������  /
�����������).  ������  �������  �������  �����  ������  ���������������  ���
����������. ��� ��������� � ����������� ������ �������������� ������������
(������ private).
������ ����������, ������������� � ���������� ���������� ������:
1. ����������� �� ��������� ������ ��������� ����� � ���������� 0 �
������������ 1.
2. ����������������� ����������� ������ ��������� ���������� �����
�� �������� ����������� ������ �������� (�������� �������).
3. ���� ����� ��������������� ��������� � ���������.
4. ��  �����������  �������  ��  ����.  �  ������  ����  �����  ���������
���������� ����������.
5. �����  �����  ������  ������������  ����������  ��������������  �
���������� �������� (���������� +, -, /, *, -1, �������, <, <=, >, >=, =).
6. �����  ������  �������������  ��������  ������������  (������������
�����-����������� � ������).
7. ������ ������ � ������, �����������  ������� ������ ���������
�������� ������.
*/
/*
�������: ������������ ��������� ���������� �������� �������� ��4.

1. ������� ����������� ����� IError � �����, ������������ ��������� ��� 
��������, �������� � ������ ������. ���� � ����� ������/��� ������. 
����������� ������� print, ������� �� ��������� �������� ������������ ����.

2. ������������� �� IError ��� ������� ��� ������ ������ (�� �����������). 
� ���������� ���������� ������ ���������� ��������� ������������ � START 
(��� ����� ����� event loop �(��) state machine), ���� ����������, � �������� 
���������� �� ������ � ��������������� ���� ������ �����.

3. ����������� ������� print_error_list(std::vector err), ������� ����� 
�������� ������ ���� ������, ������������ �� ����� ������ ���������.
������������ ��������� ���������� ����.
*/
#include <iostream>
#include"fraction.h"
#include"ComplexNumbers.h"
#include"DateTime.h"
#include <ctime>
using namespace std;
int main()
{
	Logger logger = Logger("log");
	
	DateTime CurrentDate;
	DateTime Alarm;	

	ComplexNumbers Z1;
	ComplexNumbers Z2;
	ComplexNumbers Zres;

	////cin >> Z1;
	//time_t now = time(0);
	//char* dt = ctime(&now);
	//cout << "The local date and time is: " << dt << endl;
	//tm* gmtm = gmtime(&now);
	//dt = asctime(gmtm);
	//cout << "The UTC date and time is:" << dt << endl;
	//cout << Z1;
	
	Z1.operator>>(cin);
	Z2.operator>>(cin);
	

	Zres = Z1.operator+(Z2);
	cout << "Z1 + Z2 = " << Zres;
	Zres = Z1.operator-(Z2);
	cout << "Z1 - Z2 = " << Zres;
	Zres = Z1.operator*(Z2);
	cout << "Z1 * Z2 = " << Zres;
	Zres = Z1.operator/(Z2);
	cout << "Z1 / Z2 = " << Zres;
	Zres.thrigonometryForm();
	cout << "thrigonometryForm";



	//Zres.operator<<(cout);
	//cin << first();	
	//cout << Z1;
	//cout << Z1.operator+(Z2);
	//cout >> res;
	return 0;
}


/*
* 1 ��� ���������� ��� ���?
* 2 ����������� � ��������������� �������� �������� �������� ��������� ������
(��������������� ������������ �����������, ��������, ���������, �����������,
�������������).
3 ��� �������� ��� �����������, ���������� �����������?

*/