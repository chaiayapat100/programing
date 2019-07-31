#include <iostream>
#include <string>
using namespace std;
int main(){
	string name,name1;
	int pass,pass1;
	char menu,Q;
	do{
	cout<<"//////////Menu//////////"<<endl;
	cout<<"1.Register"<<endl;
	cout<<"2.Login"<<endl;
	cout<<"Q.Exit Program"<<endl;
	cout<<"Enter Menu ";
	cin>>menu;
	if(menu=='1'){
		cout<<"********Register********"<<endl;
		cout<<"Input Username :";
		cin>>name;
		cout<<"Input Password :";
		cin>>pass;
	}
	if(menu=='2'){
		do{
			cout<<"********Login********"<<endl;
			cout<<"Input Username :";
			cin>>name1;
			cout<<"Input Password :";
			cin>>pass1;
			if(name1==name && pass1==pass){
				cout<<"Username or Password correct ^___^ "<<endl;
			}
			else if(name1!=name || pass1!=pass){
				cout<<"Username or Password incorrect Please try again!!!"<<endl;
			}
		}while(name1!=name || pass1 !=pass);
		}
	}while(menu!='Q');
	cout<<"Exit Program..."<<endl;
	return(0);
}