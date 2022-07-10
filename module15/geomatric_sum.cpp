#include<bits/stdc++.h>
using namespace std;

double gsum(int k){
	//base case
	if(k==0){
		return 1;
	}
	
	//recursive case
	double smallAns=gsum(k-1);
	
	//calculation  -->1.0 to get ans in double
	return smallAns+(1.0/pow(2,k));
}

int main(){
	cout<<gsum(3)<<endl;
	return 0;
}

