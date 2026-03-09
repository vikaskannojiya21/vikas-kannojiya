#include <iostream>
using namespace std;
class Employee
{
	int emp_id;
	int salary;
	string name;
	string dep_name;
	public:
	void enter(){
		  cout << "Enter your Emp_id = ";
		  cin >> emp_id;
		  cout << "Enter your Salary = ";
		  cin >> salary;
		   cout << "Enter your Name = ";
		   cin.ignore();
		  getline(cin,name);
		   cout << "Enter your Department name = ";
		  cin >> dep_name;
		   
	}
	
	void show(){
		  cout << "\nyour Emp_id = "<< emp_id;
		  cout << "\n your Salary = "<< salary;
		  cout << "\nyour Name = "<< name;
		  cout << "\n your Department name ="<<dep_name ;
		  
	}
	
	
};


int main(){
	Employee v1;
	v1.enter();
	v1.show();
	return 0;
}
