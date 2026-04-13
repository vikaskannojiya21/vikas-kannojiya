#include<iostream>
using namespace std;
class vikas{
	private:
		int A=10;
	friend void hello(vikas v);
		
};

void hello(vikas v){
	cout<<"value of A= "<<v.A;
}




int main(){
	vikas v1;
	hello(v1);
	return 0;
}
