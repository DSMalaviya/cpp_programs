#include<iostream>

using namespace std;

int getLength(char arr[]){
	if(arr[0]=='\0'){
		return 0;
	}
	
	return 1+getLength(arr+1);
}

int main(){
	char  input[100];
	cin>>input;
	cout<<getLength(input);
	return 0;
}
