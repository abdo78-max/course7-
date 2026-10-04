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
//struct stClientData
//{
//	string AccountNumber;
//	string pinCode;
//	string name;
//	string phone;
//	double AccountBalance;
//};
//vector<string> splitString(string text, string delim = "#//#")
//{
//	vector<string> words;
//	string word = "";
//	int pos = 0;
//	while ((pos = text.find(delim)) != string::npos)
//	{
//		word = "";
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
//stClientData convertLineDataToRecord(string text, string delim = "#//#")
//{
//	stClientData client;
//	vector<string>clientData = splitString(text,delim);
//	client.AccountNumber = clientData[0];
//	client.pinCode = clientData[1];
//	client.name = clientData[2];
//	client.phone = clientData[3];
//	client.AccountBalance = stod(clientData[4]);
//	return client;
//}
////stClientData convertLineDataToRecord(string text, string delim = "#//#")
////{
////	stClientData client;
////	int pos = text.find(delim);
////	client.AccountNumber = text.substr(0, pos);
////	text.erase(0, pos + delim.size());
////	pos = text.find(delim);
////	client.pinCode = text.substr(0, pos);
////	text.erase(0, pos + delim.size());
////	pos = text.find(delim);
////	client.name = text.substr(0, pos);
////	text.erase(0, pos + delim.size());
////	pos = text.find(delim);
////	client.phone = text.substr(0, pos);
////	text.erase(0, pos + delim.size());
////	client.AccountBalance = stod(text);
////	return client;
////}
//void printClient(stClientData client)
//{
//	cout << "Account Number:" << client.AccountNumber<<"\n";
//	cout << "pin code:" << client.pinCode << "\n";
//	cout << "name:" << client.name << "\n";
//	cout << "phone:" << client.phone << "\n";
//	cout << "Account Balance:" << client.AccountBalance << "\n";
//}
//int main()
//{
//
//	cout << "line record is\n";
	//string text = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#0545455545#//#5270.000000";
//	stClientData client = convertLineDataToRecord(text);
//	cout << text << endl;
//	printClient(client);
//}