#pragma once
#include<iostream>
#include <cstdlib>
#include <string>
#include "MathLib.h"
#include "generateRandom.h"
#include <iomanip>
using namespace std;
namespace ArrayLib
{
	void readArray(int arr[], int& size, int number)
	{
		size++;
		arr[size - 1] = number;
	}
	void printArray(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	}
	int findMaxNumber(int arr[], int size)
	{
		int max = INT_MIN;
		for (int i = 0; i < size; i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
			}
		}
		return max;
	}
	int findMinNumber(int arr[], int size)
	{
		int min = INT_MAX;
		for (int i = 0; i < size; i++)
		{
			if (min > arr[i])
			{
				min = arr[i];
			}
		}
		return min;
	}
	int sumAllNumbers(int arr[], int size)
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	float avgAllNumbers(int arr[], int size)
	{
		return float(sumAllNumbers(arr, size)) / size;
	}
	void copyarray(int arr[], int arr2[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr2[i] = arr[i];
		}
	}
	void copyArrayInReversedOrder(int arr[], int arr2[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr2[i] = arr[size - i - 1];
		}
	}
	int findNumberIndex(int arr[], int size, int number)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == number)
			{
				return i;
			}
		}
		return -1;
	}
	bool isNumberInArray(int arr[], int size, int number)
	{
		return findNumberIndex(arr, size, number) != -1;
	}
	bool isIndexFound(int index)
	{
		return index > -1;
	}
	void copyarray2(int arr[], int arr2[], int& size)
	{
		int arr2length = 0;
		for (int i = 0; i < size; i++)
		{
			readArray(arr2, arr2length, arr[i]);
		}
	}
	void copyDistinctNumbersInArray(int arr[], int arr2[], int arrlength, int& arrlength2)
	{
		for (int i = 0; i < arrlength; i++)
		{
			if (!isNumberInArray(arr2, arrlength2, arr[i]))
			{
				readArray(arr2, arrlength2, arr[i]);
			}
		}
	}
	bool checkPalindrome(int arr[], int size)
	{
		for (int i = 0; i < size / 2; i++)
		{
			if (arr[i] != arr[size - 1 - i])
			{
				return false;
			}
		}
		return true;
	}
	void sumArray(int arr3[], int arr2[], int arr1[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr3[i] = arr2[i] + arr1[i];
		}
	}
	int countNumber(int arr[], int size, int number)
	{
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == number)
			{
				count++;
			}
		}
		return count;
	}
	void copyPrimeNumbersInArray(int arr[], int arr2[], int arrlength, int& arrlength2)
	{
		for (int i = 0; i < arrlength; i++)
		{
			if (MathLib::checkPrime(arr[i]))
			{
				readArray(arr2, arrlength2, arr[i]);
			}
		}
	}
	void copyOddNumbersInArray(int arr[], int arr2[], int arrlength, int& arrlength2)
	{
		for (int i = 0; i < arrlength; i++)
		{
			if (MathLib::isOdd(arr[i]))
			{
				readArray(arr2, arrlength2, arr[i]);
			}
		}
	}
	void copyEvenNumbersInArray(int arr[], int arr2[], int arrlength, int& arrlength2)
	{
		for (int i = 0; i < arrlength; i++)
		{
			if (MathLib::isEven(arr[i]))
			{
				readArray(arr2, arrlength2, arr[i]);
			}
		}
	}
	int countOddNumbers(int arr[], int size)
	{
		int oddCount = 0;
		for (int i = 0; i < size; i++)
		{
			if (MathLib::isOdd(arr[i]))
			{
				oddCount++;
			}
		}
		return oddCount;
	}
	int countEvenNumbers(int arr[], int size)
	{
		int evenCount = 0;
		for (int i = 0; i < size; i++)
		{
			if (MathLib::isEven(arr[i]))
			{
				evenCount++;
			}
		}
		return evenCount;
	}
	int countPositiveNumbers(int arr[], int size)
	{
		int positiveCount = 0;
		for (int i = 0; i < size; i++)
		{
			if (MathLib::isPositive(arr[i]))
			{
				positiveCount++;
			}
		}
		return positiveCount;
	}
	int countnotPositiveNumbers(int arr[], int size)
	{
		int notPositiveCount = 0;
		for (int i = 0; i < size; i++)
		{
			if (!MathLib::isPositive(arr[i]))
			{
				notPositiveCount++;
			}
		}
		return notPositiveCount;
	}
	void shuffleArray(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			swap(arr[generators::randomNumbers(0, size - 1)], arr[generators::randomNumbers(0, size - 1)]);
		}
	}
	void fillArrayWithKeys(string arr[], int numberOfKeys)
	{
		for (int i = 0; i < numberOfKeys; i++)
		{
			arr[i] = generators::generateKey();
		}
	}
	int sumRow(int arr[][3], int rowNumber, int columns)
	{
		int sum = 0;
		for (int j = 0; j < columns; j++)
		{
			sum += arr[rowNumber][j];
		}
		return sum;
	}
	void sumEachRowInMatrix(int arr[][3], int rows, int columns)
	{
		cout << "the following are the sum of each row\n";
		for (int i = 0; i < rows; i++)
		{
			cout << "row " << i + 1 << " Sum = " << sumRow(arr, i, columns);
			cout << endl;
		}
	}
	int sumColumns(int arr[][3], int rows, int columnNumber)
	{
		int sum = 0;
		for (int i = 0; i < rows; i++)
		{
			sum += arr[i][columnNumber];
		}
		return sum;
	}
	void sumEachColInMatrix(int arr[][3], int rows, int columns)
	{
		cout << "the following are the sum of each column\n";
		for (int i = 0; i < columns; i++)
		{
			cout << "col " << i + 1 << " Sum = " << sumColumns(arr, rows, i);
			cout << endl;
		}
	}
	void printMatrix(int arr[][3], int rows,int cols)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
			/*	printf("%0*d\t",2, arr[i][j]);*/
				cout << setw(3) << arr[i][j] << "\t";
			}
			cout << endl;
		}
	}
	void readOrderedMatrix(int arr[][3], int rows, int cols)
	{
		int counter = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = ++counter;
			}
		}
	}
	void transposeMatrix(int arr[][3], int transposeArr[][3], int rows, int cols)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				transposeArr[j][i] = arr[i][j];
			}
		}
	}
	void transposeMatrix(vector<vector<int>>& arr, vector<vector<int>>& transposearr)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			for (int j = 0; j < arr[0].size(); j++)
			{
				transposearr[j][i] = arr[i][j];
			}
		}
	}
	int sumOfMatrix(int arr[][3], int rows, int cols)
	{
		int sum = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				sum += arr[i][j];
			}
		}
		return sum;
	}
	int countNumberInMatrix(int arr[][3], int number, int rows, int cols)
	{
		int count = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (arr[i][j] == number)
				{
					count++;
				}
			}
		}
		return count;
	}
	void multiplyMatrix(int arr[][3], int arr2[][3], int arr3[][3], int rows, int cols)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr3[i][j] = arr[i][j] * arr2[i][j];
			}
		}
	}
	bool numberExistsInArray(int arr[][3], int number, int rows, int cols)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (number == arr[i][j])
				{
					return true;
				}
			}
		}
		return false;
	}
	int maxNumberInMatrix(int arr[][3], int rows, int cols)
	{
		int max = INT_MIN;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (max < arr[i][j])
				{
					max = arr[i][j];
				}
			}
		}
		return max;
	}
	int minNumberInMatrix(int arr[][3], int rows, int cols)
	{
		int min = INT_MAX;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (min > arr[i][j])
				{
					min = arr[i][j];
				}
			}
		}
		return min;
	}
	bool palindromeMatrix(int arr[][3], int rows, int cols)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols / 2; j++)
			{
				if (arr[i][j] != arr[i][cols - j - 1])
				{
					return false;
				}
			}
		}
		return true;
	}

	void fillVector(vector<int>& vNumbers)
	{
		char yesOrNo;
		do
		{
			int i;
			cout << "please enter a number:";
			cin >> i;
			vNumbers.push_back(i);
			cout << "do you want to add more Numbers [y]:yes [n]:no:";
			cin >> yesOrNo;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "invaild,enter Y or N";
				cin >> yesOrNo;
			}
		} while (yesOrNo == 'Y'||yesOrNo=='y');
	}
	void printVector(vector<int>& vNumbers)
	{
		for (int& Number : vNumbers)
		{
			cout << Number << endl;
		}
	}
}