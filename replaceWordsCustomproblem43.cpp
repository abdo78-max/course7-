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
//string LowerAllLettersInString(string text)
//{
//	for (int i = 0; i < text.length(); i++)
//	{
//		text[i] = tolower(text[i]);
//	}
//	return text;
//}
//string joinString(vector<string>& names, string delim = " ")
//{
//	if (names.empty())
//	{
//		return "";
//	}
//	string text = "";
//	for (string& name : names)
//	{
//		text += name + delim;
//	}
//	return text.substr(0, text.size() - delim.size());
//}
//vector<string> splitString(string text, string delim = " ")
//{
//	vector<string>words;
//	string word = "";
//	int pos = 0;
//	while ((pos = text.find(delim)) != string::npos)
//	{
//		word = text.substr(0, pos);
//		if (word != "")
//		{
//			words.push_back(word);
//		}
//		text.erase(0, pos + delim.size());
//	}
//	if (text != "")
//	{
//		words.push_back(text);
//	}
//	return words;
//}
//string replaceWord(string text, string word, string replace, bool matchCase = true)
//{
//	if (text.empty())
//	{
//		return "";
//	}
//	string text2 = "";
//	vector<string>words = splitString(text);
//	for (string& s : words)
//	{
//		if (matchCase)
//		{
//			if (s == word)
//			{
//				s = replace;
//			}
//		}
//		else
//		{
//			if (LowerAllLettersInString(s) == LowerAllLettersInString(word))
//			{
//				s = replace;
//			}
//		}
//	}
//	return joinString(words);
//}
//string replaceWord(string text, string word, string replace,bool matchCase=true)
//{
//	if (text.empty())
//	{
//		return "";
//	}
//	string text2 = "";
//	vector<string>words = splitString(text);
//	for (int i = 0; i < words.size(); i++)
//	{
//		if (word == words[i] && matchCase)
//		{
//			words[i] = replace;
//		}
//		else if (!matchCase)
//		{
//			if (LowerAllLettersInString(word)== LowerAllLettersInString(words[i]))
//			{
//				words[i] = replace;
//			}
//		}
//	}
//	return joinString(words);
//}
//int main()
//{
//	cout << "orignal string" << endl;
//	string text = "welcome to jorden , jorden is an nice country";
//	cout << text << endl;
//	cout << "string after replace" << endl;
//	cout << replaceWord(text, "Jorden", "USA") << endl;
//	cout << "string after replace" << endl;
//	cout << replaceWord(text, "JOrdeN", "USA",false) << endl;
//}