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
//vector<string> splitString(string text, string delim=" ")
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
//string replaceWord(string text, string word, string replace)
//{
//	if (text.empty())
//	{
//		return "";
//	}
//	string text2 = "";
//	vector<string>words = splitString(text);
//	for (int i = 0; i < words.size(); i++)
//	{
//		if (word == words[i])
//		{
//			words[i] = replace;
//		}
//		text2 += words[i]+" ";
//	}
//	//vector<string>::iterator it = words.begin();
//	//for (; it != words.end(); it++)
//	//{
//	//	if (*it == word)
//	//	{
//	//		*it = replace;
//	//	}
//	//	text2 += *it + " ";
//	//}
//	//while (it != words.end())
//	//{
//	//	if (*it == word)
//	//	{
//	//		*it = replace;
//	//	}
//	//	text2 += *it + " ";
//	//	it++;
//	//}
//	return text2.substr(0, text2.size() - 1);
//}
//string replaceWordUsingBuiltInFunction(string text, string word, string replace)
//{
//	int pos = text.find(word);
//	while (pos != string::npos)
//	{
//		text = text.replace(pos, word.length(), replace);
//		pos = text.find(word);
//	}
//	return text;
//}
//int main()
//{
//	cout << "orignal string" << endl;
//	string text = "welcome to jorden , jorden is an nice country";
//	cout << text << endl;
//	cout << "string after replace" << endl;
//	cout << replaceWordUsingBuiltInFunction(text, "jorden", "USA")<<endl;
//}