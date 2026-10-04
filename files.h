#pragma once
#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include<fstream>
#include<vector>
using namespace std;
namespace files
{
	void printfileContent(string fileName)
	{
		fstream myfile;
		myfile.open(fileName, ios::in);
		if (myfile.is_open())
		{
			string line;
			while (getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
	}
	void clearfile(string fileName)
	{
		fstream myfile;
		myfile.open(fileName, ios::out);
		if (!myfile)
		{
			cout << "invaild path or file not existed\n";
			return;
		}
		if (myfile.is_open())
		{
			myfile.clear();
		}
		myfile.close();
	}
	void copyFile(string srcPath, string destenationPath, bool override)
	{
		fstream src;
		src.open(srcPath, ios::in);
		if (!src)
		{
			cout << "invaild path or file not existed\n";
			return;
		}
		fstream destenation;
		destenation.open(destenationPath, override ? ios::out : ios::app);
		if (!destenation)
		{
			cout << "invaild path or file not existed\n";
			return;
		}
		if (src.is_open() && destenation.is_open())
		{
			string line;
			while (getline(src, line))
			{
				destenation << line << endl;
			}
			src.close();
			destenation.close();
		}
	}
	void cutfile(string srcPath, string destenationPath, bool override)
	{
		copyFile(srcPath, destenationPath, override);
		fstream src;
		src.open(srcPath, ios::out);
		if (!src)
		{
			cout << "invaild path or file not existed\n";
			return;
		}
		src.clear();
		src.close();
	}
	void loadDataFromFileToVector(string fileName, vector<string>& fileContent)
	{
		fstream myfile;
		myfile.open(fileName, ios::in);
		if (myfile.is_open())
		{
			string line;
			while (getline(myfile, line))
			{
				fileContent.push_back(line);
			}
			myfile.close();
		}
	}
	void savevectorTofile(string fileName, vector<string>& fileContent)
	{
		fstream myfile;
		myfile.open(fileName, ios::out);
		if (myfile.is_open())
		{
			for (string& line : fileContent)
			{
				if (!line.empty())
				{
					myfile << line << endl;
				}
			}
			myfile.close();
		}

	}
	void deleteRecordFromFile(string fileName, string record)
	{
		vector<string>fileContent;
		loadDataFromFileToVector(fileName, fileContent);
		for (string& line : fileContent)
		{
			if (line == record)
			{
				line = "";
			}
		}
		savevectorTofile(fileName, fileContent);
	}
	void updateRecordFromFile(string fileName, string record, string updateTo)
	{
		vector<string>fileContent;
		loadDataFromFileToVector(fileName, fileContent);
		for (string& line : fileContent)
		{
			if (line == record)
			{
				line = updateTo;
			}
		}
		savevectorTofile(fileName, fileContent);
	}
}