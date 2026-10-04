//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//#include <sstream>
//#include <string>
//#include <cmath>
//#include <iomanip>
//#include<vector>
//#include <cctype>
//#include <ctime>
//#include "generateRandom.h"
//#include "ArrLib.h"
//#include"MathLib.h"
//using namespace std;
//int sumOfMatrix(int arr[][3], int rows, int cols)
//{
//	int sum = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			sum += arr[i][j];
//		}
//	}
//	return sum;
//}
//bool checkEqualityOfMatrix(int arr[][3],int arr2[][3], int rows, int cols)
//{
//	return ArrayLib::sumOfMatrix(arr, 3, 3) == ArrayLib::sumOfMatrix(arr2, 3, 3);
//}
//void printresult(int arr[][3], int arr2[][3], int rows, int cols)
//{
//	if (checkEqualityOfMatrix(arr, arr2, rows, cols))
//	{
//		cout << "the matrices are equel\n";
//	}
//	else
//	{
//		cout << "the matrices are not equel\n";
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	int arr2[3][3];
//	generators::generateRandomMatrix(arr1, 3, 3);
//	generators::generateRandomMatrix(arr2, 3, 3);
//	cout << "matrix 1\n";
//	ArrayLib::printMatrix(arr1, 3, 3);
//	cout << "matrix 2\n";
//	ArrayLib::printMatrix(arr2, 3, 3);
//	cout << "sum of matrix1 is: " << ArrayLib::sumOfMatrix(arr1, 3, 3)<<"\n";
//	cout << "sum of matrix2 is: " << ArrayLib::sumOfMatrix(arr2, 3, 3) << "\n";
//	printresult(arr1, arr2, 3, 3);
//}