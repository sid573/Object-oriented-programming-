struct node {int data; node *next; node *prev;};

//class for doubly linked list with sentinel
class list
{
	private:
	node *s; //s is the pointer to sentinel node

	public:
	void insert_after(node*,int);
	void insert_sorted(int);

	void push_front(int);
	int pop_front(void);

	bool isempty(void);
	void show(void);

	list(void);
	~list(void);
};
