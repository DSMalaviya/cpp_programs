#include<iostream>
#include "student_class.cpp"
using namespace std;



int main(){
Student s1;
s1.display();

Student s2;
s2.display();

Student *s3=new Student;
s3->display();

Student s4(10);
	s4.display();
	
	Student *s5=new Student(10);
	s5->display();
	
	return 0;
}
