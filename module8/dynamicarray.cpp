#include<iostream>
using namespace std; 

class DynamicArray{
	int *data;
	int nextIndex;
	int capacity;  //total size of array
	
	public:
		DynamicArray(){
			data=new int[5];
			nextIndex=0;
			capacity=5;
		}
		
		void add(int element){
			if(nextIndex==capacity){
				int *newData=new int[2*capacity];
				for(int i=0;i<capacity;i++){
					newData[i]=data[i];
				}
				delete []data;  //delete data
				data=newData;
				capacity=capacity*2;
			}
			data[nextIndex]=element;
			nextIndex++;
		}
		
		int get(int i) const{
			if(i>=0 && i<nextIndex){
				return data[i];
			}else{
				return -1;
			}
		}
		
		void add(int element,int i){
			if(i<nextIndex){
				data[i]=element;
			}else if(i==nextIndex){
				add(element);
			}else{
				cout<<"index not valid";
				return;
			}
		}
		
		void print() const{
			for(int i=0;i<nextIndex;i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
		
		int getCapacity() const{
			return capacity;	
		}
		
		DynamicArray(DynamicArray const &d){
			this->nextIndex=d.nextIndex;
			this->capacity=d.capacity;
			//this->data=d.data;  //shallow copy
			
			this->data=new int[d.capacity];
			for(int i=0;i<d.nextIndex;i++){
				this->data[i]=d.data[i];
			}
		}
		
		void operator=(DynamicArray const &d){
			this->nextIndex=d.nextIndex;
			this->capacity=d.capacity;
			//this->data=d.data;  //shallow copy
			
			this->data=new int[d.capacity];
			for(int i=0;i<d.nextIndex;i++){
				this->data[i]=d.data[i];
			}
		}
		
		DynamicArray(int c){
			data=new int[c];
			nextIndex=0;
			capacity=c;
		}		
};

int main(){
	DynamicArray d1;  //default constructor called
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.add(50);
	d1.add(60);
	
	d1.print();
	
	cout<<d1.get(2)<<endl;
cout<<"size is "<<	d1.getCapacity()<<endl;

DynamicArray d2(d1);  //copyconstructor
DynamicArray d3;
d3=d1;   //copyassignment operator

d1.add(100,0);
d1.print();
d2.print();
d3.print();

DynamicArray d4(100);  //parameterized constructor
cout<<"capacity is "<<d4.getCapacity();



	return 0;
}

