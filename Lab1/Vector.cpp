#include <iostream>
#include "Vector.h"

Vector::Vector()
{}

Vector::~Vector()
{
	delete data;
}

int Vector::scanSize()
{
	printf("Enter the size of the vector (1 - 100): ");
	do {
		scanf_s("%d", &size);
	} while (size <= 0 || size > 100);

	return size;
}

int Vector::getSize()
{
	return size;
}

void Vector::fillRandomly(int min, int max)
{
	srand(time(NULL));

	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = rand() % (max - min) + min;
}

void Vector::fillManually()
{
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		printf("Enter vector[%d] = ", i + 1);
		scanf_s("%d", &data[i]);
	}
	printf("\n");
}

void Vector::print()
{
	printf("Vector:\n");
	for (int i = 0; i < size; i++)
		printf("%2d - %2d\n", i + 1, data[i]);
}

void Vector::clear()
{
	if (!size)	return;
	delete data;
	size = 0;
	data = 0;
}