#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int number=1;
	for(int col=1;col<=n;col++){		
		for(int row=1;row<=col;row++){
			cout<<number<<" ";
			number++;
		}
		cout<<endl;
	}
}
