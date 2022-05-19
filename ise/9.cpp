//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() 
//{
//	ifstream Cin;
//	ofstream Cout;
//	char get[90];
//	char id[5];
//	int customers_n = 0;
//	Cin.open("BillingInfo(2).txt", ios::in);
//	while (Cin.getline(get, 90))
//	{
//		customers_n++;
//	}
//	Cin.close();
//	char** list = NULL;
//	list = new char* [customers_n];
//	for (int i = 0; i < customers_n; i++)
//	{
//		list[i] = new char[90];
//	}
//	Cin.open("BillingInfo(2).txt", ios::in);
//	for (int i = 0; i < customers_n; i++)
//	{
//		Cin.getline(list[i], 90);
//	}
//	Cin.close();
//	bool flag = 0;
//	cout << "Enter customer Id: ";
//	while (true)
//	{
//		cin.getline(id, 5);
//		for (int i = 0; i < customers_n; i++)
//		{
//			if (list[i][0] == id[0])
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (list[i][j] != id[j])
//					{
//						flag = 0;
//						break;
//					}
//					else
//					{
//						flag = 1;
//					}
//				}
//			}
//		}
//		if (flag)
//		{
//				break;
//		}
//		else
//		{
//				cout << " Id not found." << endl;
//				cout << "Re-enter Id: ";
//		}
//	}
//	int m = 0;
//	for (int i = 0; i < customers_n; i++)
//	{
//		if (list[i][0] == id[0]) 
//		{
//			m = i;
//			break;
//		}
//	}
//	int p = 0;
//	cout << "Your  Bill is: ";
//	for (int i = 0; list[m][i] != '\0'; i++)
//	{
//		if (list[m][i] == ',')
//		{
//			p++;
//			if (p == 8)
//			{
//				for (int j = i + 1; list[m][j] != ','; j++) {
//					cout << list[m][j];
//				}
//			}
//		}
//	}
//	cout << endl;
//
//	return 0;
//}
