#include<bits/stdc++.h>
using namespace std;

int febonaci(int n){
	if(n==0){
		return 0;
	}
	
	if(n==1){
		return 1;
	}
	
	int previous1=febonaci(n-1);
	int previous2=febonaci(n-2);
	
	return previous1 + previous2;
}

int main(){
	int n;
	cout<<"enter any number to calculate feb :";
	cin>>n;
	cout<<"output is : "<<febonaci(n)<<endl;
	return 0;
}
