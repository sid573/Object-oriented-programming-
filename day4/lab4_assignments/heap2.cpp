#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

template<class T>
class heap:public vector<T>{
private:
	vector<T> &A;
	int heap_size,length;

	int Parent(int i) {return (i-1)/2;}
	int Left(int i) {return 2*i+1;}
	int Right(int i) {return 2*i+2;}

	void Max_Heapify(int i);

public:
	void Build_Max_Heap(void);
	void Heapsort(void);
	T Heap_Maximum(void) {return A[0];}
	T Heap_Extract_Max(void);
	void Heap_Increase_Key(int i, T key);
	void Max_Heap_Insert(T key);

	heap(initializer_list<T> il):
		vector<T>(il), A(*this),length(A.size()),heap_size(A.size()) {}
	heap(void):A(*this),length(A.size()),heap_size(A.size()) {} //constructor
	void show(int level=0,int node=0);  // prints the tree
};

template<class T>
void heap<T>::Max_Heapify(int i)
{
	int left = Left(i);
	int right = Right(i);
	int largest = i;

	if (A[i] < A[left] && length > left && heap_size > left)
	{
		largest = left;
	}
	else if (A[i] < A[right] && length > right && heap_size > right)
	{
		largest = right;
	}

	if (largest!=i)
	{
		swap(A[i],A[largest]);
		Max_Heapify(largest);
	}
}

template<class T>
void heap<T>::Build_Max_Heap()
{
	for (int i =(length-2)/2 ; i >= 0; i--)
	{
		Max_Heapify(i);
	}
}

template<class T>
void heap<T>::Heapsort()
{
	//heap_size = length;
	Build_Max_Heap();

	for (int i = length-1; i>0; --i)
	{
		swap(A[i],A[0]);

		heap_size=heap_size-1;
		//cout << heap_size << endl;
		Max_Heapify(0);
	}
}

template<class T>
T heap<T>::Heap_Extract_Max()
{
	
	Build_Max_Heap();
	T max = Heap_Maximum();
	swap(A[heap_size-1],A[0]);

	heap_size=heap_size-1;
	//cout << heap_size << endl;
	Max_Heapify(0);
	
	return max;
	
}

template<class T>
void heap<T>::Heap_Increase_Key(int i , T key)
{
	A[i] = A[i]+key;
	Build_Max_Heap();
}

template<class T>
void heap<T>::Max_Heap_Insert(T key)
{
	A.push_back(key);
	length = A.size();
	Build_Max_Heap();
}

template<class T>
void heap<T>::show(int level,int node)  // prints the heap
{
        int l=Left(node), r=Right(node);

        if(r<length) show(level+1,r);

        for(int i=0;i<level;i++) cout<<"      ";
        wcout<<right<<setw(3)<<node<<':'<<left<<setw(3)<<A[node]<<endl;
        if(l<length) show(level+1,l);
}
// Implement all the member functions (that are not already implemented

int main()
{
	heap<int> h{16,4,10,14,7,9,3,2,8,1};
	h.show();
	cout << "----------------------------------------------------------------------------" << endl;
	h.Build_Max_Heap();
	h.show();
	cout << "----------------------------------------------------------------------------" << endl;
	//cout << h.Heap_Extract_Max() << endl;
	//h.show();
	// Test the member functions of heap class.
	cout << "----------------------------------------------------------------------------" << endl;
	h.Heap_Increase_Key(9,55);
	h.show();
	cout << "----------------------------------------------------------------------------" << endl;
	//h.Max_Heap_Insert(5);
	//h.show();
}
