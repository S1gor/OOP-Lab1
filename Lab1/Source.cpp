#include <iostream>
#include "Vector.h"

/*Перегрузить операции ==, != для двух векторов и операцию < для
вектора и вещественного числа(число слева).*/

int main()
{
	srand(time(NULL));

	Vector v1, v2;

	v1.scanSize();
	v2.scanSize();
	v1.fillManually();
	v2.fillManually();
	v1.print();
	v2.print();
	/*if (v1.operator==(v2))
		printf("V1==V2\n");
	else
		printf("False\n");*/

	if (v1.operator!=(v2))
		printf("V1!=V2");
	else
		printf("False");

	return 0;
}