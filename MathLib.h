#pragma once
#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;
namespace MathLib
{
	double simpleCalaulater(double num1, double num2, char opType)
	{
		switch (opType)
		{
		case '+':
			return num1 + num2;
		case '/':
			return  num1 / num2;
		case '*':
			return  num1 * num2;
		case '-':
			return  num1 - num2;
		}
	}
	double getFractionPart(double number)
	{
		return number - (int)number;
	}
	bool isPerfectNumber(int number)
	{
		int sum = 0;
		for (int i = 1; i <= number / 2; i++)
		{
			if (number % i == 0)
				sum += i;
		}
		return number == sum;
	}
	void printDigits(int number)
	{
		int reminder = number;
		while (number != 0)
		{
			reminder = number % 10;
			cout << reminder << endl;
			number /= 10;
		}
	}
	int sumdigits(int number)
	{
		int sum = 0;
		int reminder = number;
		while (number != 0)
		{
			reminder = number % 10;
			sum += reminder;
			number /= 10;
		}
		return sum;
	}
	int reversedNumber(int number)
	{
		int reversednumber = 0;
		int reminder = number;
		while (number != 0)
		{
			reminder = number % 10;
			reversednumber = reversednumber * 10 + reminder;
			number /= 10;
		}
		return reversednumber;
	}
	int countDigit(int number, int digit)
	{
		int reminder = 0;
		int countDigit = 0;
		while (number != 0)
		{
			reminder = number % 10;
			if (reminder == digit)
			{
				countDigit++;
			}
			number /= 10;
		}
		return countDigit;
	}
	void printDigitCount(int number)
	{
		for (int i = 0; i <= 9; i++)
		{
			int numberOfDigits = countDigit(number, i);
			if (numberOfDigits == 0)
			{
				continue;
			}
			else
			{
				cout << " digit " << i << " frequency is " << numberOfDigits << endl;
			}
		}
	}
	bool isPalindrome(int number)
	{
		return reversedNumber(number) == number;
	}
	bool isOdd(int number)
	{
		return number % 2 != 0;
	}
	bool isEven(int number)
	{
		return number % 2 == 0;
	}
	bool checkPrime(int number)
	{
		if (number <= 1)
		{
			return false;
		}
		int m = sqrt(number);
		for (int i = 2; i <= m; i++)
		{
			if (number % i == 0)
			{
				return false;
			}
		}
		return true;
	}
	bool isPositive(int number)
	{
		return number >= 1;
	}

	int fibonacchiSeries(int n)
	{
		if (n == 0 || n == 1)
		{
			return n;
		}
		else
		{
			return fibonacchiSeries(n - 1) + fibonacchiSeries(n - 2);
		}
	}
	int fibonacchiSeries(vector<int>& n, int num)
	{
		if (n.size() < num)
		{
			for (int i = 2; i < num; i++)
			{
				n.push_back(n[i - 1] + n[i - 2]);
			}
		}
		return n[num - 1];
	}
	int fibonacchiSeries2(int num)
	{
		if (num == 0 || num == 1)
		{
			return num;
		}
		int a = 0;
		int b = 1;
		int c = 0;
		cout << b << "\t";
		for (int i = 2; i <= num; i++)
		{
			c = a + b;
			a = b;
			b = c;
			cout << c << "\t";
		}
		return c;
	}
}