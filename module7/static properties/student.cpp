class Student{
	public:
		int rollNumber;
		int age;
		static int totalStudents; 	
		
		Student(){
			totalStudents++;
		}
		
		static int gettotalStudents(){
			return totalStudents;
		}
};

int Student::totalStudents=0;
