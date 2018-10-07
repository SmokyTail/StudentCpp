#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << endl 
		<< "����� �������� �� ������ ���������?" << endl
		<< "1. +" << endl << "2. -" << endl 
		<< "3. *" << endl << "4. /" << endl 
		<< "5. a � ������� b" << endl 
		<< "6. b ������ �� a" << endl 
		<< "7. Loga(b)" << endl 
		<< "��� �����: ";

	int act;

	while (!(cin >> act) || cin.peek() != '\n' || act < 1 || act > 7) {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "���������� ������ ����� �� 1 �� 7." << endl
			<< "��� �����: ";
	}

	cout << endl 
		<< "������� �����." << endl 
		<< "����� a: ";

	double a;

	while (!(cin >> a) || cin.peek() != '\n') {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "���������� ������ �����." << endl
			<< "����� a: ";
	}

	cout << "����� b: ";

	double b;

	while (!(cin >> b) || cin.peek() != '\n') {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "���������� ������ �����." << endl
			<< "����� b: ";
	}
	
	double result;

	switch (act) {
	case 1: result = a + b; break;
	case 2: result = a - b; break;
	case 3: result = a * b; break;
	case 4: result = a / b; break;
	case 5: result = pow(a, b); break;
	case 6: result = pow(a, 1.0 / b); break;
	case 7: result = log(a) / log(b);
	}

	cout << "��������� = " << result << endl
		<< endl
		<< "������ �� �� ���������?" << endl
		<< "1. ��" << endl 
		<< "2. ���" << endl
		<< "��� �����: ";

	int repeat;

	while (!(cin >> repeat) || cin.peek() != '\n' || repeat < 1 || repeat > 2) {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "��� ���������� ������ '1' ��� '2'." << endl
			<< endl;
	}

	switch (repeat) {
	case 1: main(); break;
	case 2: break;
	}

	return 0;
}