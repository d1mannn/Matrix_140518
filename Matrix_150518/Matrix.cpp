#include "Matrix.h"



template<typename type>
Matrix<type>::Matrix(size_t cols, size_t rows)
{
	this->cols = cols;
	this->rows = rows;
	els = new type*[rows];
	for (int i = 0; i < rows; i++)
		els[i] = new type[cols];
	for (int i = 0; i < rows; i++)
	{
		for (int i = 0; i < cols; i++)
		{
			els[i][j] = 0;
		}
	}
}

template<typename type>
Matrix<type>::Matrix(const Matrix & obj)
{
	this->cols = obj.cols;
	this->rows = obj.rows;
	this->els = new type*[rows];
	for (int i = 0; i < rows; i++)
		this->els[i] = new type[cols];
	for (int i = 0; i < rows; i++)
	{
		for (int i = 0; i < cols; i++)
		{
			this->els[i][j] = obj.els[i][j];
		}
	}
}

template<typename type>
Matrix<type>::Matrix(type * arr, size_t size, size_t rows)
{	
	this->rows = rows;
	this->cols = ceil(size / rows);
	this->els = new type*[rows];
	for (int i = 0; i < rows; i++)
		this->els[i] = new type[cols];
	int k = 0;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (k == size)
				els[i][j] = 0;
			else
				els[i][j] = arr[k++];
}

template<typename type>
void Matrix<type>::printmatrix()
{
	cout << els;
}

template<typename type>
void Matrix<type>::operator<<(Matrix &obj)
{
	for (int i = 0; i <obj.rows ; i++)
	{
		for (int i = 0; i < obj.cols; i++)
		{
			cout << obj.els[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename type>
Matrix<type>::~Matrix()
{
	for (int i = 0; i < rows; i++)
	{
		delete[]els[i];
	}
	delete[]els;
}

