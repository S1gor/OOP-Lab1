#include <iostream>
#include "Vector.h"

using namespace std;

/*Перегрузить операции ==, != для двух векторов и операцию < для
вектора и вещественного числа(число слева).*/

int main()
{
	srand(time(NULL));

	Vector v(5.7, 0);
	cout << v.getSize() << endl;
	v.print();

	cout << endl;

	Vector v2(1.4, 2.7, 3.9);
	cout << v2.getSize() << endl;
	v2.print();

	return 0;
}