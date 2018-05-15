#include "Matrix.h"



template<typename type>
Matrix<type>::Matrix(size_t rows, size_t cols)
{
	this->cols = cols;
	this->rows = rows;
	els = new type*[rows];
	for (int i = 0; i < rows; i++)
		els[i] = new type[cols];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			els[i][j] = 0;
		}
	}
}

template<typename type>
Matrix<type>::Matrix(const Matrix<type> & obj)
{
	this->cols = obj.cols;
	this->rows = obj.rows;
	this->els = new type*[rows];
	for (int i = 0; i < rows; i++)
		this->els[i] = new type[cols];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			this->els[i][j] = obj.els[i][j];
		}
	}
}

template<typename type>
Matrix<type>::Matrix(type * arr, size_t size, size_t rows, size_t cols)
{	
	this->rows = rows;
	this->cols = cols;
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
type &Matrix<type>::operator=(type n)
{	
	//MyArray& operator=(MyArray &arrInt2) //перегрузка оператора присваивания
	//{
	//	delete[] numbers;

	//	sizeOfArray = arrInt2.sizeOfArray;

	//	numbers = new int[sizeOfArray];
	//	for (int i = 0; i < sizeOfArray; i++)
	//	{
	//		numbers[i] = arrInt2.numbers[i];
	//	}

	//	return *this;
	//}
	this->els = n;
	return *this;
}

template<typename type>
void Matrix<type>::printmatrix()
{
	cout << els;
}

//template<typename type>
//void Matrix<type>::operator<<(Matrix &obj)
//{
//	for (int i = 0; i <obj.rows ; i++)
//	{
//		for (int i = 0; i < obj.cols; i++)
//		{
//			cout << obj.els[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}

template<typename type>
Matrix<type>::~Matrix()
{
	for (int i = 0; i < rows; i++)
	{
		delete[]els[i];
	}
	delete[]els;
}

template<typename type>
ostream & operator<<(ostream & os, Matrix<type> a)
{
	for (int i = 0; i < a.rows; i++)
	{
		for (int j = 0; j < a.cols; j++)
		{
			cout << a.els[i][j] << "\t";
		}
		cout << endl;
	}
	// TODO: insert return statement here
	return os;
}

template<typename type>
void MatrixFillig(Matrix<type> & obj, size_t rows, size_t cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			obj.els[i][j] = -20 + rand() % 40;
		}
	}
}







