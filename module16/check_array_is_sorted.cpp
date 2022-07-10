#include<iostream>
using namespace std;

bool isSorted(int a[],int n){
	if(n==0 || n==1){
		return true;
	}
	
	if(a[0]>a[1]){
		return false;
	}
	
	
	//a+1  -->pointer at a[1]
	bool isSmallerArraySorted=isSorted(a+1,n-1);
	
//	if(isSmallerArraySorted){
//		return true;
//	}else{
//		return false;
//	}

    return isSmallerArraySorted;
}

bool isSorted2(int a[],int n){
	if(n==0||n==1){
		return true;
	}
	
	bool isSmallerArrayisSorted=isSorted(a+1,n-1);
	
	if(!isSmallerArrayisSorted){
		return false;
	}
	
	if(a[0]>a[1]){
		return false;
	}else{
		return true;
	}
}

bool isSorted3(int a[],int n){
	if(n==0||n==1){
		return true;
	}
	
	if(a[n-2]>a[n-1]){
		return false;
	}
	
	return isSorted(a,n-1);
}

int main(){
	int a[]={1,2,3,4,5};
	if(isSorted3(a,5)){
		cout<<"sorted";
	}else{
		cout<<"not sorted";
	}
	
	return 0;
}
