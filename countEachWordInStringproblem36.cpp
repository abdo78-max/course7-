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
//int countWord(string text)
//{
//	int count = 0;
//	string delim = " ";
//	string word = "";
//	int pos = 0;
//	while ((pos = text.find(delim)) != string::npos)
//	{
//		word = "";
//		word = text.substr(0, pos);
//		if (word != "")
//		{
//			count++;
//		}
//		text.erase(0, pos + delim.size());
//	}
//	if (text != "")
//	{
//		count += 1;
//	}
//	return count;
//}
//int main()
//{
//	string text = Inputs::readString("please enter your string\n");
//	cout << "the number of your words in string is :"<< countWord(text);
//}