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
//bool numberExistsInArray(int arr[][3], int number, int rows, int cols)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (number == arr[i][j])
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main()
//{
//	srand((unsigned)time(0));
//	int arr1[3][3];
//	cout << "matrix 1\n";
//	generators::generateRandomMatrix(arr1, 3, 3);
//	ArrayLib::printMatrix(arr1, 3, 3);
//	int number = Inputs::readNumber("please enter the number to look for in matrix? ");
//   (numberExistsInArray(arr1, number, 3, 3)) ? cout << "yes it is there" : cout << "no it isn't there";
//}