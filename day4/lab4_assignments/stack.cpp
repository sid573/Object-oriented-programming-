#include <iostream>
#include <string>
#include <vector>

using namespace std;

class stack:vector<int> {
public:
	void push(int x);
	int pop(void);
	bool isempty(void) {if(size()==0) return true; else return false;}
	void show(void)
	{for(int i;i<size();i++) cout<<(*this)[i]<<' '; cout<<endl;}
};

void stack::push(int x) {push_back(x);}
int stack::pop(void) {int x=back();pop_back();return x;}

int main()
{
	stack s;
	string c="";
	int v;

	cout<<"Demonstration of stack using linked list"<<endl;
	cout<<"Enter one the follwing commands"<<endl;
	cout<<" i - to push an integer"<<endl;
	cout<<" d - to pop"<<endl;
	cout<<" p - to print the stack"<<endl;
	cout<<" q - to quit"<<endl;

	while(true)
	{
		cout<<"Enter command"<<endl; cin>>c;
		if(c=="q") break;
		if(c=="i")
		{
			cout<<"Enter value"<<endl; cin>>v;
			s.push(v); cout<<v<<" Pushed"<<endl;
			continue;
		}
		if(c=="d")
		{
			if(s.isempty()) cout<<"Error: Underflow"<<endl;
			else cout<<s.pop()<<" Popped"<<endl;
			continue;
		}
		if(c=="p") {s.show();continue;}
		cout<<"Command not recognised"<<endl;
	}
}
