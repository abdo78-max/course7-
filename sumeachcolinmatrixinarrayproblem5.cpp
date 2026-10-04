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
//int sumColumns(int arr[][3], int rows, int columnNumber)
//{
//	int sum = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		sum += arr[i][columnNumber];
//	}
//	return sum;
//}
//void sumEachColInMatrix(int arr[][3],int arrSum[],int rows, int columns)
//{
//	for (int i = 0; i < columns; i++)
//	{
//	    arrSum[i]=sumColumns(arr, rows, i);
//	}
//}
//void printSumArray(int arrSum[], int size)
//{
//	cout << "the following are the sum of each column\n";
//	for (int i = 0; i < size; i++)
//	{
//		cout << "col " << i + 1 << " Sum = " << arrSum[i];
//		cout << endl;
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr[3][3];
//	int arrSum[3];
//	generators::generateRandomMatrix(arr, 3, 3);
//	ArrayLib::printMatrix(arr, 3);
//	sumEachColInMatrix(arr,arrSum, 3, 3);
//	printSumArray(arrSum, 3);
//}