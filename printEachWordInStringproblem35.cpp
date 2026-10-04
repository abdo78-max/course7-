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
////string FirstLetterOfEachWord(string text)
////{
////	if (text.empty())
////	{
////		return;
////	}
////	bool isFirstLetter = true;
////	for (int i = 0; i < text.length(); i++)
////	{
////		if (text[i] != ' ' && isFirstLetter)
////		{
////			text[i] = toupper(text[i]);
////		}
////		isFirstLetter = text[i] == ' ' ? true : false;
////	}
////	return text;
////}
//string generateWord(int&position,string text)
//{
//	string word = "";
//	for (int i = position; i < text.length(); i++)
//	{
//		if (text[i] != ' ')
//		{
//			word += text[i];
//		}
//	}
//	return word;
//}
//void printWord2(string text)
//{
//	string word = "";
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (text[i] != ' ')
//		{
//			word += text[i];
//		}
//		else if (text[i] == ' ')
//		{
//			if (!word.empty())
//			{
//				cout << word << endl;
//				word = "";
//			}
//		}
//	}
//	cout << word;
//}
////void printWord3(string text)
////{
////	string blankspace = " ";
////	string word = "";
////	int pos = 0;
////	while (pos!=string::npos)
////	{
////		word += text[pos++];
////		if (pos == text.length() - 1)
////		{
////			cout << word << endl;
////		}
////		if (pos == text.find(blankspace))
////		{
////			int savepoint = text.find(blankspace) + 1;
////			text.erase(0, savepoint);
////			pos = 0;
////			cout << word << endl;
////			word = "";
////		}
////	}
////
////}
//void printWord3(string text)
//{
//	string delim = " ";
//	string word = "";
//	int pos = 0;
//	while ((pos = text.find(delim)) != string::npos)
//	{
//		word = text.substr(0, pos);
//		if (word != "")
//		{
//			cout << word<<endl;
//		}
//		text.erase(0, pos + delim.size());
//
//	}
//	if (text != "")
//	{
//		cout << text << endl;
//	}
//}
//void printWord(string text)
//{
//	if (text.empty())
//	{
//		return;
//	}
//	string word = "";
//	for (int i = 0; i < text.length(); i++)
//	{
//		word = "";
//		while (i < text.length() && text[i] != ' ')
//		{
//			word += text[i];
//			i++;
//		}
//		if (!word.empty())
//		{
//			cout << word << endl;
//		}
//	}
//}
//int main()
//{
//	string text = Inputs::readString("please enter your string\n");
//	cout << "your string words are\n";
//	printWord3(text);
//}