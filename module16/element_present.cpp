#include<iostream>

using namespace std;

bool isPresent(int a[],int n,int element){
	if(n==0){
		return false;
	}
	
	if(a[0]==element){
		return true;
	}
	
	return isPresent(a+1,n-1,element);
}

bool isPresent2(int a[],int n,int element){
	if(n==0){
		return false;
	}
	
	if(a[n-1]==element){
		return true;
	}
	
	return isPresent2(a,n-1,element);
}

bool isPresent3(int a[],int n,int element,int i){
	if(n==i){
		return 0;
	}
	
	if(a[i]==element){
		return true;
	}
	
	return isPresent3(a,n,element,i+1);
}

int main(){
	int a[6]={1,2,3,4,5,6};
	if(isPresent2(a,6,300)){
		cout<<"present";
	}else{
		cout<<"not present";
	}
	return 0;
}
