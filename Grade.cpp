#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Enter score :";
	cin>>score;
	if ((score>=0)&&(score<=59)){
		cout<<"F";
	}
	else if ((score>=60)&&(score<=69)){
		cout<<"D";
	}
	else if ((score>=70)&&(score<=79)){
		cout<<"C";
	}
	else if ((score>=80)&&(score<=89)){
		cout<<"B";
	}
	else if ((score>=90)&&(score<=100)){
		cout<<"A";
	}
	else if (score>100){
		cout<<"ERROR";
	}
	cout<<endl;
	return(0);
}