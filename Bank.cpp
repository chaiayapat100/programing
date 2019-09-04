#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	void update_balance(int command,float dollar,float &balance);
	float balance = 10000,dollar;
	int command;
	cout<<"========================\n"<<endl;
	cout<<"You balance = 10,000.00\n"<<endl;
	cout<<"========================\n"<<endl;
	do{
	cout<<"Exit with 0"<<endl;
	cout<<"input command (1 or witch, 2 depost): ";
	cin>>command;
	cout<<"input amount : ";
	cin>>dollar;
	update_balance(command ,dollar,balance);
	}while(command!=0);
	return (0);
}
void update_balance(int command,float dollar ,float &balance)
{
	balance;
	if(command == 1)
	{
		balance=balance-dollar;
		cout<<"You balance : "<<fixed<<setprecision(2)<< balance <<endl;
	}
	else if (command == 2)
	{
		balance=balance+dollar;
		cout<<"You balance :  "<<fixed<<setprecision(2)<<balance<<endl;
	}
}