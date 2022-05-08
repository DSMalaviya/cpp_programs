#include<iostream>
#include "student_class.cpp"
using namespace std;



int main(){

Student s1(10,100);
Student s2(20,200);

s2=s1;  //copy assignment opertaor

Student *s3=new Student(100,200);
*s3=s1;


//to delete dynamic memory allocataion manually
delete s3;
	
return 0;
} 
