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
//void printfibonacchiSeries1(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		cout << fibonacchiSeries(i) << "\t";
//	}
//}
//void fibonacchiSeries2(int num,int prev1,int prev2) 
//{
//	cout << prev2 << "\t";
//	if (num == 0 || num == 1)
//	{
//		return;
//	}	
//   fibonacchiSeries2(num-1, prev2, prev1 + prev2);
//}
//void printfibonacchiSeries2(int n, int i = 0)
//{
//	if (i < n)
//	{
//		int ans = fibonacchiSeries(++i);
//		cout << ans << "\t";
//		printfibonacchiSeries2(n, i);
//	}
//}
//int main()
//{
//	fibonacchiSeries2(10, 0, 1);
//}