//#include<iostream>
//#include<fstream>
//using namespace std;
//void generate_bills() 
//{
//	int* iddd = new int[4];
//	ifstream idread;
//	ofstream idwrite;
//	char commmmma;
//	int* curreentt = new int[4];
//	int* peeeaaakk = new int[4];
//	string* month = new string[4];
//	int* coe = new int[4];
//	int* tax = new int[4];
//	int* fixed = new int[4];
//	int* total = new int[4];
//	string* date = new string[4];
//	string* paymentdate = new string[4];
//	string* date2 = new string[4];
//	string* status = new string[4];
//	idread.open("billinginfo.txt");
//	for (int p = 0; p < size1; p++) {
//		idread >> iddd[p]; // ID
//		idread >> commmmma;
//		idread >> month[p]; //month
//		idread >> commmmma;
//		idread >> curreentt[p]; // reg
//		idread >> commmmma;
//		idread >> peeeaaakk[p]; // peak
//		idread >> commmmma;
//		idread >> date[p]; // date
//		idread >> commmmma;
//		idread >> coe[p]; // coe
//		idread >> commmmma;
//		idread >> tax[p]; // tax
//		idread >> commmmma;
//		idread >> fixed[p]; // fixed
//		idread >> commmmma;
//		idread >> total[p]; // total
//		idread >> commmmma;
//		idread >> date2[p]; // datte
//		idread >> commmmma;
//		idread >> status[p]; // status
//	}
//	idread.close();
//	int* prevregularunits = new int[4];
//	int* prevpeakunits = new int[4];
//	string wastee;
//	//.........................................................
//	idread.open("CustomerInfo.txt");
//	for (int p = 0; p < size1; p++) {
//		idread >> wastee; // ID
//		idread >> commmmma;
//		idread >> wastee; //cnic
//		idread >> commmmma;
//		idread >> wastee; // name
//		idread >> commmmma;
//		idread >> wastee; // address
//		idread >> commmmma;
//		idread >> wastee; // phone
//		idread >> commmmma;
//		idread >> wastee; // usertype
//		idread >> commmmma;
//		idread >> wastee; // metretypee
//		idread >> commmmma;
//		idread >> wastee; // datee
//		idread >> commmmma;
//		idread >> prevregularunits[p]; // reg
//		idread >> commmmma;
//		idread >> prevpeakunits[p]; // peak
//	}
//	for (int p = 0; p < size1; p++) {
//		coe[p] = ((curreentt[p] - prevregularunits[p]) * 18) + ((peeeaaakk[p] - prevpeakunits[p]) * 25);
//		tax[p] = (coe[p]) + (coe[p] * 20) / 100;
//		total[p] = coe[p] + tax[p] + fixed[p];
//	}
//	idread.close();
//
//	//.........................................................
//
//	idwrite.open("billinginfo.txt");
//	for (int p = 0; p < size1; p++) {
//		idwrite << iddd[p];
//		idwrite << " , ";
//		idwrite << month[p]; //month
//		idwrite << " , ";
//		idwrite << curreentt[p]; // reg
//		idwrite << " , ";
//		idwrite << peeeaaakk[p]; // peak
//		idwrite << " , ";
//		idwrite << date[p]; // date
//		idwrite << " , ";
//		idwrite << coe[p]; // coe
//		idwrite << " , ";
//		idwrite << tax[p]; // tax
//		idwrite << " , ";
//		idwrite << fixed[p]; // fixed
//		idwrite << " , ";
//		idwrite << total[p]; // total
//		idwrite << " , ";
//		idwrite << date2[p]; // datte
//		idwrite << " , ";
//		idwrite << status[p] << endl; // status
//	}
//	idwrite.close();
//}