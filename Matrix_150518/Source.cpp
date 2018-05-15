#include "Matrix.h"
#include "Matrix.cpp"

//template<typename type>
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	Matrix<int> m(2, 2);
	Matrix<int>arr(2, 2);
	MatrixFillig(arr, 2, 2);

	// нужно закончить 
	int arr1[10] = { 2, 3, 4, 10, 6, 3, 4, 1, 3, 7 };
	Matrix<int>arr3(arr1, 2, 3, 4);
	cout << arr3;
	system("pause");
	return 0;
}
