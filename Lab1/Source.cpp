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
	cin >> v1;
	cout << v1 << endl;
	
	return 0;
}