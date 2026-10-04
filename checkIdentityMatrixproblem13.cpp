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
//bool checkidentityMatrix(int arr[][3], int rows, int cols)
//{
//	if (rows != cols)
//	{
//		return false;
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (i == j && arr[i][j] != 1)
//			{
//				return false;
//			}
//			else if (i!=j&&arr[i][j] != 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//void printresult(int arr[][3], int rows, int cols)
//{
//	if (checkidentityMatrix(arr,  rows, cols))
//	{
//		cout << "the matrix is identity\n";
//	}
//	else
//	{
//		cout << "the matrices is not identity\n";
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	generators::generateRandomMatrix(arr1, 3, 3);
//	cout << "matrix 1\n";
//	ArrayLib::printMatrix(arr1, 3, 3);
//	printresult(arr1, 3, 3);
//}