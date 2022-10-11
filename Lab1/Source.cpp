#include <iostream>
#include "Vector.h"

using namespace std;

/*����������� �������� ==, != ��� ���� �������� � �������� < ���
������� � ������������� �����(����� �����).*/

int main()
{
	srand(time(NULL));

	Vector v1;

	v1.setSize();
	cin >> v1;
	cout << v1 << endl;

	Vector v2(5);
	v2.inputRandomly();
	cout << v2 << endl;

	cout << "Vector1 + Vector2:\n" << v1 + v2 << endl;
	cout << "Vector1 + Value:\n" << v1 + 7 << endl;
	cout << "Value + Vector2:\n" << 7 + v2 << endl;
	
	return 0;
}