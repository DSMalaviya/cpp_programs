#include<iostream>
using namespace std;

int count(int arr[],int n,int x,int i){
	if(i==n){
		return 0;
	}
	
	if(arr[i]==x){
		return 1+count(arr,n,x,i+1);
	}else{
		return count(arr,n,x,i+1);
	}
}

int main(){
	int arr[10]={4,6,7,5,6,5,5,3,4,6};
	cout<<count(arr,10,5,0);
	return 0;
}
