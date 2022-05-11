#include<iostream>
using namespace std;

//arrays are pass by ref
void selectionSort(int a[],int n){
//	for(int i=0;i<=n-2;i++){
//		
//		int smallest=INT_MAX;
//		
//		for(int j=i+1;j<=n-1;j++){
//			if(a[j]<smallest){
//				smallest=a[j];
//			}
//		}
//		
//		if(a[i]>smallest){
//			swap(a[i],smallest);
//		}
//	}

for(int i=0;i<=n-2;i++){
	int smallest=i;
	for(int j=i+1;j<=n-1;j++){
		if(a[j]<a[smallest]){
			smallest=j;
		}
	}
	
	if(a[i]>a[smallest]){
		swap(a[i],a[smallest]);
	}	
}

}

int main(){
	
	int n;
	cin>>n;
	
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
	
	selectionSort(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
