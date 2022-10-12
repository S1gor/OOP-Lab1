#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector()
{}

Vector::Vector(int size) : size(size)
{
	if (size <= 0)	cout << "Invalid vector size: " << size << endl;
	data = new float[size];
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

Vector::Vector(Vector& vector) : size(vector.size)
{
	data = new float[size];
	for (int i = 0; i < size; i++)
		data[i] = vector[i];
}

Vector::~Vector()
{
	if (data)
		delete[] data;
}

int Vector::setSize()
{
	if (data) delete[] data;

	cout << "Enter the size of the vector (1 - 100): ";
	do {
		cin >> size;
	} while (size < 1 || size > 100);
	data = new float[size];
	return size;
}

int Vector::getSize()
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

float Vector::getElem(int index)
{
	if (index<0 || index >= size)
	{
		cout << "Invalid index" << endl;
		return 0;
	}
	return data[index];
}

float Vector::getLen()
{
	float sum = 0;
	for (int i = 0; i < getSize(); i++)
		sum += data[i] * data[i];
	return sqrt(sum);
}

void Vector::inputRandomly()
{
	if (size <= 0)	return;

	for (int i = 0; i < size; i++)
		data[i] = (rand() % 2001 - 1000.0) / 10;
}

void Vector::input()
{
	if (size <= 0)	return;

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

void Vector::print()
{
	if (data == nullptr)	return;

	cout << "Vector:" << endl;
	for (int i = 0; i < size; i++)
		cout << " " << data[i] << " ";
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

Vector Vector::operator+(Vector const& vector) const
{
	if (size != vector.size)	return 0;

	Vector tmp(size);
	for (int i = 0; i < size; i++)
		tmp[i] = data[i] + vector[i];
	return tmp;
}

Vector operator+(Vector const& vector, float val)
{
	Vector tmp(vector.size);
	for (int i = 0; i < vector.size; i++)
		tmp[i] = vector[i] + val;
	return tmp;
}

Vector operator+(float val, Vector const& vector)
{
	Vector tmp(vector.size);
	for (int i = 0; i < vector.size; i++)
		tmp[i] = vector[i] + val;
	return tmp;
}

Vector const& Vector::operator=(Vector const& vector)
{
	if (data) delete[] data;

	size = vector.size;
	data = new float[size];
	for (int i = 0; i < size; i++)
		data[i] = vector[i];
	return *this;
}

bool Vector::operator==(Vector& vector)
{
	return getLen() == vector.getLen();
}

bool Vector::operator!=(Vector& vector)
{
	return getLen() != vector.getLen();
}

bool operator<(float a, Vector& vector)
{
	return a < vector.getLen();
}

std::ostream& operator<<(std::ostream& out, Vector const& vector)
{
	cout << "Vector:" << endl;
	for (int i = 0; i < vector.size; i++)
		out << " " << vector[i] << " ";
	return out;
}

std::istream& operator>>(std::istream& in, Vector& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		cout << "Enter vector[" << i + 1 << "] = ";
		in >> vector[i];
	}
	return in;
}