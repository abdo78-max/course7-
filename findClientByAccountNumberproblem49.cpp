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
//#include<fstream>
//#include "generateRandom.h"
//#include "ArrLib.h"
//#include "MathLib.h"
//#include "Inputs.h"
//using namespace std;
//const string clientsFileName = "clientFile.txt";
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
//	vector<string>clientData = splitString(text, delim);
//	client.AccountNumber = clientData[0];
//	client.pinCode = clientData[1];
//	client.name = clientData[2];
//	client.phone = clientData[3];
//	client.AccountBalance = stod(clientData[4]);
//	return client;
//}
//vector<stClientData> loadDataFromFileToVector(string fileName)
//{
//	vector<stClientData>clients;
//	stClientData client;
//	fstream myfile;
//	myfile.open(fileName, ios::in);
//	if (myfile.is_open())
//	{
//		string line;
//		while (getline(myfile, line))
//		{
//			client = convertLineDataToRecord(line, "#//#");
//			clients.push_back(client);
//		}
//		myfile.close();
//	}
//	return clients;
//}
//void printClient(stClientData client)
//{
//	cout << "Account Number:" << client.AccountNumber<<"\n";
//	cout << "pin code:" << client.pinCode << "\n";
//	cout << "name:" << client.name << "\n";
//	cout << "phone:" << client.phone << "\n";
//	cout << "Account Balance:" << client.AccountBalance << "\n";
//}
//bool findClientByAccountNumber(string AccountNumber, stClientData& clientData)
//{
//	vector<stClientData>clients = loadDataFromFileToVector(clientsFileName);
//	for (const stClientData& client : clients)
//	{
//		if (client.AccountNumber == AccountNumber)
//		{
//			clientData = client;
//			return true;
//		}
//	}
//	return false;
//}
//bool findClientByAccountNumber(string AccountNumber,string fileName)
//{
//	stClientData client;
//	fstream myfile;
//	myfile.open(fileName, ios::in);
//	if (myfile.is_open())
//	{
//		string line;
//		while (getline(myfile, line))
//		{
//			client = convertLineDataToRecord(line, "#//#");
//			if (client.AccountNumber == AccountNumber)
//			{
//				printClient(client);
//				myfile.close();
//				return true;
//			}
//		}
//	}
//	return false;
//}
////bool findClientByAccountNumber(string AccountNumber, stClientData&clientData)
////{
////	stClientData client;
////	fstream myfile;
////	myfile.open(clientsFileName, ios::in);
////	if (myfile.is_open())
////	{
////		string line;
////		while (getline(myfile, line))
////		{
////			client = convertLineDataToRecord(line, "#//#");
////			if (client.AccountNumber == AccountNumber)
////			{
////				clientData = client;
////				myfile.close();
////				return true;
////			}
////		}
////	}
////	return false;
////}
//int main()
//{
//	stClientData client;
//	string accountNumber = Inputs::readString("please enter accountNumber:");
//	if (findClientByAccountNumber(accountNumber,client))
//	{
//		printClient(client);
//	}
//	else
//	{
//		cout << "Client number with (" << accountNumber << ")" << "Not found\n";
//	}
//}