#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	for(int row=1;row<=n;row++){
		for(int col=n;col>row;col--){
			cout<<"  ";
		}
		
		int start=row;
		for(int num=0;num<row;num++){
			cout<<start+num<<" ";
		}
		
		for(int num=1;num<row;num++){
			cout<<(start+row-1)-num<<" ";
		}
		cout<<endl;
	}
}
