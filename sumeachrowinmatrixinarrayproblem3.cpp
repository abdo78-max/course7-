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
//int sumRow(int arr[][3], int rows, int columns)
//{
//	int sum = 0;
//	for (int i = 0; i < columns; i++)
//	{
//		sum += arr[rows][i];
//	}
//	return sum;
//}
//void sumEachRowInMatrix(int arr2[], int arr[][3], int rows, int columns)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		arr2[i] = sumRow(arr, i, 3);
//	}
//}
//void printArray(int arr[], int size)
//{
//	cout << "the following are the sum of each row\n";
//	for (int i = 0; i < size; i++)
//	{
//		cout << "row " << i + 1 << " Sum = " << arr[i];
//		cout << endl;
//	}
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr[3][3];
//	int onedimarr[3];
//	generators::generateRandomMatrix(arr, 3, 3);
//	printMatrix(arr, 3);
//	sumEachRowInMatrix(onedimarr,arr, 3, 3);
//	printArray(onedimarr, 3);
//}