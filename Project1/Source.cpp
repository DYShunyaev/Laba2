#include <iostream>
#include <math.h>
#include <locale.h>
#include <string>

using namespace std;


int main() {
	int i = 0;                                                 //номер области на рисунке;
	float x, y,                                                //координаты точек;
		s1, s2, s3, s4, s5;                                    //площади областей;
	double pi = 3.141592653589793;

	setlocale(LC_ALL, "Russian");
	cout << "Лабораторная работа №2:" << endl;
	while (true)
	{

		cout << "\nВведите координаты точки:" << endl;
		cout << "X = ";
		cin >> x;
		cout << "Y = ";
		cin >> y;

		if (x < 0 && x > -1 && y < 2 && y > 1 &&
			x * x + ((y - 1) * (y - 1)) > 1 &&
			((x + 1) * (x + 1)) + ((y - 1) * (y - 1)) < 1) {
			cout << "Точка в области М1. " << endl;
			i = 1;
			cout << "i = " << i << endl;
		}

		else if (x < 2 && x > 1 && y < 2 && y > 0 &&
			(x - 1) * (x - 1) + y * y > 1 &&
			(x - 1) * (x - 1) + (y - 1) * (y - 1) < 1) {
			cout << "Точка в области М2. " << endl;
			i = 2;
			cout << "i = " << i << endl;
		}

		else if (x < 1 && x > -1 && y < 1 && y > -1 &&
			x * x + y * y < 1 &&
			(x + 1) * (x + 1) + (y - 1) * (y - 1) > 1 &&
			(x + 1) * (x + 1) + (y + 1) * (y + 1) > 1 &&
			(x - 1) * (x - 1) + (y + 1) * (y + 1) > 1) {
			cout << "Точка в области М3. " << endl;
			i = 3;
			cout << "i = " << i << endl;
		}

		else if (x < -1 && x > -2 && y < 0 && y > -1 &&
			(x + 1) * (x + 1) + (y + 1) * (y + 1) < 1 &&
			(x + 1) * (x + 1) + y * y > 1) {
			cout << "Точка в области М4. " << endl;
			i = 4;
			cout << "i = " << i << endl;
		}

		else if (x * x + y * y > 1 &&
			(x - 1) * (x - 1) + y * y < 1 &&
			x * x + (y + 1) * (y + 1) < 1) {
			cout << "Точка в области М5. " << endl;
			i = 5;
			cout << "i = " << i << endl;
		}

		else {
			cout << "Точка находится вне области. " << endl;
			i = 0;
			cout << "i = " << i << endl;
		}

		cout.precision(4);                                         //число знаков после дес. точки;

		switch (i)
		{
		case 1: cout << "S1 = " << (s1 = (pi / 4) - (pi / 3) + (sqrt(3) / 4));
			break;
		case 2: cout << "S2 = " << (s2 = (pi / 2) - (pi / 3) + (sqrt(3) / 4));
			break;
		case 3: cout << "S3 = " << (s3 = 3 - (pi / 2));
			break;
		case 4: cout << "S4 = " << (s4 = (pi / 4) - (pi / 3) + (sqrt(3) / 4));
			break;
		case 5: cout << "S5 = " << (s5 = (3 * pi / 4) - 1 - (2 * pi / 3) + (sqrt(3) / 2));
			break;
		default:
			break;
		}

		cout << endl;
		cout << "\nВведите \"Enter\", чтобы продолжить. \nВведите \"Break\", чтобы завершить. " << endl;
			string s;
			cin >> s;
			if (s == "Enter") continue;
			else if (s == "Break") break;


	}
	return 0;
}