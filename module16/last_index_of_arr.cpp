#include<iostream>
using namespace std;

int findLastIndex(int a[],int n,int x,int i){
	if(i==-1){
		return -1;
	}
	
	if(a[i]==x){
		return i;
	}
	
	return findLastIndex(a,n,x,i-1);
}

int findLastIndex2(int a[],int n,int x){
	if(n-1 == -1){
		return -1;
	}
	
	if(a[n-1]==x){
		return n-1;
	}
	
	return findLastIndex2(a,n-1,x);
}

int findLastIndex3(int a[],int n,int x,int i){
	if(i==n){
		return -1;
	}
	
	int index=findLastIndex3(a,n,x,i+1);
	
	if(index==-1){
		if(a[i]==x){
			return i;
		}
		return -1;
	}else{
		return index;
	}
}

int main(){
	int arr[10]={1,2,3,4,6,7,8,4,5,3};
	 
//	 int index=findLastIndex(arr,10,4,9);
//	 int index=findLastIndex2(arr,10,10);
	 	 int index=findLastIndex3(arr,10,4,0);
	 	 
	 if(index==-1){
	 	cout<<"not found";
	 }else{
	 	cout<<"found at "<<index;
	 }
}
