#include<bits/stdc++.h>
using namespace std;

int binerySearch(int a[],int n,int key){
	int start=0,end=n-1;
	
	
	while(start<=end){
		
//		int mid=(start+end)/2;
int mid=start+(end-start)/2;
		if(a[mid]==key){
			return mid;
		}else if(a[mid]>key){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	
	return -1;
}

int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	//sort array
	sort(a,a+n);
	
	cout<<"Enter key :"<<endl;
	int key;
	cin>>key;
	int index=binerySearch(a,n,key);
	
	if(index==-1){
		cout<<"not found"<<endl;
	}else{
		cout<<"found at index "<<index<<endl;
	}
}
