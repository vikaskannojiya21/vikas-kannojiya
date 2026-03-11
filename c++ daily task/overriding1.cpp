#include<iostream>
using namespace std;
class A{
	public:
	 	void ADD(){
	 	 cout<<"ADD";	
		 }
		
};
class B : public A{
	public:
		void ADD(){
			cout<<"Sub";
		}
};

int main(){
	
	B obj;
	obj.ADD();
	return 0;
}
