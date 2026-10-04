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
//using namespace std;
//void multiplyMatrix(int arr[][3], int arr2[][3],int arr3[][3],int rows,int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr3[i][j] = arr[i][j] * arr2[i][j];
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	int arr2[3][3];
//	int arr3[3][3];
//	generators::generateRandomMatrix(arr1,3,3);
//	generators::generateRandomMatrix(arr2, 3, 3);
//	cout << "matrix 1\n";
//	ArrayLib::printMatrix(arr1, 3, 3);
//	cout << "matrix 2\n";
//	ArrayLib::printMatrix(arr2, 3, 3);
//	multiplyMatrix(arr1, arr2, arr3, 3, 3);
//	cout << "results\n";
//	multiplyMatrix(arr1, arr2, arr3, 3, 3);
//	ArrayLib::printMatrix(arr3, 3, 3);
//}