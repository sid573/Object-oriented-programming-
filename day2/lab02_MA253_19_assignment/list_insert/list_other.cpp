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
