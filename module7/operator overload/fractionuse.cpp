#include<iostream>
#include "fraction.cpp"

using namespace std;

int main(){
//Fraction f1(10,5);
//Fraction f2(23,15);
//	
//Fraction f3=f1.nadd(f2);
//
//Fraction f4=f1+f2;
//Fraction f5=f1*f2;
//
//f1.print();
//f2.print();
//f3.print();
//f4.print();
//f5.print();
//
//if(f1==f2){
//	cout<<"equal"<<endl;
//}else{
//	cout<<"not equal"<<endl;
//}

//Fraction f1(100,5);
//Fraction f3= ++ (++f1);
//f1.print();
//f3.print();
//cout<<&f1<<endl;
//cout<<&f3<<endl;

//Fraction f1(100,5);
//Fraction f3= f1++;
//f1.print();
//f3.print();

Fraction f1(12,5);
Fraction f2(23,6);

Fraction f3= (f1+=f2)+=f2;
f1.print();
f3.print();
f2.print();
	return 0;
}
