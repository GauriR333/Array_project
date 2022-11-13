#include<iostream>
using namespace std;
class Myarry{
	int size;
	int *p;
	int index;
	
	public:
	Myarry();
	Myarry(int);
	void addElement(int);
	void displayAll();
	void searchElement(int);
	void deleteData(int);	
	
};
