#include <iostream>
#include "Vector.h"

/*Перегрузить операции ==, != для двух векторов и операцию < для
вектора и вещественного числа(число слева).*/

int main()
{
	Vector v;

	v.scanSize();
	v.fillRandomly(1, 50);
	v.print();

	return 0;
}