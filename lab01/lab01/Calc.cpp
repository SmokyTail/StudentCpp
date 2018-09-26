#include <iostream>
#include <cmath>

using namespace std;

void Calc();
void CalcEnd();

double a, b;
int act;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Какое действие вы будете выполнять?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5. a в степени b" << endl << "6. b корней из a" << endl << "7. Loga(b)" << endl << "Ваш ответ: ";
	while (!(cin >> act) || (cin.get() != '\n') || (act < 1) || (act > 7)) {
		cin.clear();
		cout << "Вам необходимо ввести число от 1 до 7." << endl << endl;
	}

	cout << endl << "Введите числа." << endl << "Число a: ";
	while (!(cin >> a) || (cin.get() != '\n')) {
		cin.clear();
		cout << "Необходимо ввести число." << endl << "Число a: ";
	}

	cout << "Число b: ";
	while (!(cin >> b) || (cin.get() != '\n')) {
		cin.clear();
		cout << "Необходимо ввести число." << endl << "Число b: ";
	}

	Calc();

	return 0;
}

void Calc()
{
	double result;

	switch (act) {
	case 1:
		result = a + b;
		break;
	case 2:
		result = a - b;
		break;
	case 3:
		result = a * b;
		break;
	case 4:
		result = a / b;
		break;
	case 5:
		result = pow(a, b);
		break;
	case 6:
		result = pow(a, 1.0 / b);
		break;
	case 7:
		result = log(a) / log(b);
	}

	cout << "Результат = " << result << endl << endl;

	CalcEnd();
}

void CalcEnd()
{
	cout << "Хотите ли вы повторить?" << endl << "1. Да" << endl << "2. Нет" << endl << endl;
	int repeat = 0;
	while (!(cin >> repeat) || (cin.get() != '\n') || (repeat < 1) || (repeat > 2)); {
		cin.clear();
		cout << "Вам необходимо ввести '1' или '2'." << endl << endl;
	}

	switch (repeat) {
	case 1:
		main();
		break;
	case 2:
		break;

		CalcEnd();
	}
}

