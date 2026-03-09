#include<iostream>
using namespace std;
//multiple or multilevel combin
// virtual use kiya base class ki copy ban jati hai
class A {
	public:
	void show(){
		cout << "\nclass a";
	}
};
class B : virtual public A{
	public:
	void show1(){
		cout<<"\nClass B";
	}
};
class C : public B{
	public:
	void show2(){
		cout<<"\nclass c";
	}
};




int main(){
	
    C dis;
    dis.show2();
    dis.show1();
    dis.A::show();
    
    B obj;
    obj.show();
    obj.show1();
    
	return 0;
}
