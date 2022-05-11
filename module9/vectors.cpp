#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> v; //static
	vector<int> *vp=new vector<int>(); //dynamic
	
	vector<int> v2(10,-2);
	for(int i=0;i<v2.size();i++){
		cout<<v2[i]<<endl;
	}
	
	for(int i=0;i<100;i++){
		v.push_back(i+1);
		cout<<  "size "<<v.size()<<" capacity "<<v.capacity()<<endl;
	}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	
//	v[1]=100;
//				
////	cout<<v[0]<<endl;
////	cout<<v[1]<<endl;
////	cout<<v[2]<<endl;	
//	
////	v[9000]=9;
//
////this is --> wrong		 never use [ ] to insert element in vector
////v[4]=900;
////v[5]=67;
//
//
//v.push_back(4);
//v.push_back(6);
//
////cout<<v.at(4)<<endl;  //at is safer compared to []
////cout<<v.at(6)<<endl;	
//
//v.pop_back();
//
//for(int i=0;i<v.size();i++){
//	cout<<v[i]<<endl;
//}
	
	
	 
	return 0;
}
