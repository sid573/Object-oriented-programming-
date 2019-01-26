#include <iostream>
#include "list.h"
using namespace std;

list::list(void)
{
	s = new node;
	s->next=s; s->prev=s;
}

list::~list(void)
{
	while(!isempty()) pop_front();
	delete s;
}

bool list::isempty(void)
{
	if(s->next==s) return true; else return false;
}

void list::show(void)
{
	node *n;
	for(n=s->next ; n!=s ; n=n->next) cout<<"->"<<n->data;
	cout<<endl;
}

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

