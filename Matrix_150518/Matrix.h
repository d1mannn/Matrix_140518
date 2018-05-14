#pragma once
#include <iostream>
using namespace std;

template <typename type>
class Matrix
{
public:
	Matrix() { els = nullptr; cols = 0; rows = 0; }// ����������� �� ���������
	Matrix(size_t cols, size_t rows); // ����������� 
	Matrix(const Matrix & obj); // ����������� �����������
	Matrix(type *arr, size_t size, size_t rows); // ����������� ��������� ������� �� ��������� �������

	void printmatrix();
	void operator << (Matrix &obj);
	virtual ~Matrix();
public:
	type ** els;
	size_t cols;
	size_t rows;

};

