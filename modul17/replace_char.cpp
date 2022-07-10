#include<iostream>
using namespace std;

void replaceChar(char arr[],char c,char r){
	if(arr[0]=='\0'){
		return;
	}
	
	if(arr[0]==c){
		arr[0]=r;
	}
	
	replaceChar(arr+1,c,r);
}

int main(){
	char input[100];
	
	cin>>input;
	
	replaceChar(input,'a','d');
	cout<<input<<endl;
	return 0;
}
