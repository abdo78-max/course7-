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
////void intersectedNumbersInTwoMatrix(int arr[][3],int arr2[][3],int rows,int cols)
////{
////	cout<<"intersected numbers are: ";
////	bool found;
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0; j < cols; j++)
////		{
////			for (int y = 0; y < rows; y++)
////			{
////				for (int x = 0; x < cols; x++)
////				{
////					found = arr[i][j] == arr2[y][x];
////					if (found)
////					{
////						cout << arr[i][j] << "\t";
////						break;
////					}
////				}
////				if (found)
////				{
////					break;
////				}
////			}
////		}
////	}
////}
//void intersectedNumbersInTwoMatrix(int arr[][3], int arr2[][3], int rows, int cols)
//{
//	cout << "intersected numbers are: ";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (ArrayLib::numberExistsInArray(arr2, arr[i][j], rows, cols))
//			{
//				cout << arr[i][j] << "\t";
//			}
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3] = { 10, 20, 30,
//		20, 40, 50,
//		60, 70, 80 };
//	cout << "matrix 1\n";
//	generators::generateRandomMatrix(arr1, 3, 3);
//	ArrayLib::printMatrix(arr1, 3, 3);
//	int arr2[3][3] = { 10, 10, 20,
//	30, 20, 90,
//	20, 100, 10
//	};
//	cout << "matrix 2\n";
//	generators::generateRandomMatrix(arr2, 3, 3);
//	ArrayLib::printMatrix(arr2, 3, 3);
//	intersectedNumbersInTwoMatrix(arr1, arr2, 3, 3);
//}