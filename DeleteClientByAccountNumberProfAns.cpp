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
//	bool markForDelete = false;
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
//string cilentRecord(stClientData client, string delim = ",")
//{
//	return client.AccountNumber + delim + client.pinCode + delim + client.name + delim + client.phone + delim + to_string(client.AccountBalance);
//}
//void savevectorTofile(string fileName, vector<stClientData>&clients)
//{
//	fstream myfile;
//	myfile.open(fileName, ios::out);
//	if (myfile.is_open())
//	{
//		for (stClientData& client : clients)
//		{
//			if (client.markForDelete == false)
//			{
//				myfile << cilentRecord(client, "#//#") << endl;
//			}
//		}
//		myfile.close();
//	}
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
//	cout << "Account Number:" << client.AccountNumber << "\n";
//	cout << "pin code:" << client.pinCode << "\n";
//	cout << "name:" << client.name << "\n";
//	cout << "phone:" << client.phone << "\n";
//	cout << "Account Balance:" << client.AccountBalance << "\n";
//}
//bool findClientByAccountNumber(string AccountNumber, stClientData& clientData, vector<stClientData>& clients)
//{
//	for (stClientData& client : clients)
//	{
//		if (client.AccountNumber == AccountNumber)
//		{
//			clientData = client;
//			return true;
//		}
//	}
//	return false;
//}
//bool MarkCilent(string AccountNumber, vector<stClientData>& clients)
//{
//	for (stClientData &client:clients)
//	{
//		if (client.AccountNumber == AccountNumber)
//		{
//			client.markForDelete = true;
//			return true;
//		}
//	}
//	return false;
//}
//void deleteCilentByAccountNumber(string AccountNumber, vector<stClientData>& clients)
//{
//	stClientData client;
//	if (findClientByAccountNumber(AccountNumber, client,clients))
//	{
//		printClient(client);
//		char yesOrNo;
//		cout << "do you want to delete this client [y]:yes [n]:no:";
//		cin >> yesOrNo;
//		if (toupper(yesOrNo) == 'Y')
//		{
//			if (MarkCilent(AccountNumber, clients))
//			{
//				savevectorTofile(clientsFileName, clients);
//				cout << "you successfully deleted this client\n";
//				clients = loadDataFromFileToVector(clientsFileName);
//			}
//		}
//	}
//	else
//	{
//		cout << "client with account Number" << AccountNumber << "not found!";
//	}
//}
//int main()
//{
//	string accountNumber = Inputs::readString("enter the accountNumber:");
//	vector<stClientData>clients = loadDataFromFileToVector(clientsFileName);
//	deleteCilentByAccountNumber(accountNumber, clients);
//}