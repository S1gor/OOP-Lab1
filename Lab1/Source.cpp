#include <iostream>
#include "Vector.h"

/*����������� �������� ==, != ��� ���� �������� � �������� < ���
������� � ������������� �����(����� �����).*/

int main()
{
	srand(time(NULL));

	Vector v1;
	
	v1.scanSize();
	v1.fillRandomly(1, 10);
	v1.print();

	return 0;
}