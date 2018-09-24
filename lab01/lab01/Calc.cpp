#include <iostream>
#include <cmath>
using namespace std;

void Calc();
void CalcEnd();

double a, b;
int act;

int main()
{
	cout << "What do you want to do?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5. a^b" << endl << "6. b" << (char)251 << "a" << endl << "7. Loga(b)" << endl << "Your answer: ";
	cin >> act;

	if ((act < 1) || (act > 7))
	{
		cout << "You must enter a number between 1 and 7." << endl;
		main();
	}

	cout << "What are the numbers?" << endl << "Number a: ";
	cin >> a;
	cout << "Number b: ";
	cin >> b;

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

	cout << "Result = " << result << endl;
	CalcEnd();
}

void CalcEnd()
{
	cout << "Do you want to try again? y/n" << endl;
	char rep;
	cin >> rep;

	switch (rep) {
	case 'y':
		main();
		break;
	case 'n':
		break;
	default:
		cout << "You must enter 'y' or 'n'." << endl;
		CalcEnd();
	}
}

