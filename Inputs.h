#pragma once
#pragma once
#include<iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include "ArrLib.h"
using namespace std;
namespace Inputs
{
	int readPositiveNumber(string message)
	{
		int number;
		do
		{
			cout << message;
			cin >> number;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "invaild,enter a vaild number";
				cin >> number;
			}
		} while (number < 0);
		return number;
	}
	string readString(string message)
	{
		string str;
		cout << message;
		getline(cin, str);
		return str;
	}
	char readCharacters(string message)
	{
		char character;
		cout << message;
		cin >> character;
		return character;
	}
	int readNumber(string message)
	{
		int number;
		cout << message;
		cin >> number;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "invaild,enter a vaild number";
			cin >> number;
		}
		return number;
	}
	int readNumberInRange(string message, int from, int to)
	{
		int number;
		do
		{
			cout << message;
			cin >> number;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "invaild,enter a vaild number";
				cin >> number;
			}
		} while (number < from || number>to);
		return number;
	}
	double readPositiveNumberWithFraction(string message)
	{
		double number;
		do
		{
			cout << message;
			cin >> number;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "invaild,enter a vaild number";
				cin >> number;
			}
		} while (number < 0);
		return number;
	}
	double readNumberWithFraction(string message)
	{
		double number;
		cout << message;
		cin >> number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "invaild,enter a vaild number";
			cin >> number;
		}
		return number;
	}
	double readNumberInRange(string message, double from, double to)
	{
		double number;
		do
		{
			cout << message;
			cin >> number;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "invaild,enter a vaild number";
				cin >> number;
			}
		} while (number < from || number>to);
		return number;
	}
	void readArray(double arr[], unsigned int& size)
	{
		size = readPositiveNumber(" enter the size of array\n ");
		cout << "enter Array elements\n";
		for (int i = 0; i < size; i++)
		{
			cout << "Element[" << i + 1 << "]" << ":";
			cin >> arr[i];
		}
	}
	void readArray(int arr[], unsigned int& size)
	{
		size = readPositiveNumber(" enter the size of array\n ");
		cout << "enter Array elements\n";
		for (int i = 0; i < size; i++)
		{
			cout << "Element[" << i + 1 << "]" << ":";
			cin >> arr[i];
		}
	}
	void readArray(string arr[], unsigned int& size)
	{
		size = readPositiveNumber(" enter the size of array\n ");
		cout << "enter Array elements\n";
		for (int i = 0; i < size; i++)
		{
			cout << "Element[" << i + 1 << "]" << ":";
			cin >> arr[i];
		}
	}
	void readArray(char arr[], unsigned int& size)
	{
		size = readPositiveNumber(" enter the size of array\n ");
		cout << "enter Array elements\n";
		for (int i = 0; i < size; i++)
		{
			cout << "Element[" << i + 1 << "]" << ":";
			cin >> arr[i];
		}
	}
	void InputUserNumbersInArray(int arr[], int& size)
	{
		bool toAdd;
		do
		{
			ArrayLib::readArray(arr, size, readNumber("enter your number: "));
			cout << "Do you want to add more Numbers [0]:NO,[1]:YES: ";
			cin >> toAdd;
		} while (toAdd);
	}
}