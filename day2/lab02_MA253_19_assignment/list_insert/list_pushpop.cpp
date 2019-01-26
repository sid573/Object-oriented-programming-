#include <iostream>
#include "list.h"
using namespace std;

void list::push_front(int x)
{
	node *n = new node;
	n->data = x;

	n->next = s->next;
	n->prev = s;
	s->next->prev = n;
	s->next = n;
}

int list::pop_front(void)
{
	node *n = s->next;
	int x = n->data;

	n->next->prev = s;
	s->next = n->next;

	delete n;
	return x;
}


//Implement the member functions push_back() and pop_back() for class 'list'
//Code for push_front() and pop_front() may give you some idea.
//begincomment
void list::push_back(int x)
{
	node *n = new node;
	n->data = x;

	n->next = s;
	n->prev = s->prev;
	s->prev->next = n;
	s->prev = n;
}

int list::pop_back(void)
{
	node *n = s->prev;
	int x = n->data;

	n->prev->next = s;
	s->prev = n->prev;

	delete n;
	return x;
}
//endcomment
