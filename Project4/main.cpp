/*

    Что понимается под ООП?
    Перечислите и охарактеризуйте основные принципы создания объектной модели (абстрагирование инкапсуляция модульность, иерархия, типизация, параллелизм, сохраняемость).
    Что понимают под интерфейсом, внутренней реализацией?
    Что понимается под экземпляром класса? Перечислите и охарактеризуйте уровни доступа к членам класса. В чем принципиальное отличие использования классов и структур?
    Представьте классификацию методов объекта.
    Перечислите виды конструкторов.
    Охарактеризуйте понятие «время жизни объекта». Каков порядок разрушения классов в программе? Каким образом программист может наблюдать процесс разрушения/создания экземпляров класса?
    Где контролируется смысловая связь объекта?
    Что понимают под многофайловым проектом? Опишите последовательность сборки проекта.
    Каким образом шаблонизация методов классов повлияет на разбиение кода по файлам.
    Что понимается под исключением?
    Приведите и охарактеризуйте основные параметры обработки исключений?
    Перечислите основные правила использования исключений в коде.
    Приведите пример генерации и обработки динамической строки и данных строкового потока в исключении?
    Каким образом реализуют наследование классов ошибок?
    Что понимают под абстрактным классом?


Part 1.

Задание 1. Создание класса согласно списка требований, предъявляемых к 
реализации интерфейса класса. Example (object-oriented programming, encapsulation).

Задание 2. Многофайловая организация проекта. Multi-file project.

Part 2.

Создание класса согласно списка требований, предъявляемых к реализации 
интерфейса класса. Example (object-oriented programming, encapsulation). 
Обязательна многофайловая структура проекта.

Part 3.

Задание: Сформировать обработку исключений согласно варианту ЛР4.

1. Создать абстрактный класс IError – класс, определяющий интерфейс 
для хранения, описания и вывода ошибок. Поле – текст ошибки/код ошибки. 
Виртуальная функция print, которая по умолчанию печатает единственное поле.

2. Отнаследовать от IError как минимум два класса ошибок (не абстрактных).
В обработках исключений вместо завершения программы возвращаться в START 
(для этого нужен event loop и(ли) state machine), если необходимо, и 
заносить информацию об ошибке в соответствующий типу ошибки класс.

3. Реализовать функцию print_error_list(std::vector err), которая будет 
выводить список всех ошибок, произошедших за время работы программы. 
Использовать повышение приведения типа.
123
*/

#include <iostream>
#include "fraction.h"
#include "ComplexNumbers.h"
#include "DateTime.h"
#include "IError.h"
#include <ctime>
using namespace std;

void PrintComplex()
{

	ComplexNumbers Z1;
	ComplexNumbers Z2;
	ComplexNumbers Zres;
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

	Z1.operator>>(cin);
	Z2.operator>>(cin);

}

void main()
{
	Logger logger = Logger("log");
	
	DateTime CurrentDate;
	DateTime Alarm;	

	cout << "Выберите, включить ли логгер для программы или нет:\n1. Да.\n2. Нет.\n: ";
	string _choice;
	try {

		cin >> _choice;
		for (int i = 0; i < _choice.size(); i++)
			if (_choice[i] < 48 || _choice[i]> 57) throw InputIError("input error", "wrong char");
			else if ((_choice != "1") && (_choice != "2")) throw InputIError("input error", "wrong variant");

	}

	catch (InputIError& exception) {
		cerr << "ERROR: (" << exception.what() << ")\n";
		while (true) {

			cout << "Вы неверно ввели номер варианта. Повторите попытку:\n: ";
			cin >> _choice;
			if ((_choice == "1") || (_choice == "2")) break;
		}
	}

	switch (stoi(_choice)) {
	case 1: {
		Enable = 1;
		break;
	}
	default: {
		break;
	}
	}

	cout << "\nВыберите, какое задание включить:\n1. Работа с дробями.\n2. Игра.\n: ";
	try {

		cin >> _choice;
		for (int i = 0; i < _choice.size(); i++)
			if (_choice[i] < 48 || _choice[i]> 57) throw InputIError("input error", "wrong char");
			else if ((_choice != "1") && (_choice != "2")) throw InputIError("input error", "wrong variant");
	}

	catch (InputIError& exception) {
		cerr << "ERROR: (" << exception.what() << ")\n";
		while (true) {

			cout << "Вы неверно ввели номер варианта. Повторите попытку:\n: ";
			cin >> _choice;
			if ((_choice == "1") || (_choice == "2")) break;
		}
	}

	switch (stoi(_choice)) {
	case 1: {
		//FracNumTest();
		break;
	}
	default: {
		//FunnyGame Game;
	}
	}


	////cin >> Z1;
	//time_t now = time(0);
	//char* dt = ctime(&now);
	//cout << "The local date and time is: " << dt << endl;
	//tm* gmtm = gmtime(&now);
	//dt = asctime(gmtm);
	//cout << "The UTC date and time is:" << dt << endl;
	//cout << Z1;
	//Zres.operator<<(cout);
	//cin << first();	
	//cout << Z1;
	//cout << Z1.operator+(Z2);
	//cout >> res;
}


