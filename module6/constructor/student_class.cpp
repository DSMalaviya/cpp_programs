using namespace std;
class Student{
	
	int age;
		
	public:		
	
	     //default constructor
		Student(){
			cout<<"constructor called"<<endl;
		}
		
		Student(int number){
			cout<<"Parameterized constructor is called"<<endl;
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
