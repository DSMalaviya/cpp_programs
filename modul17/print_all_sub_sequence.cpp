#include<iostream>
using namespace std;

void print_substr(char arr[],string output){
	if(arr[0]=='\0'){
		cout<<output<<endl;
		return;
	}
	
	//exclude
	print_substr(arr+1,output);
	//include
	print_substr(arr+1,output+arr[0]);
}

void print_substr2(string input,string output){
	if(input.length()==0){
		cout<<output<<endl;
		return;
	}
	
	//exclude
	print_substr2(input.substr(1),output);
	
	//include
	print_substr2(input.substr(1),output+input[0]);
}

int main(){
	print_substr2("abc","");
	return 0;
}
