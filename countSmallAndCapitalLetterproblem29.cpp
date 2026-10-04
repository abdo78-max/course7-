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
//enum enWhatToCount{SMALLLETTER=1,CAPITALLETTER=2,ALL=3};
//int countLetters(string text, enWhatToCount choice= enWhatToCount::ALL)
//{
//	int count = 0;
//	if (choice == enWhatToCount::ALL)
//	{
//		return text.length();
//	}
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (choice == enWhatToCount::CAPITALLETTER&&isupper(text[i]))
//		{
//			count++;
//		}
//		else if (choice == enWhatToCount::SMALLLETTER&&islower(text[i]))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int countCapitalLettersCount(string text)
//{
//	int upperLetterCount=0;
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (isupper(text[i]))
//		{
//			upperLetterCount++;
//		}
//	}
//	return upperLetterCount;
//}
//int countSmallLettersCount(string text)
//{
//	int smallLetterCount = 0;
//	for (int i = 0; i < text.length(); i++)
//	{
//		if (islower(text[i]))
//		{
//			smallLetterCount++;
//		}
//	}
//	return smallLetterCount;
//}
//int main()
//{
//	string text = Inputs::readString("please enter your string\n");
//	cout << "String Length = " << text.length() <<endl;
//	cout << "Capital Letters count = " << countCapitalLettersCount(text)<<endl;
//	cout << "small Letters count = " << countSmallLettersCount(text) << endl;
//
//}