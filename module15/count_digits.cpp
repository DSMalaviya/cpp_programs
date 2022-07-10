#include<bits/stdc++.h>

using namespace std;

int count(int number){
	//base case
	if(number==0){
		return 0;
	}
	
	//recursive
	int smallAns=count(number/10);
	
	//calculation
	return smallAns+1;
}

int main(){
	cout<<count(5687487);
	return 0;
}
