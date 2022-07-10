#include<bits/stdc++.h>

using namespace std;

int count(int n){
	if(n==0){
		return 0;
	}
	
	//recuresive case
	int lastoutput=count(n/10);
	
	return lastoutput+(n%10);
}

int main(){
	cout<<count(1234);
	return 0;
}
