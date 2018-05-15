#pragma once
#include <iostream>
#include <ctime>
using namespace std;

template <typename type>
class Matrix
{
public:
	Matrix() { els = nullptr; cols = 0; rows = 0; buf_cols = 0; buf_rows = 0; }// конструктор по умолчанию
	Matrix(size_t rows, size_t cols); // конструктор 
	Matrix(const Matrix<type> & obj); // конструктор копирования
	Matrix(type *arr, size_t size, size_t rows, size_t cols); // конструктор создающий матрицу из элементов массива

	template <typename type>
	friend ostream & operator<<(ostream & os, Matrix<type> a);

	template <typename type>
	friend void MatrixFillig(Matrix<type> & obj, size_t rows, size_t cols);

	type &operator = (type n);
	void printmatrix();
	//void operator << (Matrix &obj);
	virtual ~Matrix();
public:
	type ** els;
	size_t cols;
	size_t rows;
	size_t buf_cols;
	size_t buf_rows;
};

