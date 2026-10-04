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
//	float AccountBalance;
//};
//stClientData readCilent()
//{
//	stClientData cilent;
//	cout << "Enter Account Number?";
//	cin >> cilent.AccountNumber;
//	cout << "Enter pinCode?";
//	cin >> cilent.pinCode;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cout << "Enter the name?";
//	getline(cin,cilent.name);
//	cout << "Enter the phone?";
//	cin >> cilent.phone;
//	cout << "Enter Account Balance?";
//	cin >> cilent.AccountBalance;
//	return cilent;
//}
//string cilentRecord(stClientData client, string delim = ",")
//{
//	return client.AccountNumber + delim + client.pinCode + delim + client.name + delim + client.phone + delim + to_string(client.AccountBalance);
//}
//int main()
//{
//	stClientData clientData=readCilent();
//	cout << "client record for saving is\n";
//	cout << cilentRecord(clientData, "#//#");
//}