#include <iostream>
#include "Vector.h"

using namespace std;

/*����������� �������� ==, != ��� ���� �������� � �������� < ���
������� � ������������� �����(����� �����).*/

int main()
{
	srand(time(NULL));

	Vector v1, v2;
	v1.setSize();
	v1.setDataRandomly(1, 10);
	v1.print();

	return 0;
}