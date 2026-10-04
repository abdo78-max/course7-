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
//void loadDataFromFileToVector(string fileName, vector<string>& fileContent)
//{
//	fstream myfile;
//	myfile.open(fileName, ios::in);
//	if (myfile.is_open())
//	{
//		string line;
//		while (getline(myfile, line))
//		{
//			fileContent.push_back(line);
//		}
//		myfile.close();
//	}
//}
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
//void printTableHeader(int sizeOfVector)
//{
//
//	cout << "Client List (" << sizeOfVector << ") client(s)\n";
//	cout << "______________________________________________________________________________________________________\n\n";
//	cout << setw(1) << "|" << setw(17) << "Account Number" << setw(3)<<"|" << setw(9) << "pin code" << setw(3) << "|" << setw(10) << " CilentName" << setw(31) << "|" << setw(6) << "phone" << setw(10) << "|" <<setw(10)<< "Balance\n";
//	cout << "______________________________________________________________________________________________________\n\n";
//}
//void showAllClients(stClientData client)
//{
//	cout << setw(1) << "|" << setw(4) << client.AccountNumber << setw(16) << "|" << setw(5) << client.pinCode << setw(8) << "| " << left << setw(40) << client.name << right<< "| " <<left<<setw(11)<<client.phone << right<<setw(5)<<"| " << client.AccountBalance << endl;
//}
//void getClientData()
//{
//
//	vector<string>fileContent;
//	loadDataFromFileToVector(clientsFileName, fileContent);
//	printTableHeader(fileContent.size());
//	for (int i = 0; i < fileContent.size(); i++)
//	{
//		string text = fileContent[i];
//		stClientData oneClientData=convertLineDataToRecord(text, "#//#");
//		showAllClients(oneClientData);
//	}
//	cout << "______________________________________________________________________________________________________";
//}
//int main()
//{
//	getClientData();
//}