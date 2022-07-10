#include<iostream>
using namespace std;

void count_occurence(int arr[],int n,int x,int i,int &count){
	if(n==i){
		return;
	}
	
	if(arr[i]==x){
		count++;
	}
	
	count_occurence(arr,n,x,i+1,count);
}

int main(){
	int count=0;
	int arr[10]={2,4,5,5,6,7,8,9,2,1};
	count_occurence(arr,10,5,0,count);
	cout<<count<<endl;
}
