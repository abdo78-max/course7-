#pragma once
#pragma once
#include<iostream>
using namespace std;
enum enRandom
{
	SMALLLETTER = 1, CAPITALLETTER = 2, SPECIALCHARACTER = 3, DIGIT = 4
};
namespace generators
{
	int randomNumbers(int from, int to)
	{
		return rand() % (to - from + 1) + from;
	}
	char random(enRandom random)
	{
		switch (random)
		{
		case enRandom::SMALLLETTER:
			return char(randomNumbers(97, 122));
		case enRandom::CAPITALLETTER:
			return char(randomNumbers(65, 90));
		case enRandom::SPECIALCHARACTER:
			return char(randomNumbers(33, 47));
		case enRandom::DIGIT:
			return char(randomNumbers(48, 57));
		}
	}
	string generateWord(enRandom random, short length)
	{
		string text = "";
		for (int i = 1; i <= length; i++)
		{
			text += generators::random(random);
		}
		return text;
	}
	string generateKey()
	{
		string key = "";
		key += generateWord(enRandom::CAPITALLETTER, 4) + '-';
		key += generateWord(enRandom::CAPITALLETTER, 4) + '-';
		key += generateWord(enRandom::CAPITALLETTER, 4) + '-';
		key += generateWord(enRandom::CAPITALLETTER, 4);
		return key;

	}
	void generateKeys(int numberOfKeys)
	{
		for (int i = 1; i <= numberOfKeys; i++)
		{
			string text = generateKey();
			cout << "key[" << i << "]: " << text << endl;
		}
	}
	void fillRandomArray(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = randomNumbers(1, 100);
		}
	}
	void fillRandomArray(double arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = randomNumbers(1, 100);
		}
	}
	void fillRandomSmallCharArray(char arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = randomNumbers('a', 'z');
		}
	}
	void fillRandomCapArray(char arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = randomNumbers('A', 'Z');
		}
	}
	void generateRandomMatrix(int arr[][3], int rows, int columns)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				arr[i][j] = generators::randomNumbers(0, 100);
			}
		}
	}
}