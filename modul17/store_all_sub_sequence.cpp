#include<iostream>
#include<vector>
using namespace std;

void store_all_sub_sequence(string input,string output,vector<string> &v){
	if(input.length()==0){
		v.push_back(output);
		return;
	}
	
	//include
	store_all_sub_sequence(input.substr(1),output+input[0],v);
	
	//exclude
	store_all_sub_sequence(input.substr(1),output,v);
}

int main(){
	vector<string> v;
	string input;
	cin>>input;
	store_all_sub_sequence(input,"",v);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<endl;
	}
	return 0;
}
