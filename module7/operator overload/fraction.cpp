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
		
		int getNumerator() const{
			return numerator;
		}
		
		int getDenominator() const{
			return denominator;
		}
		
		void setNumerator(int n) {
			numerator=n;
		}
		
		void setDenimonator(int n){
			denominator=n;
		}
		
		Fraction nadd(Fraction const &f2){
			int lcm= denominator * f2.denominator;
			int x=lcm/denominator;
			int y=lcm/f2.denominator;
			
			int num=x*numerator + y*f2.numerator;
			
			Fraction fnew(num,lcm);
			fnew.simplify();
			
			return fnew;
		}
		
		Fraction operator+(Fraction const &f2) const{
			int lcm= denominator * f2.denominator;
			int x=lcm/denominator;
			int y=lcm/f2.denominator;
			
			int num=x*numerator + y*f2.numerator;
			
			Fraction fnew(num,lcm);
			fnew.simplify();
			
			return fnew;
		}
		
		Fraction operator*(Fraction const &f2) const{
			 int n=this->numerator*f2.numerator;
			int d=this->denominator*f2.denominator;
			
			Fraction fnew(n,d);			
			fnew.simplify();
			return fnew;
		}
		
		bool operator==(Fraction const &f2) const{
			return (numerator==f2.numerator && denominator==f2.denominator);
		}
		
		//pre increment
		//temp buffer will not created when return by reference
		Fraction& operator++(){
			numerator=numerator+denominator;
			simplify();
			return *this;  //--> to return content insted of address
		}
		
		//post increment
		Fraction operator++(int){
			Fraction fnew(numerator,denominator);
			numerator=numerator+denominator;
			simplify();
			fnew.simplify();
			return fnew;
		}
		
		Fraction& operator+=(Fraction f2){
			int lcm=denominator*f2.denominator;
			int x=lcm/denominator;
			int y=lcm/f2.denominator;
			
			int num=x*numerator+(y*f2.numerator);
			
		numerator=num;
		denominator=lcm;
		
		simplify();
		return *this;
		}
};


