#include <iostream>
#include <string>
#include "list.h"
using namespace std;

int main()
{
	list l;

	cout << "Enter no. of integers to be sorted" << endl;
	int n; cin >> n;

	for(int i=0;i<n;i++)
	{
		cout << "Enter integer #"<<i+1<<endl;
		int x; cin >> x;
		
		l.insert_sorted(x);
	}

	cout << "Output" <<endl;
	for(int i=0;i<n;i++) cout << l.pop_front() << endl;
}
