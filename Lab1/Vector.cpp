#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector()
{}

Vector::Vector(int size) : size(size)
{
	if (size <= 0)	cout << "Invalid vector size: " << size << endl;
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
	cout << "Enter the size of the vector (1 - 100): ";
	do {
		cin >> size;
	} while (size < 1 || size > 100);
	return size;
}

int Vector::getSize() const
{
	return size;
}

void Vector::setElem(int index, float d)
{
	if (index < 0 || index >= size)
	{
		cout << "Invalid index" << endl;
		return;
	}
	data[index] = d;
}

float Vector::getElem(int index) const
{
	if (index<0 || index >= size)
	{
		cout << "Invalid index" << endl;
		return 0;
	}
	return data[index];
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
		cout << "Enter vector[" << i + 1 << "] = ";
		cin >> data[i];
	}
	cout << endl;
}

float& Vector::peek(int index) const
{
	if (index < 0 || index >= size)
		cout << "Invalid index" << endl;
	return data[index];
}

void Vector::print() const
{
	if (data == nullptr)	return;

	cout << "Vector:" << endl;
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

void Vector::add(Vector const& vector)
{
	if (size != vector.size)	return;

	for (int i = 0; i < size; i++)
		data[i] += vector.data[i];
}

void Vector::multiply(float d)
{
	for (int i = 0; i < size; i++)
		data[i] *= d;
}

float& Vector::operator[](int index) const
{
	return peek(index);
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

//std::ostream& operator<<(std::ostream& out, Vector const& vector)
//{
//	for (int i = 0; i < vector.size; i++)
//		out << " " << vector[i] << " ";
//	return out;
//}
