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
//int fibonacchiSeries(int n)
//{
//	if (n == 0 || n == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return fibonacchiSeries(n - 1) + fibonacchiSeries(n - 2);
//	}
//}
//int fibonacchiSeries(vector<int>& n, int num)
//{
//	if (n.size() < num)
//	{
//		for (int i = 2; i < num; i++)
//		{
//			n.push_back(n[i - 1] + n[i - 2]);
//		}
//	}
//	return n[num - 1];
//}
//int fibonacchiSeries2(int num) 
//{
//	if (num == 0 || num == 1)
//	{
//		return num;
//	}
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	cout << b << "\t";
//	for (int i = 2; i <= num ; i++)
//	{
//		c = a + b; 
//		a = b; 
//		b = c;
//		cout << c << "\t";
//	}
//	return c;
//}
//void PrintFibonacciSeries(short NumOfSeries)
//{
//	short FibNum = 1;
//	short Prev1 = 0, Prev2 = 1;
//
//	for (short i = 1; i <= NumOfSeries; i++)
//	{
//		cout << FibNum << "   ";
//		FibNum = Prev1 + Prev2;
//		Prev1 = Prev2;
//		Prev2 = FibNum;
//	}
//}
//void PrintFibonacciSeries2(int NumOfSeries)
//{
//	short FibNum = 1;
//	short Prev1 = 0, Prev2 = 1;
//
//	for (short i = 1; i <= NumOfSeries; i++)
//	{
//		FibNum = Prev1 + Prev2;
//		cout << FibNum << "   ";
//		Prev1 = Prev2;
//		Prev2 = FibNum;
//	}
//}
//int main()
//{
//	vector<int>number;
//	number.push_back(1);
//	number.push_back(1);
//	PrintFibonacciSeries2(15);
//}