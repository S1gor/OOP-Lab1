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
	
	return 0;
}