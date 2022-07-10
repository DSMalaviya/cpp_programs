#include<iostream>

using namespace std;

void print(char arr[]){
	if(arr[0]=='\0'){
		return;
	}
	
	cout<<arr[0];
	print(arr+1);
}

void revPrint(char arr[]){
	if(arr[0]=='\0'){
		return;
	}
	
	revPrint(arr+1);
	cout<<arr[0];
}

int main(){
	char arr[]="abc";
	print(arr);
	cout<<endl;
	revPrint(arr);
}
