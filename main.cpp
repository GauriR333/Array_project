#include"arry.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int choice=0;
	cout<<"\nEnter size: ";
	int size;
	cin>>size;
	Myarry arr(size);
	while(choice!=10)
	{		
	cout<<"\n\t\t1.Add an element: ";
	cout<<"\n\t\t2.Display all elements: ";
	cout<<"\n\t\t3.search data : ";
	cout<<"\n\t\t10.Exit";
	cout<<"\nEnter your choice: ";
	cin>>choice;
	switch(choice){
		case 1:
		{
			int data;
			cout<<"\nEnter data to insert: ";
			cin>>data;
			arr.addElement(data);
		}
		break;
		case 2:
		{
			arr.displayAll();
		
		}
		break;
		case 3:
		{
			int data;
			cout<<"\nEnter data to insert";
			cin>>data;
			arr.searchElement(data);	
		}
		break;
		case 4:
		{
			int data;
			cout<<"\n Enter data to Delete";
			cin>>data;
			arr.deleteData(data);	
		}
		break;
		
		case 10:
			{
			cout<<"\n****************End of program***************";
			}
		 break;	
		 
		default:
			cout<<"\nInvalid choice";
		break;	
	}
	
	}
	return 0;
}
