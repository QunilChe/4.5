// Lab_03_4.cpp
// < �������� ����� >
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 22
#include <iostream>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double r;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> r;
		// ������������ � ����� ����
		if ((y <= sqrt((r * r) - (x * x)) && y <= 0 && x >= 0) ||
			(y <= 0 && y >= ((-1) * x * r) && y <= (2 * x - 2 * r)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cin.get();
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;
		if ((y <= sqrt((r * r) - (x * x)) && y <= 0 && x >= 0) ||
			(y <= 0 && y >= ((-1) * x * r) && y <= (2 * x - 2 * r)))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}

