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
//char firstLetterOfEachWord(string text)
//{
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (text[i] != ' ')
//		{
//			return text[i];
//		}
//	}
//	return ' ';
//}
//string trimLeft3(string text)
//{
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (text[i] != ' ')
//		{
//			return text.substr(i, text.length()-i);
//		}
//	}
//	return "";
//}
//string trimRight3(string text)
//{
//	for (int i = text.length()-1; i >= 0; i--)
//	{
//		if (text[i] != ' ')
//		{
//			return text.substr(0,i+1);
//		}
//	}
//	return "";
//
//}
//string trimLeft2(string text)
//{
//	char c = firstLetterOfEachWord(text);
//	if (c == ' ')
//	{
//		return "";
//	}
//	if (text.empty())
//	{
//		return "";
//	}
//	int pos = text.find(c);
//	if (pos == 0)
//	{
//		return text;
//	}
//	string delim = " ";
//	delim = text.substr(0, pos);
//	if (delim.find(" ") != string::npos)
//	{
//		text.erase(0, pos);
//	}
//	return text;
//}
//char lastLetterOfEachWord(string text)
//{
//	if (text.empty())
//	{
//		return ' ';
//	}
//	for (int i = text.length() - 1; i >= 0; i--)
//	{
//		if (text[i] != ' ')
//		{
//			return text[i];
//		}
//	}
//	return ' ';
//}
//string trimRight2(string text)
//{
//	if (text.empty())
//	{
//		return "";
//	}
//	char c = lastLetterOfEachWord(text);
//	if (c == ' ')
//	{
//		return "";
//	}
//	int pos = text.rfind(c);
//	if (pos == text.length() - 1)
//	{
//		return text;
//	}
//	string delim = " ";
//	delim = text.substr(pos + 1);
//	if (delim.find(" ") != string::npos)
//	{
//		text.erase(pos + 1, delim.size());
//	}
//	return text;
//
//}
//string trimLeft(string text)
//{
//	if (text.empty())
//	{
//		return "";
//	}
//	string delim = " ";
//	for (int i = 0; i < text.size(); i++)
//	{
//		while (text[i] == ' ')
//		{
//			text.erase(0, delim.size());
//			if (text.empty())
//			{
//				break;
//			}
//		}
//		if (text.empty())
//		{
//			break;
//		}
//		if (text[i] != ' ')
//		{
//			break;
//		}
//	}
//	return text;
//}
//string trimRight(string text)
//{
//	if (text.empty())
//	{
//		return "";
//	}
//	string delim = " ";
//	for (int i = text.size() - 1; i >= 0; i--)
//	{
//		while (text[i] == ' ')
//		{
//			text.erase(text.size() - 1, delim.size());
//			i = text.size() - 1;
//			if (i < 0)
//			{
//				return "";
//			}
//		}
//		if (text[i] != ' ')
//		{
//			break;
//		}
//	}
//	return text;
//}
//string trim(string text)
//{
//	return trimLeft3(trimRight3(text));
//}
//int main()
//{
//	string text = Inputs::readString("please enter your string\n");
//	cout << "[" << trim(text) << "]";
//}