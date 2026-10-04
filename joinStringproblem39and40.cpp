//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//#include <sstream>
//#include <string>
//#include <cmath>
//#include <iomanip>
//#include <vector>
//#include <cctype>
//#include <ctime>
//#include "generateRandom.h"
//#include "ArrLib.h"
//#include "MathLib.h"
//#include "Inputs.h"
//using namespace std;
//string joinString(vector<string>&names, string delim = " ")
//{
//	if (names.empty())
//	{
//		return "";
//	}
//	string text = "";
//	for (string& name : names)
//	{
//		text += name+delim;
//	}
//	return text.substr(0,text.size()-delim.size());
//}
//string joinString(string arr[], int length, string delim = " ")
//{
//	if (length==0)
//	{
//		return "";
//	}
//	string text = "";
//	for (int i = 0; i < length; i++)
//	{
//		text += arr[i] + delim;
//	}
//	return text.substr(0, text.size() - delim.size());
//}
//int main()
//{
//	vector<string>names = { "Mohammed","Faid","Ali","Maher"};
//	string arr3[] = { "Mohammed","Faid","Ali","Maher" };
//	//string text = Inputs::readString("please enter your string\n");
//	cout << "vector after join\n"<<joinString(names,"###")<<"\n";
//	int arrSize = names.size();
//	string* arr = new string[arrSize];
//	int counter = 0;
//	for (string& name : names)
//	{
//		*(arr + counter) = name;
//		counter++;
//	}
//	cout << "array after join\n" << joinString(arr3, 4, "###");
//}
