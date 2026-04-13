#include<iostream>
using namespace std;
class vikas{
	private:
	int a=10;
	int b=20;
	friend class nitin;
	
};

class nitin : public vikas{
	public:
		void display(vikas s){
		cout<<"ADDition of A and B = "<< s.a+s.b; 
   } 
};




int main(){
	vikas s2;
	nitin s3;
	s3.display(s2);
	
	return 0;
}
