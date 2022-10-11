#pragma once
#include <iostream>

class Vector
{
	float* data = nullptr;
	int size = 0;

public:
	Vector();
	Vector(int size);
	Vector(float x, float y);
	Vector(float x, float y, float z);
	Vector(Vector& vector2);
	~Vector();

	int setSize();
	int getSize() const;

	void setElem(int index, float d);
	float getElem(int index) const;

	float getLen() const;

	void inputRandomly();
	void input();

	float& peek(int index) const;
	void print() const;
	void clear();

	void add(Vector const& vector);
	void multiply(float d);

	float& operator[](int index) const;

	Vector operator+(Vector const& vector) const;
	friend Vector operator+(Vector const& vector, float val);
	friend Vector operator+(float val, Vector const& vector);

	Vector const& operator=(Vector const& vector);
	bool operator==(Vector& vector);
	bool operator!=(Vector& vector);
	friend bool operator<(float value, Vector const& vector);

	friend std::ostream& operator<<(std::ostream& out, Vector const& vector);
	friend std::istream& operator>>(std::istream& in, Vector& vector);
};