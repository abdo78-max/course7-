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
//void printVector(vector<string>&words)
//{
//	for (string& word : words)
//	{
//		cout << word << endl;
//	}
//}
//int main()
//{
//	string text = Inputs::readString("please enter your string\n");
//	vector<string>words = splitString(text);
//	cout << "Tokens = " << words.size() << endl;
//	printVector(words);
//}