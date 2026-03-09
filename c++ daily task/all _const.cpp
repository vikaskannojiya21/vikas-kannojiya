#include <iostream>
#include <cstring>
using namespace std;
class Employee{
	int emp_id;
	char name[50];
	
	public:
		// default const
	Employee(){
		  cout << "Enter your Emp_id = ";
		  cin >> emp_id;
		  cout << "Enter your name = ";
		  cin >> name;
}
	// parameter const
	Employee(int r,const char s[50]){
		emp_id = r;
		strcpy(name,s);
		 
	}
	//copy const
	Employee(Employee  &vik){
		emp_id = vik.emp_id;
		strcpy(name,vik.name);
	}
	
	void display(){
		cout << "\nyour Emp_id = "<< emp_id;
		cout << "\nyour Name = "<< name;
	}
	
	//deconst
	~Employee(){
		cout<<"\n\ndata removed";
	}
};

int main(){
	Employee s1;
	s1.display();
	
	Employee s2(23,"nitin");
	s2.display();
	
	Employee s3(s2);
	s3.display();
	
	return 0;
}
