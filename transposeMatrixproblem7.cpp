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
//void swap(int& x, int& y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//void readOrderMatrix(vector<vector<int>>& arr2)
//{
//	int counter = 0;
//	for (int i = 0; i < arr2.size(); i++)
//	{
//		for (int j = 0; j < arr2[0].size(); j++)
//		{
//			arr2[i][j] = ++counter;
//		}
//	}
//}
//void printMatrix(vector<vector<int>>& arr2)
//{
//	int counter = 0;
//	for (int i = 0; i < arr2.size(); i++)
//	{
//		for (int j = 0; j < arr2[0].size(); j++)
//		{
//			cout<<setw(3)<<arr2[i][j]<<"\t";
//		}
//		cout << endl;
//	}
//}
//void transposeMatrix(int arr[][3], int rows, int cols)
//{
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = i; j < cols; j++)
//			{
//				if (j == i)
//				{
//					continue;
//				}
//				swap(arr[i][j], arr[j][i]);
//			}
//		}
//}
//void transposeMatrix(int arr[][3],int transposeArr[][3], int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			transposeArr[j][i] = arr[i][j];
//		}
//	}
//}
//void transposeMatrix(vector<vector<int>>&arr,vector<vector<int>>&transposearr)
//{
//	for (int i = 0; i < arr.size(); i++)
//	{
//		for (int j = 0; j < arr[0].size(); j++)
//		{
//			transposearr[j][i] = arr[i][j];
//		}
//	}
//}
//int main()
//{
//	//srand((unsigned)time(0));
//	//int arr[3][3];
//	//int transposearr[3][3];
//	//ArrayLib::readOrderedMatrix(arr, 3, 3);
//	//cout << "the following is a 3*3 orderedmatrix\n";
//	//ArrayLib::printMatrix(arr, 3, 3);
//	//cout << "the following is a 3*3 transposematrix\n";
//	//transposeMatrix(arr, 3, 3);
//	//ArrayLib::printMatrix(arr, 3, 3);
//	//int r = 3;
//	//int c = 3;
//	//vector<vector<int>>arr2(r,vector<int>(c));
//	//vector<vector<int>>transposearr(c, vector<int>(r));
//	int arr[3][3];
//	int transposearr[3][3];
//	cout << "the following is a 3*3 orderedmatrix\n";
//	ArrayLib::readOrderedMatrix(arr, 3, 3);
//	ArrayLib::printMatrix(arr,3,3);
//	cout << "the following is a 3*3 transposematrix\n";
//	transposeMatrix(arr, transposearr,3,3);
//	ArrayLib::printMatrix(transposearr,3,3);
//}