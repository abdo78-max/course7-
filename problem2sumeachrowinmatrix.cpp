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
//void printMatrix(int arr[][3], int rows)
//{
//	cout << "the following is a 3*3 random matrix\n";
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << setw(3) << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
////void sumEachRowInMatrix(int arr[][3], int rows,int columns)
////{
////	cout << "the following are the sum of each row\n";
////	for (int i = 0; i < rows; i++)
////	{
////		int sum = 0;
////		for (int j = 0; j < columns; j++)
////		{
////			sum += arr[i][j];
////		}
////		cout << "row " << i+1 << " Sum = " << sum;
////		cout << endl;
////	}
////}
//int sumRow(int arr[][3], int rows, int columns)
//{
//	int sum = 0;
//	for (int i = 0; i < columns; i++)
//	{
//		sum += arr[rows][i];
//	}
//	return sum;
//}
//void sumEachRowInMatrix(int arr[][3], int rows, int columns)
//{
//	cout << "the following are the sum of each row\n";
//	for (int i = 0; i < rows; i++)
//	{
//		cout << "row " << i + 1 << " Sum = " << ArrayLib::sumRow(arr,i,columns);
//		cout << endl;
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr[3][3];
//	generators::generateRandomMatrix(arr, 3,3);
//	printMatrix(arr, 3);
//	sumEachRowInMatrix(arr, 3, 3);
//}