#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//void add_customer()
//{  
//	int size1 = 20;
//	int cnic1 = 2023456789012;
//	ifstream fin;
//	fin.open("CustomerInfo(1).txt");
//	char comma=',';
//	int id[6];
//	int cnic[20];
//	string name[20];
//	string address[10];
//	string phonenumber[12];
//	string usertype[20];
//	string phasetype[20];
//	string connectiondate[11];
//	int regular_units[10];
//	int peak_hour_units[10];
//	char data[3][100];
//	for (int i = 0; i < 3; i++)
//	{
//		fin.getline(data[i],100);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		cout<<data[i]<<endl;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		fin >> id[i];
//		cout << id[i];
//		
//	}
//	for (int i = 23; i < 28; i++)
//	{
//			fin >> name[i];
//	}
//	cout<< name;
//		/*fin >> comma;
//		fin >> name[i];
//		fin >> comma;
//		fin >> address[i];
//		fin >> comma;
//		fin >> phonenumber[i];
//		fin >> comma;
//		fin >> usertype[i];
//		fin >> comma;
//		fin >> phasetype[i];
//		fin >> comma;
//		fin >> connectiondate[i];
//		fin >> comma;
//		fin >> regular_units[i];
//		fin >> comma;
//		fin >> peak_hour_units[i];*/
//	
//	// take information of new customers
//	cout << endl << "Enter the name of the customer " << endl;
//	cin >> name[size1];
//	/*cout << endl << "Enter the address of the customer " << endl;
//	cin >> address[size1];
//	cout << endl << "Enter the phone number of the customer " << endl;
//	cin >> phonenumber[size1];
//	cout << endl << "Enter the usertype of the customer domestic/commercial" << endl;
//	cin >> usertype[size1];
//	cout << endl << "Enter the phasetype of the customer sphase/tphase" << endl;
//	cin >> phasetype[size1];
//	cout << endl << "Enter the date of connection of the customer " << endl;
//	cin >> connectiondate[size1];
//	cout << endl << "Enter the regular units consumed of the customer " << endl;
//	cin >> regular_units[size1];
//	cout << endl << "Enter the peak hour units of the customer " << endl;
//	cin >> peak_hour_units[size1];
//	cnic[size1] = cnic1;*/
//	id[size1] = (rand() % 9999) + 1000;
//	fin.close();
//	// store in file //
//	ofstream fout;
//	fout.open("text.txt");
//	for (int i = 0; i <= size1; i++)
//	{
//		fout << id[i] << " ";
//		fout << comma << " ";
//		fout << cnic[i] << " ";
//		fout << comma << " ";
//		fout << name[i] << " ";
//		fout << comma << " ";
//		fout << address[i] << " ";
//		fout << comma << " ";
//		fout << phonenumber[i] << " ";
//		fout << comma << " ";
//		fout << usertype[i] << " ";
//		fout << comma << " ";
//		fout << phasetype[i] << " ";
//		fout << comma << " ";
//		fout << connectiondate[i] << " ";
//		fout << comma << " ";
//		fout << regular_units[i] << " ";
//		fout << comma << " ";
//		fout << peak_hour_units[i] << " ";
//		fout << comma << " ";
//
//	}
//	fout.close();
//}
//int main()
//{
//		add_customer();
//}
void input_for_customer_info() {
	//ofstream fout;
	//fout.open("CustomerInfo.txt", ios::app);
	//if (!fout)
	//	clog << "File CustomerInfo is not opened for taking input\n";
	// int id = generate_random_id();
	//	int id = 5567;
	//fout << id << ',';
	//char input[30];
	//cout << "Enter your cnic(must be without dashes): ";
	//cin.getline(input, 30);
	//int i = 0;
	//bool input_correct = false;
	//while (!input_correct) { // loop to verify that cnic is without dashes.
	//	while (input[i] != '\0') {
	//		if (input[i++] == '-') {
	//			cout << "Cnic must be without dashes\n";
	//			cout << "Please enter cnic again: ";
	//			cin.getline(input, 30);
	//			input_correct = false;
	//			break;
	//		}
	//		else
	//			input_correct = true;
	//	}
	//}
	//fout << input << ',';
	//cout << "Enter name of customer: ";
	//cin.getline(input, 30);
	//fout << input << ',';
	//cout << "Enter adress of customer: ";
	//cin.getline(input, 30);
	//fout << input << ',';
	//cout << "Enter phone no. of customer: ";
	//cin.getline(input, 30);
	//fout << input << ',';
	//cout << "Enter type of customer(domestic or commercial): ";
	//cin.getline(input, 30);
	//fout << input << ',';
	//cout << "Enter meter type(1-phase or 3-phase): ";
	//cin.getline(input, 30);
	//fout << input << ',';
	//cout << "Enter date\n";
	//cout << "Enter day(numeric format DD): ";
	//cin.getline(input, 3);
	//fout << input << '/';
	//cout << "Enter month(numeric format MM): ";
	//cin.getline(input, 3);
	//fout << input << '/';
	//cout << "Enter day(numeric): ";
	//cin.getline(input, 5);
	//fout << input << ',';
	//fout << "0, " << endl;
	///*cout << "Enter regular units consumed: ";
	//cin.getline(input, 10);
	//fout << input << ',';
	//cout << "Enter peak units consumed: ";
	//cin.getline(input, 10);
	//fout << input << endl;*/
	//fout.close();
}