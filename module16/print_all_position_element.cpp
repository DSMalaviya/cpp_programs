#include<bits/stdc++.h>

using namespace std;

void printAllPos(int arr[],int n,int x,int i){
	if(i==n){
		return ;
	}
	
	if(arr[i]==x){
		cout<<i<<" ";
	}
	
	printAllPos(arr,n,x,i+1);
}

int main(){
	int arr[10]={1,1,1,2,3,1,1,2,4,1};
	printAllPos(arr,10,1,0);
	return 0;
}
