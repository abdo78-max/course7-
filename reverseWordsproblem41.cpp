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
//void mySwap(string& x, string& y)
//{
//	string temp = x;
//	x = y;
//	y = temp;
//}
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
//void reverseWords(vector<string>&words)
//{
//	for (int i = 0; i < words.size()/2; i++)
//	{
//		mySwap(words[i], words[words.size() - i - 1]);
//	}
//}
//string reverseWords(string s1)
//{
//	string s2 = "";
//	vector<string> words = splitString(s1);
//	for (int i = words.size()-1; i >=0; i--)
//	{
//		s2 += words[i]+" ";
//	}
//	return s2.substr(0, s2.size()-1);
//}
//string reverseWords(string s1)
//{
//	string s2 = "";
//	vector<string> words = splitString(s1);
//	vector<string>::iterator it = words.end();
//	while (it!=words.begin())
//	{
//		--it;
//		s2 += *it + " ";
//	}
//	for (it = words.end();it!=words.begin();)
//	{
//		--it;
//		s2 += *it + " ";
//	}
//	return s2.substr(0, s2.size() - 1);
//}
//string fillText(vector<string>& words,string delim=" ")
//{
//	string text = "";
//	for (string& word : words)
//	{
//		text += word+delim;
//	}
//	if (text.empty())
//	{
//		return "";
//	}
//	return text.substr(0, text.size() - delim.size());
//}
//int main()
//{
//	string text = Inputs::readString("enter your string\n");
//	//vector<string>words= splitString(text);
//	//reverseWords(words);
//	cout << "string after reversing\n";
//	//cout<<fillText(words);
//	cout << reverseWords(text) << endl;
//}