#include<iostream>
using namespace std;

class Array{
  
        private:
        	int arr[10];
        	int length;
        	int size;
        
		public:
			Array(){
				length = 5;
				size = 10;
			}
			
			int get_length(){
				return length;
			}
			
			void append(int arr[], int key){
				arr[length] = key;
				length++;
			}
			
			void insert(int arr[], int key, int index){
					for(int i = length; i>index; i--)
					    arr[i] = arr[i-1];
					arr[index] = key;
					length++;   
		    }
		void display(int ar[]){
			cout<<"The values are: ";
			for(int i = 0; i<length; i++)
				cout<<ar[i]<<endl;
		}
};



int main(){
	
	int a[10];
	Array arr; 
	int length = arr.get_length();
	cout<<"Enter the values: ";
	for(int i = 0; i<length; i++)
	cin>>a[i];
	arr.display(a);
	arr.append(a, 34);
	arr.display(a);
	arr.insert(a,50,3);
	arr.display(a);
	   
}
