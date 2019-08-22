#include<iostream>
#include<iomanip>
using namespace std;
void checkNum(int,int);
int answer = 0;
int main()
{
	srand(time(0));
	int ran = rand()%10;
	int num;
	cout<<"### Welcome to guessing number game ###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	do{
	cout<<"Guess the number (1 to 10): ";
	cin>>num;
	checkNum(num,ran);
	answer = answer++;
	}while(num!=ran);
	
	cout<<"The secret number is "<< num <<endl;
	cout<<"You made "<< answer <<" guesses "<<endl;
	return (0);

}
void checkNum(int x,int y)
{
		if(x==y)
		{
			cout<<"Congratulations!."<<endl;
		}
		else if(x > y)
		{
			cout<<"The secret number is higher"<<endl;
		}
		else
			cout<<"The secret number is lower"<<endl;
}