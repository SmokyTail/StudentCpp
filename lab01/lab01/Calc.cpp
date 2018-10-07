#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << endl 
		<< "Какое действие вы будете выполнять?" << endl
		<< "1. +" << endl << "2. -" << endl 
		<< "3. *" << endl << "4. /" << endl 
		<< "5. a в степени b" << endl 
		<< "6. b корней из a" << endl 
		<< "7. Loga(b)" << endl 
		<< "Ваш ответ: ";

	int act;

	while (!(cin >> act) || cin.peek() != '\n' || act < 1 || act > 7) {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "Необходимо ввести число от 1 до 7." << endl
			<< "Ваш ответ: ";
	}

	cout << endl 
		<< "Введите числа." << endl 
		<< "Число a: ";

	double a;

	while (!(cin >> a) || cin.peek() != '\n') {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "Необходимо ввести число." << endl
			<< "Число a: ";
	}

	cout << "Число b: ";

	double b;

	while (!(cin >> b) || cin.peek() != '\n') {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "Необходимо ввести число." << endl
			<< "Число b: ";
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

	cout << "Результат = " << result << endl
		<< endl
		<< "Хотите ли вы повторить?" << endl
		<< "1. Да" << endl 
		<< "2. Нет" << endl
		<< "Ваш ответ: ";

	int repeat;

	while (!(cin >> repeat) || cin.peek() != '\n' || repeat < 1 || repeat > 2) {
		cin.clear();
		while (cin.get() != '\n');
		cout << endl 
			<< "Вам необходимо ввести '1' или '2'." << endl
			<< endl;
	}

	switch (repeat) {
	case 1: main(); break;
	case 2: break;
	}

	return 0;
}