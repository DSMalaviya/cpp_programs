#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int row=0;row<n;row++){
		for(int col2=0;col2<row;col2++){
			cout<<" ";
		}
		for(int col=n;col>row;col--){
			cout<<"*";
		}
		cout<<endl;
	}
}
