#include<bits/stdc++.h>

using namespace std;

void print(int n){
	//base case
	if(n==0){
		return;
	}
	
	//recursive case
	print(n-1);  //1 to n-1 print
	
	cout<<n<<endl;
}

void print2(int n){
	//base case
	if(n==0){
		return;
	}
	
	cout<<n<<endl;
	
	print2(n-1);
}

int main(){
	int n;
	cin>>n;
	print(n);
	cout<<endl;
	print2(n);
	return 0;
}
