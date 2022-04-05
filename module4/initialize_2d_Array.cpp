#include<iostream>

using namespace std;

void printArray(int a[][5],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int a[][5]={{1,3},{5,6}};
	
	//initialize array with zeros
	int b[][5]={{0}};
	printArray(a,2,5);
}
