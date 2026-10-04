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
//enum enMainMenu { SHOWCLIENT = 1, ADDCLIENT = 2, DELETECLIENT = 3, UPDATECLIENT = 4, FINDCLIENT = 5, EXIT = 6 };
//void showMainMenuScreen();
//void performMainMenu(enMainMenu mainMenuOption);
//void showAddClientsScreen();
//struct stClientData
//{
//	string AccountNumber;
//	string pinCode;
//	string name;
//	string phone;
//	double AccountBalance;
//	bool markForDelete = false;
//};
//vector<stClientData> loadDataFromFileToVector(string fileName);
//stClientData convertLineDataToRecord(string text, string delim);
//bool findClientByAccountNumber(string AccountNumber,string fileName)
//{
//	fstream myfile;
//	myfile.open(fileName, ios::in);
//	if (myfile.is_open())
//	{
//		stClientData client;
//		string line;
//		while (getline(myfile, line))
//		{
//			client = convertLineDataToRecord(line,"#//#");
//			if (client.AccountNumber == AccountNumber)
//			{
//				myfile.close();
//				return true;
//			}
//		}
//		myfile.close();
//		return false;
//	}
//	myfile.close();
//	return false;
//}
//void GoBackToMainMenu()
//{
//	cout << "press any key to go back to main menu";
//	system("pause>0");
//	showMainMenuScreen();
//}
//void showMainMenuScreen()
//{
//	system("cls");
//	cout << "==========================================================================\n";
//	cout << "                             Main Menu Screen                             \n";
//	cout << "==========================================================================\n";
//	cout << "                             [1] show client List.\n";
//	cout << "                             [2] Add New client.\n";
//	cout << "                             [3] Delete client.\n";
//	cout << "                             [4] Update Client Info.\n";
//	cout << "                             [5] find Client.\n";
//	cout << "                             [6] Exit.\n";
//	cout << "==========================================================================\n";
//	enMainMenu choice = (enMainMenu)Inputs::readNumberInRange("please enter the number between [1 and 6]?", 1, 6);
//	performMainMenu(choice);
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
//void printClientsFromFile(stClientData client)
//{
//	cout << "| " << left << setw(15) << client.AccountNumber;
//	cout << "| " << left << setw(10) << client.pinCode;
//	cout << "| " << left << setw(40) << client.name;
//	cout << "| " << left << setw(12) << client.phone;
//	cout << "| " << left << setw(12) << client.AccountBalance;
//	cout << endl;
//}
//void printClient(stClientData client)
//{
//	cout << "the following are the client details\n";
//	cout << "----------------------------------------------\n";
//	cout << "Account Number:" << client.AccountNumber << "\n";
//	cout << "pin code:" << client.pinCode << "\n";
//	cout << "name:" << client.name << "\n";
//	cout << "phone:" << client.phone << "\n";
//	cout << "Account Balance:" << client.AccountBalance << "\n";
//	cout << "----------------------------------------------\n";
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
//void showClients()
//{
//	vector<stClientData> clients = loadDataFromFileToVector(clientsFileName);
//	if (clients.size() == 0)
//	{
//		cout << "no clients avaliable in the system\n";
//	}
//	cout << "\t\t\t\t\tClient List (" << clients.size() << ") client(s)\n";
//	cout << "______________________________________________________________________________________________________\n\n";
//	cout << "| " << left << setw(15) << "AccountNumber";
//	cout << "| " << left << setw(10) << "pinCode";
//	cout << "| " << left << setw(40) << "client name";
//	cout << "| " << left << setw(12) << "phone";
//	cout << "| " << left << setw(12) << "Account balance";
//	cout << "\n______________________________________________________________________________________________________\n\n";
//	for (const stClientData& client : clients)
//	{
//		printClientsFromFile(client);
//	}
//	cout << "\n______________________________________________________________________________________________________\n";
//}
//stClientData readClient()
//{
//	stClientData client;
//	cout << "Enter Account Number?";
//	getline(cin>>ws,client.AccountNumber);
//	while (findClientByAccountNumber(client.AccountNumber, clientsFileName))
//	{
//		cout << "Client with[" << client.AccountNumber << "]is already existed,Enter Anthor Account Number?";
//		getline(cin >> ws, client.AccountNumber);
//	}
//	cout << "Enter pinCode?";
//	getline(cin, client.pinCode);
//	cout << "Enter the name?";
//	getline(cin, client.name);
//	cout << "Enter the phone?";
//	getline(cin, client.phone);
//	cout << "Enter Account Balance?";
//	cin >> client.AccountBalance;
//	return client;
//}
//stClientData readClient(string AccountNumber)
//{
//	stClientData client;
//	client.AccountNumber = AccountNumber;
//	cout << "Enter pinCode?";
//	getline(cin>>ws,client.pinCode);
//	cout << "Enter the name?";
//	getline(cin, client.name);
//	cout << "Enter the phone?";
//	getline(cin,client.phone);
//	cout << "Enter Account Balance?";
//	cin>>client.AccountBalance;
//	return client;
//}
//string convertRecordToLine(stClientData client, string delim = ",")
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
//	client = readClient();
//	convertDataLineTofile(clientsFileName, convertRecordToLine(client, "#//#"));
//}
//void addCilentsToFile()
//{
//	char yesOrNo;
//	do
//	{
//		cout << "add new cilent:\n";
//		addClient();
//		cout << "clients added successfully do you want to add more clients [y]:yes [n]:no: ";
//		cin >> yesOrNo;
//		if (toupper(yesOrNo) != 'Y')
//		{
//			break;
//		}
//	} while (toupper(yesOrNo) == 'Y');
//}
//void savevectorTofile(string fileName, vector<stClientData>& clients)
//{
//	fstream myfile;
//	myfile.open(fileName, ios::out);
//	if (myfile.is_open())
//	{
//		for (stClientData& client : clients)
//		{
//			if (client.markForDelete == false)
//			{
//				myfile << convertRecordToLine(client, "#//#") << endl;
//			}
//		}
//		myfile.close();
//	}
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
//	for (stClientData& client : clients)
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
//	if (findClientByAccountNumber(AccountNumber, client, clients))
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
//		cout << "client with account Number " << AccountNumber << " not found!\n";
//	}
//}
//void updateCilentByAccountNumber(string AccountNumber, vector<stClientData>& clients)
//{
//	stClientData client;
//	if (findClientByAccountNumber(AccountNumber, client, clients))
//	{
//		printClient(client);
//		char yesOrNo;
//		cout << "do you want to update this client [y]:yes [n]:no:";
//		cin >> yesOrNo;
//		if (toupper(yesOrNo) == 'Y')
//		{
//			for (stClientData& oldDataClient : clients)
//			{
//				if (oldDataClient.AccountNumber == AccountNumber)
//				{
//					oldDataClient = readClient(AccountNumber);
//					break;
//				}
//			}
//			savevectorTofile(clientsFileName, clients);
//			cout << "client updated successfully\n";
//		}
//	}
//	else
//	{
//		cout << "client with account Number " << AccountNumber << " not found!\n";
//	}
//}
//
//void showAddClientsScreen()
//{
//	cout << "--------------------------------------------------------------------------\n";
//	cout << "                             Add new Clients Screen                       \n";
//	cout << "--------------------------------------------------------------------------\n";
//	addCilentsToFile();
//}
//void deleteClientScreen()
//{
//	cout << "--------------------------------------------------------------------------\n";
//	cout << "                             delete Client Screen                         \n";
//	cout << "--------------------------------------------------------------------------\n";
//	vector<stClientData>clients = loadDataFromFileToVector(clientsFileName);
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	string accountNumber = Inputs::readString("please enter the account number:");
//	deleteCilentByAccountNumber(accountNumber, clients);
//
//}
//void updateClientScreenInfo()
//{
//	cout << "--------------------------------------------------------------------------\n";
//	cout << "                             update Client Screen                         \n";
//	cout << "--------------------------------------------------------------------------\n";
//	vector<stClientData>clients = loadDataFromFileToVector(clientsFileName);
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	string accountNumber = Inputs::readString("please enter the account number:");
//	updateCilentByAccountNumber(accountNumber, clients);
//}
//void findClientScreen()
//{
//	cout << "--------------------------------------------------------------------------\n";
//	cout << "                              find Client Screen                          \n";
//	cout << "--------------------------------------------------------------------------\n";
//	stClientData client;
//	vector<stClientData>clients = loadDataFromFileToVector(clientsFileName);
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	string accountNumber = Inputs::readString("please enter the account number:");
//	if (findClientByAccountNumber(accountNumber, client, clients))
//	{
//		printClient(client);
//	}
//	else
//	{
//		cout << "client with account Number " << accountNumber << " not found!\n";
//	}
//
//}
//void endScreen()
//{
//	cout << "--------------------------------------------------------------------------\n";
//	cout << "                              program ends screen:-)                      \n";
//	cout << "--------------------------------------------------------------------------\n";
//}
//void performMainMenu(enMainMenu mainMenuOption)
//{
//	switch (mainMenuOption)
//	{
//	case enMainMenu::SHOWCLIENT:
//		system("cls");
//		showClients();
//		GoBackToMainMenu();
//		break;
//	case enMainMenu::ADDCLIENT:
//		system("cls");
//		showAddClientsScreen();
//		GoBackToMainMenu();
//		break;
//	case enMainMenu::DELETECLIENT:
//		system("cls");
//		deleteClientScreen();
//		GoBackToMainMenu();
//		break;
//	case enMainMenu::UPDATECLIENT:
//		system("cls");
//		updateClientScreenInfo();
//		GoBackToMainMenu();
//		break;
//	case enMainMenu::FINDCLIENT:
//		system("cls");
//		findClientScreen();
//		GoBackToMainMenu();
//		break;
//	case enMainMenu::EXIT:
//		system("cls");
//		endScreen();
//		break;
//	}
//}
//int main()
//{
//	showMainMenuScreen();
//}