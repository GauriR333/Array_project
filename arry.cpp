#include"arry.h"
Myarry::Myarry(){
	index=-1;
	size=0;
	p=NULL;
}
/////////////////////////////////////////////////////////////////////
Myarry::Myarry(int size1){
	index=-1;
	size=size1;
	p=new int[size];
}
/////////////////////////////////////////////////////////////////////
void Myarry::addElement(int data){
	cout<<"\n size : "<<size;
	cout<<"\n index : "<<index;
	if(size==index+1){
		cout<<"\n\tArray is full ";
		return;
	}
	else{
		p[++index]=data;
	}
}
/////////////////////////////////////////////////////////////////////
void Myarry::displayAll(){
	if(index==-1)
	{
		cout<<"\n\t No Element to display";
		return;
	}
	else{
		for(int i=0;i<=index;i++)
		{
			cout<<"\t"<<p[i];
		}
	}
}
/////////////////////////////////////////////////////////////////////
void Myarry::searchElement(int searchData){
	if(index==-1){
		cout<<"No element to search";
		return;
	}
	else{
		for(int i=0;i<=index;i++)
		{
			if(searchData==p[i])
			{
				cout<<"record found at index: "<<i;
				return;
			}	
		}
		cout<<"\nrecord not found";
	}
}
/////////////////////////////////////////////////////////////////////
void Myarry::deleteData(int deleteData){
	
	int i;
	
	if(index==-1){
		cout<<"no element to delete";
		return;
	}
	else{
		bool found =false;
	
		for(  i=0;i<=index;i++){
			
			
			if(deleteData==p[i]){
				
				found=true;
				cout<<"record found at index: "<<i;
				break;
			}
		}
		if(found)
		{
				while(i<index)
			{
				p[i]=p[i+1];
				i++;
			}
			index--;
			return;
		}
		else
		{
			if (!found){
			cout<<"\nrecord not found";
			}	
		}
	}
}
	

