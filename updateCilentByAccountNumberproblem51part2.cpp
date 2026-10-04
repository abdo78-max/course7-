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
//stClientData readClient(string AccountNumber)
//{
//	stClientData client;
//	client.AccountNumber = AccountNumber;
//	cout << "Enter pinCode?";
//	cin >> client.pinCode;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cout << "Enter the name?";
//	getline(cin, client.name);
//	cout << "Enter the phone?";
//	cin >> client.phone;
//	cout << "Enter Account Balance?";
//	cin >> client.AccountBalance;
//	return client;
//}
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
//string clientRecord(stClientData client, string delim = ",")
//{
//	return client.AccountNumber + delim + client.pinCode + delim + client.name + delim + client.phone + delim + to_string(client.AccountBalance);
//}
//void savevectorTofile(string fileName, vector<stClientData>& clients)
//{
//	fstream myfile;
//	myfile.open(fileName, ios::out);
//	if (myfile.is_open())
//	{
//		for (stClientData& client : clients)
//		{
//			myfile << clientRecord(client, "#//#") << endl;
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
//int findClientByAccountNumber(string AccountNumber, stClientData& clientData, vector<stClientData>&clients)
//{
//	for (int i = 0; i < clients.size(); i++)
//	{
//		if (clients[i].AccountNumber == AccountNumber)
//		{
//			clientData = clients[i];
//			return i;
//		}
//	}
//	return -1;
//}
//void updateClientByAccountNumber(string AccountNumber, vector<stClientData>& clients)
//{
//	stClientData client;
//	char yesOrNo;
//	int index = findClientByAccountNumber(AccountNumber, client, clients);
//	if (index > -1)
//	{
//		printClient(client);
//		cout << "Are you sure you want to update this client [y]:yes [n]:no:";
//		cin >> yesOrNo;
//		if (toupper(yesOrNo) == 'Y')
//		{
//			client = readClient(AccountNumber);
//			clients[index] = client;
//			cout << "client updated successfully\n";
//			savevectorTofile(clientsFileName, clients);
//		}
//	}
//	else
//	{
//		cout << "client with " << AccountNumber << " is not found\n";
//	}
//}
//int main()
//{
//	string accountNumber = Inputs::readString("enter the accountNumber:");
//	vector<stClientData>clients = loadDataFromFileToVector(clientsFileName);
//	updateClientByAccountNumber(accountNumber, clients);
//}