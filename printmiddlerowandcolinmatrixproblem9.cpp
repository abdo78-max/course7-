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
//void printMiddleRowInMatrix(int arr[][3], int rows, int cols)
//{
//	int middleRow = rows / 2;
//	if (MathLib::isOdd(rows))
//	{
//			for (int j = 0; j < cols; j++)
//			{
//			     	printf("%0*d\t", 2, arr[middleRow][j]);
//			}
//	}
//	else
//	{
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < cols; j++)
//			{
//				if (i == rows/2||i==(rows/2)-1)
//				{
//					printf("%0*d\t", 2, arr[i][j]);
//				}
//			}
//			cout << endl;
//		}
//	}
//}
//void printMiddleColInMatrix(int arr[][3], int rows, int cols)
//{
//	int middleCols = cols / 2;
//	if (MathLib::isOdd(cols))
//	{
//		for (int i = 0; i < rows; i++)
//		{
//			printf("%0*d\t", 2, arr[i][middleCols]);
//		}
//	}
//	else
//	{
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < cols; j++)
//			{
//				if (j == cols / 2 || j == (cols / 2) - 1)
//				{
//					printf("%0*d\t", 2, arr[i][j]);
//				}
//			}
//			cout << endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	generators::generateRandomMatrix(arr1, 3, 3);
//	cout << "matrix 1\n";
//	ArrayLib::printMatrix(arr1, 3, 3);
//	cout << "middle Row of the matrix\n";
//	printMiddleRowInMatrix(arr1, 3, 3);
//	cout << "\n";
//	cout << "middle cols of the matrix\n";
//	printMiddleColInMatrix(arr1, 3, 3);
//}