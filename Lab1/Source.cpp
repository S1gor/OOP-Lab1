#include <iostream>
#include "Vector.h"

/*����������� �������� ==, != ��� ���� �������� � �������� < ���
������� � ������������� �����(����� �����).*/

int main()
{
	Vector v;

	v.scanSize();
	v.fillRandomly(1, 50);
	v.print();

	return 0;
}