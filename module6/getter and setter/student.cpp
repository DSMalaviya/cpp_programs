#include<iostream>
#include "student_class.cpp"
using namespace std;



int main(){
	//statically
	Student s1;
	Student s2;
	Student s3,s4,s5;
	
	
	//creating objects dynamically;
	Student *s6=new Student;
	
	//s1.age=24;
	s1.setAge(23);
	s1.rollNumber=100;
	
	
cout<<"s1 age"<<s1.getAge()	<<endl;
s1.display();
	
	
//	(*s6).age=55;
	(*s6).rollNumber=12;
	
//	s6->age=55;
	s6->setAge(20);
	s6->rollNumber=12;
	
	cout<<"s6 age"<<s6->getAge()<<endl;
	s6->display();
	
	
	return 0;
}
