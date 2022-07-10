#include<bits/stdc++.h>

using namespace std;

int power(int n,int p){
	if(p==0){
		return 1;
	}
	
	int previousOut=power(n,p-1);
	
	return n*previousOut;
}

int main(){
	int num,powerDig;
	cin>>num>>powerDig;
	cout<<"power is "<<power(num,powerDig);
}
