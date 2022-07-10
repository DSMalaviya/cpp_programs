//#include<iostream>
//#include<algorithm>

//alternative to include all header files in c++
#include<bits/stdc++.h>  //master header file
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
