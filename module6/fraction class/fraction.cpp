#include<iostream>

using namespace std;

class Fraction{
	private:
		int numerator;
		int denominator;
		
	public:
		Fraction(int numerator,int denominator){
			this->numerator=numerator;
			this->denominator=denominator;
		}	
		
		void print(){
			cout<<numerator<<"/"<<denominator<<endl;
		}
		
		void add(Fraction const &f2){
			int lcm= denominator * f2.denominator;
			int x=lcm/denominator;
			int y=lcm/f2.denominator;
			
			int num=x*numerator + y*f2.numerator;
			
			//store result in f1 
			this->numerator=num;   //optiional
			this->denominator=lcm;  //optional
			
			simplify();
		}
		
		void multiply(Fraction const &f2){
			this->numerator=this->numerator*f2.numerator;
			this->denominator=this->denominator*f2.denominator;
			
			simplify();
		}
		
		void simplify(){
			int gcd=1;
			int j=min(this->numerator,this->denominator);
			for(int i=1;i<=j;i++){
				if(numerator%i==0 && denominator%i==0){
					gcd=i;
				}
			}
			
			//inbuilt function for gcd   __gcd(a,b) 
			
			//simplify
			numerator=numerator/gcd;
			denominator=denominator/gcd;
		}
};

int main(){
	Fraction f1(10,2);
	Fraction f2(15,4);
	f1.add(f2);	
	
	
	f1.print();
	f2.print();
	
	
	Fraction f3(10,2);
	Fraction f4(15,4);
	f3.multiply(f4);
	f3.print();
	f4.print();
	
	return 0;
}
