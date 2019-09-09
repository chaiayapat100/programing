#include<iostream>
#include<string>
using namespace std;
void ListStudent(int number[40],string namestudent[40],int numberS[40]);
void Calgrade(int s);
int i;
int  main()
{
	int s[40],numberstudent[40];
	string name[40];
	cout<<"input Number of student : ";
	cin>>numberstudent[0];
	for(i = 0;i < numberstudent[0];i++)
	{
		cout<<"input Name : ";
		cin>>name[i];
		cout<<"input score "<< i+1 <<" : ";
		cin>>s[i];
		cout<<endl;
	}
	ListStudent(numberstudent,name,s);
	return (0);
}
void ListStudent(int nums[40],string namestudent[40],int numberS[40])
{
	for(i = 0;i < nums[0];i++)
	{
		cout<<"studen Name : "<< namestudent[i] <<" Score "<<i+1 <<" = "<<numberS[i];
		Calgrade(numberS[i]);
	}
}
void Calgrade(int s)
{
	if(s >= 50 && s <= 64)
	{
		cout<<" You grade is D "<<endl;
	}
	else if(s >= 65 && s <= 79)
	{
		cout<<" You grade is C "<<endl;
	}
	else if(s >= 80 && s <=89)
	{
		cout<<" You grade is B "<<endl;
	}
	else
	{
		cout<<" You grade is A "<<endl;
	}
}