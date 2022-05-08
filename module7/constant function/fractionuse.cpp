#include<iostream>
#include "fraction.cpp"

using namespace std;

int main(){
Fraction f1(10,5);
Fraction f2(23,5);
	
Fraction const f3(20,40);
cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<endl;	

//f3.setNumerator(10);
	return 0;
}
