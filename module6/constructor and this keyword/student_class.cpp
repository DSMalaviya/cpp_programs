using namespace std;
class Student{
	
	int age;
		
	public:		
	
	     //default constructor
	
		
		Student(int rollNumber){
			cout<<"Parameterized constructor is called"<<endl;
			cout<<this<<endl;
			this->rollNumber=rollNumber;
		}
		
		Student(int a,int r){
			cout<<"constructor 3 called"<<endl;
			cout<<"this "<<this<<endl;
			this->age=a;
			this->rollNumber=r;
		}
	
			int rollNumber;
	
		void display(){
			cout<<age<<" "<<rollNumber<<endl;
		}
		
		int getAge(){
			return age;
		}
		
		void setAge(int a){
			age=a;
		}
};
