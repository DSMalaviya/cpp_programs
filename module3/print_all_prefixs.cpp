#include<iostream>
#include<cstring>

using namespace std;

void printAllprefixes(char str[]){
	for(int i=0;str[i]!='\0';i++){
		for(int j=0;j<=i;j++){
			cout<<str[j];
		}
		cout<<endl;
	}
}

int main(){
	char str1[100]="darshan";
	printAllprefixes(str1);
	return 0;
}
