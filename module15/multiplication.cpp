#include<bits/stdc++.h>
using namespace std;

int multiply(int m,int n){   //calculate m*n
	//base
	if(n==0){
		return 0;
	}
	
	//recursive 
	int smallans=multiply(m,n-1);  //m * n-1
	
	//calculation
	return smallans+m;	
	
}

int main(){
	cout<<multiply(3,5)<<endl;
	return 0;
}
