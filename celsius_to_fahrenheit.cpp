#include <iostream>
using namespace std;
int main()
{
	float C ;
	cout<<"Enter Celsius temperature :";
	cin>>C;
	cout<<endl;
	float total = (1.8 * C) + 32;
	cout<<"Celsius to Fahrenheit = "<<total<<endl;
	cout<<endl;
	cout<<"Now weather in Thailand is ";
	cout<<(total>70 ?" HOT ":" COOL ")<<endl;
	cout<<endl;
	return(0);
}