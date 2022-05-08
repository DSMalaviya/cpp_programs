#include<iostream>
#include "student_class.cpp"
using namespace std;



int main(){
Student s1;  //constructor 1 called
Student s2(10);  //constructor 2 called
Student s3(10,100); //constructor 3 called
Student s4(s3);  //copy constructor called -->inbuild

s1=s2;  //copy assignment operator called

Student s5=s3;  //copy constructor called


return 0;
} 
