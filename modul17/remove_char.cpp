#include<iostream>
using namespace std;

void removeChar(char arr[]){
	if(arr[0]=='\0'){
		return;
	}
	
	if(arr[0]=='a'){
		for(int i=0;arr[i]!='\0';i++){
			arr[i]=arr[i+1];
		}
			removeChar(arr);
	}else{
		removeChar(arr+1);
	}
}

int main(){
	char arr[100];
	cin>>arr;
	removeChar(arr);
	cout<<arr;
	return 0;
}
