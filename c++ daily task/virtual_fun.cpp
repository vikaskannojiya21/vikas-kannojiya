#include<iostream>
using namespace std;
class vikas{
	public :
	virtual void display()=0;
	
		void show(){
			cout<<"hello vikas";
			
		}
	
};
int main(){
	vikas s1;
	s1.show();
	return 0;
}
