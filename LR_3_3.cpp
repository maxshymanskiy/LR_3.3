// Lab_03_3.cpp
// <���������� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 20

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
		if (x <= 0)
			y = -x / 2.;
		else
			if (0 < x && x <= R)
				y = R - sqrt( pow(R, 2) - pow(R, 2));
			else
				if (R < x && x <= 2 * R)
					y = sqrt(pow(R, 2) - pow((x - R), 2));
				else
					y = -(x - 2 * R) / (6 - 2 * R);
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}