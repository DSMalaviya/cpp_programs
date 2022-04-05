#include<iostream>

using namespace std;

class Student{
    int age;
public:
    string name;
    int rollNumber;

public:
   void display(){
       cout<<"age is "<< age <<"roll num is "<<rollNumber<<endl;
    }    

    int getAge(){
        return age;
    }

    void setAge(int a){
        age=a;
    }
};