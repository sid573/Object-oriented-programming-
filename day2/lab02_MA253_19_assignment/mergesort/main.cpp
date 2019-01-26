#include <iostream>
#include <bits/stdc++.h>
#include "merge_sort.h"
using namespace std;


int main()
{
	int n,i;
	cout<<"How many integers to sort ?"<<endl; cin>>n;
	int A[n];
	for(i=0;i<n;i++) {cout<<"Enter integer #"<<i+1<<endl; cin>>A[i];}

	merge_sort(A,0,n-1);
	cout<<"Output:"<<endl;
	for(i=0;i<n;i++) cout<<A[i]<<endl;
}
