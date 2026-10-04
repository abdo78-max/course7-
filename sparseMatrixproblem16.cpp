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
//#include "Inputs.h"
//using namespace std;
////bool checkSparseMatrix(int arr[][3], int rows, int cols)
////{
////	int zeroCounter = 0;
////	int nonZeroCounter = 0;
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0; j < cols; j++)
////		{
////			if (arr[i][j] == 0)
////			{
////				zeroCounter++;
//// 		    }
////			else
////			{
////				nonZeroCounter++;
////			}
////		}
////	}
////	return zeroCounter>nonZeroCounter;
////}
//bool checkSparseMatrix(int arr[][3], int rows, int cols)
//{
//	int matrixSize = rows * cols;
//	return ArrayLib::countNumberInMatrix(arr, 0, rows, cols) >matrixSize / 2;
//}
//void printresult(int arr[][3], int rows, int cols)
//{
//	if (checkSparseMatrix(arr, rows, cols))
//	{
//		cout << "the matrix is sparse\n";
//	}
//	else
//	{
//		cout << "the matrix is not sparse\n";
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3]=
//	{
//		0,1,0,
//		0,0,12,
//		12,1,0
//	};
//	cout << "matrix 1\n";
//	ArrayLib::printMatrix(arr1, 3, 3);
//	printresult(arr1, 3, 3);
//}