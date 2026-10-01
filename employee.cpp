#include <iostream>
#include <string>
using namespace std;

class Employee {
	
	private:
	int empid;
	string name;
	float basicSalary;
	float bonus;
	float totalSalary;
	
	public:
	Employee(){
		empid = 123;
		name = "anuj";
		basicSalary = 1000;
		bonus = 500;
		calculateSalary();
	}
	
	Employee(int id, string n, float s, float b){
		name = n;
		empid = id;
		basicSalary = s;
		bonus = b;
		calculateSalary();
	}

	void calculateSalary(){
		totalSalary = basicSalary + bonus;
	}
	
	void display(){
		cout<<"Name : "<<name<<endl;
		cout<<"Employee ID : "<<empid<<endl;
		cout<<"Basic Salary : "<<basicSalary<<endl;
		cout<<"Bonus : "<<bonus<<endl;
		cout<<"Total Salary : "<<totalSalary<<endl;
	    
	}
};

int main(){
  Employee e1;
  e1.display();
  
  cout<<"--------------------------------"<<endl;
  Employee e2(01010, "Anuj", 10083, 3499);
  e2.display();
  
  return 0;
}
