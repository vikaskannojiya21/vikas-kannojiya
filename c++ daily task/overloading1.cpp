#include<iostream>
using namespace std;

class A{
	
	 public:
 		void ADD(int a,int b){
 			cout<<"\nADD = "<<a+b;
		 }
		 
	 	void ADD(float a, float b)	{
	 		cout<<"\nadd="<<a+b;
		 } 
	
};







int main(){
	A obj;
	obj.ADD(2,3);
	obj.ADD(4.5f,6.7f);
	
	return 0;
}
