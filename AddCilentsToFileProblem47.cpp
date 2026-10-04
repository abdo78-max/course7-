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
//void resetScreen()
//{
//	system("color 0F");
//	system("cls");
//}
//stClientData readCilent()
//{
//	stClientData cilent;
//	cout << "Enter Account Number?";
//	cin >> cilent.AccountNumber;
//	cout << "Enter pinCode?";
//	cin >> cilent.pinCode;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cout << "Enter the name?";
//	getline(cin, cilent.name);
//	cout << "Enter the phone?";
//	cin >> cilent.phone;
//	cout << "Enter Account Balance?";
//	cin >> cilent.AccountBalance;
//	return cilent;
//}
//string convertLineToRecord(stClientData client, string delim = ",")
//{
//	return client.AccountNumber + delim + client.pinCode + delim + client.name + delim + client.phone + delim + to_string(client.AccountBalance);
//}
//void convertDataLineTofile(string fileName, string dataLine)
//{
//	stClientData client;
//	fstream cilentsFile;
//	cilentsFile.open(fileName, ios::out | ios::app);
//	if (cilentsFile.is_open())
//	{
//		cilentsFile << dataLine << endl;
//		cilentsFile.close();
//	}
//}
//void addClient()
//{
//	stClientData client;
//	client = readCilent();
//	convertDataLineTofile(clientsFileName, convertLineToRecord(client, "#//#"));
//}
//void addCilentsToFile()
//{
//	char yesOrNo;
//	do
//	{
//		resetScreen();
//		cout << "add new cilent:\n";
//		addClient();
//		cout << "do you want to add more cilents [y]:yes [n]:no: ";
//		cin >> yesOrNo;
//	} while (toupper(yesOrNo) == 'Y');
//}
//int main()
//{
//	addCilentsToFile();
//}