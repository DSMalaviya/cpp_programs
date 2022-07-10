#include<bits/stdc++.h>

using namespace std;

int countZeros(int n){
	//base
	if(n==0){
		return 0;
	}
	
	//recursive
	int smallans=countZeros(n/10);
	
	//calculation
	int lastdigit=n%10;
	if(lastdigit==0){
		return 1+smallans;
	}else{
		return smallans;
	}
}

int main(){
	cout<<countZeros(1050670)<<endl;
	return 0;
}
