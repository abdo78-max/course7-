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
//int countNumberIntMatrix(int arr[][3], int number,int rows,int cols)
//{
//	int count = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (arr[i][j] == number)
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	generators::generateRandomMatrix(arr1, 3, 3);
//	cout << "matrix 1\n";
//	ArrayLib::printMatrix(arr1, 3, 3);
//	int number=Inputs::readNumber("Enter the number you want to count in matrix\n");
//	cout << "Number " << number << " count in matrix is " << countNumberIntMatrix(arr1, number, 3, 3);
//}