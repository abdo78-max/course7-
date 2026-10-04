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
//void printFirstLetterOfEachWord(string text)
//{
//	if (text.empty())
//	{
//		return;
//	}
//	if (text[0] != ' ')
//	{
//		cout << text[0] << endl;
//	}
//	for (int i = 1; i < text.length(); i++)
//	{
//		while(i< text.length() && text[i] == ' ')
//		{
//			i++;
//		}
//		if (i < text.length() && text[i - 1] == ' ' && text[i] != ' ')
//		{
//			cout << text[i] << endl;
//		}
//	}
//}
//void printFirstLetterOfEachWord2(string text)
//{
//	if (text.empty())
//	{
//		return;
//	}
//	bool isFirstLetter = true;
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (text[i] != ' ' && isFirstLetter)
//		{
//			cout << text[i] << endl;
//		}
//		isFirstLetter = text[i] == ' ' ? true : false;
//	}
//}
//int main()
//{
//	string text = Inputs::readString("please enter your string?\n");
//	cout << "first word of each string\n";
//	printFirstLetterOfEachWord2(text);
//}