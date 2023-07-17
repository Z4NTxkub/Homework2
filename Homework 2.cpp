#include<iostream>
#include<string>
using namespace std;
int main()
{	string Name;
	float Salary;
	float Sale;
	float Commission;
	cout <<"Enter Name : ";
	cin >> Name;
	cout <<"Enter Salary : ";
	cin >> Salary;
	cout <<"Enter Sale : ";
	cin >> Sale;
	cout <<"Enter Commission Percent : ";
	cin >> Commission;
	cout <<"*******Output*******\n";
	cout <<"Commission Percent = "<<Salary+(Sale*(Commission/100))<<endl;
	system("pause");
	return(0);
}