#include<iostream>
using namespace std;

int convertStringToInt(char input[],int n){
if(n==0){
	return 0;
}

int previousOutput=convertStringToInt(input,n-1);

return previousOutput*10+(input[n-1]-'0');
}

int main(){
//	char stringInp[100];
//	cin>>stringInp;
	cout<<convertStringToInt("12345",5);
	return 0;
}
