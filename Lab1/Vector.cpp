#include <iostream>
#include "Vector.h"

Vector::Vector()
{}

Vector::Vector(int size) : size(size)
{
	if (size <= 0)	printf("Invalid vector size: %d\n", size);
}

Vector::Vector(float x, float y) : size(2)
{
	data = new float[2];
	data[0] = x;
	data[1] = y;
}

Vector::Vector(float x, float y, float z) : size(3)
{
	data = new float[3];
	data[0] = x;
	data[1] = y;
	data[2] = z;
}

Vector::~Vector()
{
	delete[] data;
}

int Vector::setSize()
{
	printf("Enter the size of the vector (1 - 100): ");
	do {
		scanf_s("%d", &size);
	} while (size < 1 || size > 100);
	return size;
}

int Vector::getSize() const
{
	return size;
}

float Vector::getLen() const
{
	float sum = 0;
	for (int i = 0; i < getSize(); i++)
		sum += data[i] * data[i];
	return sqrt(sum);
}

void Vector::setDataRandomly(int min, int max)
{
	if (size <= 0)	return;

	data = new float[size];
	for (int i = 0; i < size; i++)
		data[i] = rand() % (max - min) + min;
}

void Vector::setDataManually()
{
	if (size <= 0)	return;

	data = new float[size];
	for (int i = 0; i < size; i++)
	{
		printf("Enter vector[%d] = ", i + 1);
		scanf_s("%d", &data[i]);
	}
	printf("\n");
}

void Vector::print() const
{
	if (data == nullptr)	return;

	printf("Vector:\n");
	for (int i = 0; i < size; i++)
		printf("[%2d] - %.1f\n", i + 1, data[i]);
}

void Vector::clear()
{
	if (!size)	return;
	delete[] data;
	size = 0;
	data = nullptr;
}

bool Vector::operator==(Vector& vector)
{
	return getLen() == vector.getLen();
}

bool Vector::operator!=(Vector& vector)
{
	return getLen() != vector.getLen();
}

bool operator<(float a, Vector const& vector)
{
	return a < vector.getLen();
}