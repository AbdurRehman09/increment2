//#include<iostream>
//#include<fstream>
//#include<string>
//#include<cstring>
//using namespace std;
//int main()
//{
//	ifstream fin;
//	ofstream fout;
//	fin.open("billinginfo1(2).txt");
//	string ptr[3][12] = {};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			fin >> ptr[i][j];
//		}
//	}
//	fin.open("customerfile.txt");
//	string ptr1[3][10] = {};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			fin >> ptr1[i][j];
//		}
//	}
//	int flag = 0;
//	cout << "Enter 1 if you have any offline complain:";
//	cin >> flag;
//	for (int i = 0; i < 3; i++)
//	{
//		if (flag == 1)
//		{
//			if (ptr[i][11] == "paid")
//			{
//				ptr[i][11] = "unpaid";
//			}
//			fout.open("customerfile.txt");
//			{
//				cout << "Hello";
//				/*string unit1 = ptr1[i][8];
//				string unit2=ptr1[i][9];
//				int c1 = stoi(unit1);
//				int c2 = stoi(unit2);
//				c1 = c1 + c2;
//				string total_units = to_string(c1);
//				ptr[i][8] = total_units;*/
//				cout << ptr[i][8];
//
//			}
//
//		}
//
//
//	}
//}
//	