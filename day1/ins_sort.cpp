#include <bits/stdc++.h>

using namespace std;
vector <int> v;
void InsertionSort(vector<int> &v);

void InsertionSort(vector<int> &v){

	int key,j;
	for(int i=1 ; i<v.size() ; i++){
	
		key = v[i];
		j=i-1;

		while(j>=0 && v[j]>key){
			v[j+1]=v[j];
			j=j-1;
		}
		
		v[j+1]=key;
	}

}

int main()
{
	int val ;

	while(cin >> val){
		v.push_back(val);
	}
	
	InsertionSort(v);

	for(int i=0; i<v.size() ; i++){
		cout << v[i] << " ";	
	}
	
	cout << endl;
}



