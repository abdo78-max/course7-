#pragma once
#include<iostream>
#include <cstdlib>
#include <string>
#include<vector>
#include "MathLib.h"
#include "generateRandom.h"
#include <iomanip>
using namespace std;
enum enWhatToCount { SMALLLETTER = 1, CAPITALLETTER = 2, ALL = 3 };
namespace strings 
{
	void printFirstLetterOfEachWord(string text)
	{
		if (text.empty())
		{
			return;
		}
		bool isFirstLetter = true;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ' && isFirstLetter)
			{
				cout << text[i] << endl;
			}
			isFirstLetter = text[i] == ' ' ? true : false;
		}
	}
	string FirstLetterOfEachWord(string text)
	{
		if (text.empty())
		{
			return;
		}
		bool isFirstLetter = true;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ' && isFirstLetter)
			{
				text[i] = toupper(text[i]);
			}
			isFirstLetter = text[i] == ' ' ? true : false;
		}
		return text;
	}
	string UpperAllLettersInString(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = toupper(text[i]);
		}
		return text;
	}
	string LowerAllLettersInString(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = tolower(text[i]);
		}
		return text;
	}
	char invertCharacters(char a)
	{
		if (!isdigit(a))
		{
			return isupper(a) ? tolower(a) : toupper(a);
		}
	}
	string InvertText(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = invertCharacters(text[i]);
		}
		return text;
	}
	int countLetters(string text, enWhatToCount choice = enWhatToCount::ALL)
	{
		int count = 0;
		if (choice == enWhatToCount::ALL)
		{
			return text.length();
		}
		for (int i = 0; i < text.length(); i++)
		{
			if (choice == enWhatToCount::CAPITALLETTER && isupper(text[i]))
			{
				count++;
			}
			else if (choice == enWhatToCount::SMALLLETTER && islower(text[i]))
			{
				count++;
			}
		}
		return count;
	}
	int countCapitalLettersCount(string text)
	{
		int upperLetterCount = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (isupper(text[i]))
			{
				upperLetterCount++;
			}
		}
		return upperLetterCount;
	}
	int countSmallLettersCount(string text)
	{
		int smallLetterCount = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (islower(text[i]))
			{
				smallLetterCount++;
			}
		}
		return smallLetterCount;
	}
	int countLetter(string text, char c)
	{
		int count = 0;
		for (int i = 0; i < text.size(); i++)
		{
			if (text[i] == c)
			{
				count++;
			}
		}
		return count;
	}
	bool isVowel(char a)
	{
		a = tolower(a);
		return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
	}
	void printWord(string text)
	{
		string delim = " ";
		string word = "";
		int pos = 0;
		while ((pos = text.find(delim)) != string::npos)
		{
			word = "";
			word = text.substr(0, pos);
			if (word != "")
			{
				cout << word << endl;
			}
			text.erase(0, pos + delim.size());

		}
		if (text != "")
		{
			cout << text << endl;
		}
	}
	int countWord(string text)
	{
		int count = 0;
		string delim = " ";
		string word = "";
		int pos = 0;
		while ((pos = text.find(delim)) != string::npos)
		{
			word = "";
			word = text.substr(0, pos);
			if (word != "")
			{
				count++;
			}
			text.erase(0, pos + delim.size());
		}
		if (text != "")
		{
			count += 1;
		}
		return count;
	}
	vector<string> splitString(string text, string delim = " ")
	{
		vector<string>words;
		string word = "";
		int pos = 0;
		while ((pos = text.find(delim)) != string::npos)
		{
			word = "";
			word = text.substr(0, pos);
			if (word != "")
			{
				words.push_back(word);
			}
			text.erase(0, pos + delim.size());
		}
		if (text != "")
		{
			words.push_back(text);
		}
		return words;
	}

	string trimLeft(string text)
	{
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ')
			{
				return text.substr(i, text.length() - i);
			}
		}
		return "";

	}
	string trimRight(string text)
	{
		for (int i = text.length() - 1; i >= 0; i--)
		{
			if (text[i] != ' ')
			{
				return text.substr(0, i + 1);
			}
		}
		return "";
	}
	string trim(string text)
	{
		string trimmedLefttext = trimLeft(text);
		string trimAllText = trimRight(trimmedLefttext);
		return trimAllText;
	}
	string joinString(vector<string>& names, string delim = " ")
	{
		if (names.empty())
		{
			return "";
		}
		string text = "";
		for (string& name : names)
		{
			text += name + delim;
		}
		return text.substr(0, text.size() - delim.size());
	}
	string joinString(string arr[], int length, string delim = " ")
	{
		if (length == 0)
		{
			return "";
		}
		string text = "";
		for (int i = 0; i < length; i++)
		{
			text += arr[i] + delim;
		}
		return text.substr(0, text.size() - delim.size());
	}
	string reverseWords(string s1)
	{
		string s2 = "";
		vector<string> words = splitString(s1);
		for (int i = words.size() - 1; i >= 0; i--)
		{
			s2 += words[i] + " ";
		}
		return s2.substr(0, s2.size() - 1);
	}
	string replaceWordUsingBuiltInFunction(string text, string word, string replace)
	{
		int pos = text.find(word);
		while (pos != string::npos)
		{
			text = text.replace(pos, word.length(), replace);
			pos = text.find(word);
		}
		return text;
	}
	string replaceWord(string text, string word, string replace, bool matchCase = true)
	{
		if (text.empty())
		{
			return "";
		}
		string text2 = "";
		vector<string>words = splitString(text);
		for (string& s : words)
		{
			if (matchCase)
			{
				if (s == word)
				{
					s = replace;
				}
			}
			else
			{
				if (LowerAllLettersInString(s) == LowerAllLettersInString(word))
				{
					s = replace;
				}
			}
		}
		return joinString(words);
	}
	string removePunctuations(string text)
	{
		string text2;
		for (int i = 0; i < text.size(); i++)
		{
			if (!ispunct(text[i]))
			{
				text2 += text[i];
			}
		}
		return text2;
	}
}