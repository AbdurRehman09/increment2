//#include<iostream>
//#include<fstream>
//#include<string>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	srand(time(0));
//	//each row represents 1 customers whole detail
//	//and we are starting with 3 customers
//	ofstream fout;
//	fout.open("customerfile.txt");
//	if (!fout)
//	{
//		cout << "Not opened";
//	}
//	/*string arr[3][10] = {};*/
//	int random=1000;
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			cin >> arr[i][j];
//			cout<<",";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		random = (rand() % 9999)+1;
//		if (random <= 999)
//		{
//			random = random + 1000;
//		}
//		string str = to_string(random);
//		arr[i][0] = str;
//		fout << arr[i][0];
//		fout << ",";
//		for (int j = 1; j < 10; j++)
//		{
//			fout << arr[i][j] << ",";
//		}
//		fout << endl;
//	}*/
//	bool ask = 0;
//	cout << "Enter if you want to add new customer";
//	cin >> ask;
//	if (ask == 1)
//	{
//		int rn;
//		string arr1[10] = {};
//		rn = (rand() % 9999) + 1;
//		if (rn <= 999)
//		{
//			rn = random + 1000;
//		}
//		string str1 = to_string(rn);
//		arr1[0] = str1;
//		for (int i = 1; i < 10; i++)
//		{
//			cin >> arr1[i];
//			fout << arr1[i] << ",";
//		}
//		cout << endl;
//
//	}
//	/*bool paid = 0;
//	int Cno_ = 0;
//	cout << "Enter the customers no. you want to deal with";
//	cin >> Cno_;
//	int count = Cno_;
//	if (count > 2)
//		cout << "Enter within 0-2";
//	else if (count == 0)
//	{ 
//		string previous_units = 0;
//		string  units = arr[count][8];
//		string generating_units = previous_units + units;
//		cout << "Enter 1  if customer has paid the bill if  not then 0";
//		cin >> paid;
//		if (paid)
//		{
//			string a = 0;
//			arr[count][8] = a;
//		}
//		else
//		{
//			arr[count][8] = generating_units;
//		}
//	}
//	else if (count == 1)
//	{
//		string previous_units = 0;
//		string  units = arr[count][8];
//		string generating_units = previous_units + units;
//		cout << "Enter 1  if customer has paid the bill if  not then 0";
//		cin >> paid;
//		if (paid)
//		{
//			string a = 0;
//			arr[count][8] = a;
//		}
//		else
//		{
//			arr[count][8] = generating_units;
//		}
//	}
//	else if (count == 2)
//	{
//		string previous_units = 0;
//		string  units = arr[count][8];
//		string generating_units = previous_units + units;
//		cout << "Enter 1  if customer has paid the bill if  not then 0";
//		cin >> paid;
//		if (paid)
//		{
//			string a = 0;
//			arr[count][8] = a;
//		}
//		else
//		{
//			arr[count][8] = generating_units;
//		}
//	}
//	
//	return 0;*/
//}