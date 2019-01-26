#include "list.h"
using namespace std;

//Implement the member functions insert_after()
//Code for push_front() should give you some idea.
// push_front(x) is a special case of insert_after(m,x) where 'm' is 's'

void list::insert_after(node *t,int v){

	node *n = new node;
	n->data = v;

	n->prev = t;
	n->next = t->next;
	t->next->prev = n;
	t->next = n; 
}

//Implement the member functions insert_sorted()
//To insert an integer 'v' 
// find the pointer 't' to the last node whose data is < 'v'
// (if no such node exists then 't' should point to the sentinel)
// then insert_after(t,v);

void list::insert_sorted(int v){

	node *t = s->next;


	while(t->data < v && t!=s){

		t = t->next ; 

	}

	t = t->prev;
	insert_after(t,v);



}
