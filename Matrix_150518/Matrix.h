#pragma once
#include <iostream>
using namespace std;

template <typename type>
class Matrix
{
public:
	Matrix() { els = nullptr; cols = 0; rows = 0; }// конструктор по умолчанию
	Matrix(size_t cols, size_t rows); // конструктор 
	Matrix(const Matrix & obj); // конструктор копирования
	Matrix(type *arr, size_t size, size_t rows); // конструктор создающий матрицу из элементов массива

	void printmatrix();
	void operator << (Matrix &obj);
	virtual ~Matrix();
public:
	type ** els;
	size_t cols;
	size_t rows;

};

