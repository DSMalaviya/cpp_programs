#include<iostream>
using namespace std;

int firstIndex(int a[],int n,int index,int element){
	if(index==n){
		return -1;
	}
	
	if(a[index]==element){
		return index;
	}
	
	return firstIndex(a,n,index+1,element);
}

int main(){
	int a[6]={1,2,2,3,4,2};
	cout<<firstIndex(a,6,0,20);
	return 0;
}
