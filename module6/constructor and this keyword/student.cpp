#include<iostream>
#include "student_class.cpp"
using namespace std;



int main(){

Student s1(10,100);
cout<<"Address of s1 "<<&s1<<endl;
	
Student s2(20,100);	
cout<<"Address of s2 "<<&s2<<endl;
	
	return 0;
} 
