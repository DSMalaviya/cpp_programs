#include<iostream>
#include "student.cpp"

using namespace std;

int main(){
    //creating object statically
    Student s1;
    Student s2,s3,s4;

    //creating object dynamically
    Student *s5=new Student;

    //acess property of object
    s1.name="Demo";
    s1.rollNumber=27;

    cout<<s1.name<<endl;
    cout<<s1.rollNumber<<endl;

    s1.display();


    //
    // (*s5).name="Demo2";
    // (*s5).rollNumber=21;
    //alternate syntex
    s5->name="Demo2";
    s5->rollNumber=21;

    cout<<s5->name<<endl;
    cout<<s5->rollNumber<<endl;

    return 0;
}