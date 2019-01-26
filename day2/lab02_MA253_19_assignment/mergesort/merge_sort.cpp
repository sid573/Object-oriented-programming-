#include "merge_sort.h"
#include <bits/stdc++.h>

//vector<int> l,r;

void merge_sort(int A[],int start, int end)
{
//
	int q;

	if (start<end)
	{
		q = (start+end)/2;
		//cout << q<<"q" << endl;
		merge_sort(A , start , q);
		merge_sort(A , q+1 , end);
		merge(A , start , q , end);

	}
//
}

void merge(int A[],int p, int q,int t)
{
//
	vector<int> l,r;
	int li=0;
	int ri=0;

	for (int i = p; i <= q; ++i)
	{
		l.push_back(A[i]);
		//cout << A[i]<<"l" << " ";
	}
	//cout << endl;
	l.push_back(10000);

	for (int i = q+1; i <= t; ++i)
	{
		r.push_back(A[i]);
		//cout << A[i]<<"r" << " ";
	}
	//cout << endl;
	r.push_back(10000);

	

	for (int i = p; i <= t; ++i)
	{

		 if (l[li] > r[ri])
		{
			A[i] = r[ri];
			ri++;
		}

		else if (l[li] <= r[ri])
		{
			A[i] = l[li];
			li++;	
		}
	}


//
}
