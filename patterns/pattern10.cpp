#include<iostream>
using namespace std;

int main(){
	int num=65;
	int n;
	cin>>n;
	for(int row =1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<char(num+col-1);
		}
		cout<<endl;
	}
}
