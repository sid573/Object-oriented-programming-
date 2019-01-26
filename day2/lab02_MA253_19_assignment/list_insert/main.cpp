#include <iostream>
#include <string>
#include "list.h"
using namespace std;

int main()
{
	list l;
	string c="";
	int v;

	cout<<"Demonstration of doubly linked list"<<endl;
	cout<<"Enter one the follwing commands"<<endl;
	cout<<" if - to insert an integer at the front"<<endl;
	cout<<" df - to delete the integer at the front"<<endl;
	cout<<" ib - to insert an integer at the back"<<endl;
	cout<<" db - to delete the integer at the back"<<endl;
	cout<<" p - to print the list"<<endl;
	cout<<" q - to quit"<<endl;

	while(true)
	{
		cout<<"Enter command"<<endl; cin>>c;
		if(c=="q") break;
		if(c=="if")
		{
			cout<<"Enter value"<<endl; cin>>v;
			l.push_front(v); cout<<v<<" Inserted at Front"<<endl;
			continue;
		}
		if(c=="df")
		{
			if(l.isempty()) cout<<"Error: Underflow"<<endl;
			else cout<<l.pop_front()<<" Deleted at Front"<<endl;
			continue;
		}
		if(c=="ib")
		{
			cout<<"Enter value"<<endl; cin>>v;
			l.push_back(v); cout<<v<<" Inserted at Back"<<endl;
			continue;
		}
		if(c=="db")
		{
			if(l.isempty()) cout<<"Error: Underflow"<<endl;
			else cout<<l.pop_back()<<" Deleted at Back"<<endl;
			continue;
		}
		if(c=="p") {l.show();continue;}
		cout<<"Command not recognised"<<endl;
	}
}
