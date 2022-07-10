#include<iostream>

using namespace std;

bool checkPel(int arr[],int s,int e){
	if(s>e){
		return true;
	}
	
	if(arr[s]==arr[e]){
		return checkPel(arr,s+1,e-1);
	}else{
		return false;
	}
}

int main(){
	
	int arr[5]={1,2,3,2,1};
	if(checkPel(arr,0,4)){
		cout<<"Pelidrome";
	}else{
		cout<<"not pelidrome";
	}
	return 0;
}
