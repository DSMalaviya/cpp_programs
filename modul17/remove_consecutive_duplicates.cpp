#include<iostream>
using namespace std;

void remove_consecutive_duplicates(char arr[]){
	if(arr[0]=='\0'){
		return;
	}
	
	if(arr[0]==arr[1]){
		for(int i=0;arr[i]!='\0';i++){
			arr[i]=arr[i+1];
		}
		remove_consecutive_duplicates(arr);
	}else{
		remove_consecutive_duplicates(arr+1);
	}
}

int main(){
	char arr[100];
	cin>>arr;
	remove_consecutive_duplicates(arr);
	cout<<arr;
	return 0;
}
