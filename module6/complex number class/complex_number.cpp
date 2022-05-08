#include<iostream>

using namespace std;

class ComplexNumber{
	private:
		int realPart;
		int imaginaryPart;
		
	public:
		ComplexNumber(int realPart,int imaginaryPart){
			this->realPart=realPart;
			this->imaginaryPart=imaginaryPart;
		}
		
		void print(){
			cout<<realPart<<"+"<<imaginaryPart<<"i"<<endl;
		}	
		
		void add(ComplexNumber const &c2){
			realPart=realPart+c2.realPart;
			imaginaryPart=imaginaryPart+c2.imaginaryPart;
		}
		
		void multiply(ComplexNumber const &c2){
			realPart=(realPart*c2.realPart)-(imaginaryPart*c2.imaginaryPart);
			imaginaryPart=(realPart*c2.imaginaryPart)+(c2.realPart*imaginaryPart);
		}
};

int main(){
	int real1,real2,imaginary1,imaginary2;
	
	cin>>real1>>imaginary1;
	cin>>real2>>imaginary2;
	
	ComplexNumber c1(real1,imaginary1);
	ComplexNumber c2(real2,imaginary2);
	
	int choice;
	cin>>choice;
	
	
	if(choice==1){
		c1.add(c2);
		c1.print();
	}else if(choice==2){
		c1.multiply(c2);
		c1.print();
	}
	
	
	return 0;
}
