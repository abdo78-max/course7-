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
//bool palindromeMatrix(int arr[][3],int rows,int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols/2; j++)
//		{
//			if (arr[i][j] != arr[i][cols - j - 1])
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	cout << "matrix 1\n";
//	generators::generateRandomMatrix(arr1, 3, 3);
//	ArrayLib::printMatrix(arr1, 3, 3);
//	if (palindromeMatrix(arr1, 3, 3))
//	{
//		cout << "Matrix is palindrome\n";
//	}
//	else
//	{
//		cout << "Matrix is not palindrome\n";
//	}
//}