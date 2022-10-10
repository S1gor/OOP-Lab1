#include <iostream>
#include "Vector.h"

using namespace std;

/*Перегрузить операции ==, != для двух векторов и операцию < для
вектора и вещественного числа(число слева).*/

int main()
{
	srand(time(NULL));

	Vector v1;

	v1.setSize();
	v1.setDataRandomly();
	cout << v1 << endl;

	Vector v2(5);
	v2.setDataRandomly();
	cout << v2 << endl;

	//cout << v1 + v2 << endl;


	return 0;
}