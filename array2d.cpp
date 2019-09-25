#include <iostream>
#include <iomanip>
using namespace std;
void display(int x[5][6]);
void graph(int x[5][6]);
int main(){
	srand(time(NULL));
	int x[5][6];
	for(int n = 0 ; n < 5; n++){
		for(int i = 0 ; i < 6; i++){
			x[n][i] =  rand()%10;
		}
	}
	display(x);
	graph(x);
}

void display(int x[5][6]){
	for(int n = 0 ; n < 5; n++){
		for(int i = 0 ; i < 6; i++){
		cout << x[n][i] << "\t";
		}
		cout << endl;
	}
}
void graph(int x[5][6]){
	cout <<"-------------display graph---------------" << endl;
	cout <<" \t0\t1\t2\t3\t4\t5"<<endl;
	for(int n = 0 ; n < 5; n++){
		cout << n <<"|\t";
		for(int i = 0 ; i < 6; i++){
			if(x[n][i] == 0){
				cout << " \t";
			}else{
				cout << "*\t";
			}
			 
		}
		cout <<endl;
	}
}