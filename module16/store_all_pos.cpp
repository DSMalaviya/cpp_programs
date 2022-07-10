#include<bits/stdc++.h>

using namespace std;

void storeAllpos(int arr[],int n,int x,int i,vector<int> &v){
	if(i==n){
		return;
	}
	
	if(arr[i]==x){
		v.push_back(i);
	}
	
	storeAllpos(arr,n,x,i+1,v);
}

int storeAllpos2(int arr[],int n,int x,int i,int out[],int j){
	if(i==n){
		return 0;
	}
	
	if(arr[i]==x){
		out[j]=i;
		j++;
    	return 1+storeAllpos2(arr,n,x,i+1,out,j);	
	}else{
		return storeAllpos2(arr,n,x,i+1,out,j);
	}	
}

int main(){
	vector<int> v;
	int arr[10]={1,2,3,4,4,2,1,4,5,4};
//	storeAllpos(arr,10,4,0,v);
//	
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<endl;
//	}
	
	int out[10];
	int size=storeAllpos2(arr,10,4,0,out,0);
	for(int i=0;i<size;i++){
		cout<<out[i]<<" ";
	}	
}
