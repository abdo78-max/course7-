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
//char invertCharacters(char a)
//{
//	if (!isdigit(a))
//	{
//		return isupper(a) ? tolower(a) : toupper(a);
//	}
//}
//int countLetter(string text, char c,bool MatchCase=true)
//{
//	int count = 0;
//	for (int i = 0; i < text.size(); i++)
//	{
//		if (MatchCase)
//		{
//			if (text[i] == c)
//			{
//				count++;
//			}
//		}
//		else
//		{
//			if (toupper(text[i]) == toupper(c))
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//int countLetterMatchCase(string text, char c)
//{
//	int count = 0;
//	for (int i = 0; i < text.size(); i++)
//	{
//		if (toupper(text[i]) == toupper(c))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	string text = Inputs::readString("please enter your string\n");
//	char c = Inputs::readCharacters("please enter a character\n");
//	cout << "Letter '" << c << "'" << " Count = " << countLetter(text, c)<<endl;
//	cout << "Letter '" << c << "'"<<" or '"<< invertCharacters(c) << "'" << " Count = " << countLetter(text, c, false);
//}