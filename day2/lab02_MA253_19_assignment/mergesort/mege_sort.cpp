#include <bits/stdc++.h>
using namespace std;


void merge(int a[],int p,int q,int t){

	vector<int> l,r;
	int li=0;
	int ri=0;

	for (int i = p; i <= q; ++i)
	{
		l.push_back(a[i]);
		//cout << a[i]<<"l" << " ";
	}
	//cout << endl;
	l.push_back(10000);

	for (int i = q+1; i <= t; ++i)
	{
		r.push_back(a[i]);
		//cout << a[i]<<"r" << " ";
	}
	//cout << endl;
	r.push_back(10000);

	

	for (int i = p; i <= t; ++i)
	{

		 if (l[li] > r[ri])
		{
			a[i] = r[ri];
			ri++;
		}

		else if (l[li] <= r[ri])
		{
			a[i] = l[li];
			li++;	
		}
	}


	
}

void merge_sort(int a[],int start , int end){

	int q;

	if (start<end)
	{
		q = (start+end)/2;
		//cout << q<<"q" << endl;
		merge_sort(a , start , q);
		merge_sort(a , q+1 , end);
		merge(a , start , q , end);

	}
}

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
