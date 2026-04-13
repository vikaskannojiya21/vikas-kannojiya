#include<iostream>
using namespace std;
class A{
	public:
	 	void ADD(){
	 	 cout<<"\nADD";	
		 }
		
};
class B : public A{
	public:
		void ADD(){
			cout<<"\nSub";
		}
};

int main(){
	
	B obj;
	obj.ADD();
	 
	obj.A::ADD();
	return 0;
}
