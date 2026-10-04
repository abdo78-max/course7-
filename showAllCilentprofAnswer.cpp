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
//	vector<string>clientData = splitString(text, delim);
//	client.AccountNumber = clientData[0];
//	client.pinCode = clientData[1];
//	client.name = clientData[2];
//	client.phone = clientData[3];
//	client.AccountBalance = stod(clientData[4]);
//	return client;
//}
//void printClient(stClientData client)
//{
//	cout << "| " << left<<setw(15)  <<client.AccountNumber;
//	cout << "| " << left<<setw(10) << client.pinCode;
//	cout << "| " << left<<setw(40) << client.name;
//	cout << "| " << left<<setw(12) << client.phone;
//	cout << "| " << left<<setw(12) << client.AccountBalance;
//	cout << endl;
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
//void showClients(const vector<stClientData>& clients)
//{
//	cout << "\t\t\t\t\tClient List (" << clients.size() << ") client(s)\n";
//	cout << "______________________________________________________________________________________________________\n\n";
//	cout << "| " << left<<  setw(15) << "AccountNumber";
//	cout << "| " << left << setw(10) << "pinCode";
//	cout << "| " << left << setw(40) << "client name";
//	cout << "| " << left << setw(12) << "phone";
//	cout << "| " << left << setw(12) << "Account balance";
//	cout << "\n______________________________________________________________________________________________________\n\n";
//	for (const stClientData& client : clients)
//	{
//		printClient(client);
//	}
//	cout << "\n______________________________________________________________________________________________________";
//}
//int main()
//{
//	vector<stClientData>clients= loadDataFromFileToVector(clientsFileName);
//	showClients(clients);
//}