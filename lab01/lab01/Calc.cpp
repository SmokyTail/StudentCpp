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

	cout << "����� �������� �� ������ ���������?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5. a � ������� b" << endl << "6. b ������ �� a" << endl << "7. Loga(b)" << endl << "��� �����: ";
	while (!(cin >> act)) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "��� ���������� ������ ����� �� 1 �� 7." << endl << endl;
	}

	if ((act < 1) || (act > 7)) {
		cout << "��� ���������� ������ ����� �� 1 �� 7." << endl << endl;
		main();
	}

	cout << endl << "������� �����." << endl << "����� a: ";
	while (!(cin >> a)) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "���������� ������ �����." << endl << endl;
	}

	cout << "����� b: ";
	while (!(cin >> b)) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "���������� ������ �����." << endl << endl;
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

	cout << "��������� = " << result << endl << endl;
	CalcEnd();
}

void CalcEnd()
{
	cout << "������ �� �� ���������?" << endl << "1. ��" << endl << "2. ���" << endl << endl;
	int repeat = 0;
	while (!(cin >> repeat)) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "��� ���������� ������ '1' ��� '2'." << endl << endl;
	}

	switch (repeat) {
	case 1:
		main();
		break;
	case 2:
		break;
	default:
		cout << "��� ���������� ������ '1' ��� '2'." << endl << endl;
		CalcEnd();
	}
}

