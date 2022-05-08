#include<iostream>
#include "student_class.cpp"
using namespace std;



int main(){

Student s1(10,100);
cout<<"s1 :";
s1.display();

Student s2(s1);
cout<<"s2 :";
s2.display();

Student *s3=new Student(20,2000);
cout<<"s3 : ";
s3->display();

Student s4(*s3);
Student *s5=new Student(*s3);
Student *s6=new Student(s1);
	
	return 0;
} 
