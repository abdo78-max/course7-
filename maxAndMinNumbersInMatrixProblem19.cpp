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
//int maxNumberInMatrix(int arr[][3],int rows,int cols)
//{
//	int max = INT_MIN;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	return max;
//}
//int minNumberInMatrix(int arr[][3], int rows, int cols)
//{
//	int min = INT_MAX;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (min > arr[i][j])
//			{
//				min = arr[i][j];
//			}
//		}
//	}
//	return min;
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	cout << "matrix 1\n";
//	generators::generateRandomMatrix(arr1, 3, 3);
//	ArrayLib::printMatrix(arr1, 3, 3);
//	cout << "the maxiumm number is "<<maxNumberInMatrix(arr1, 3, 3) << endl;
//	cout << "the miniumm number is "<<minNumberInMatrix(arr1, 3, 3) << endl;
//}