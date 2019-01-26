struct node {int data; node *next; node *prev;};

//class for doubly linked list with sentinel
class list
{
	private:
	

	public:
	node *s; //s is the pointer to sentinel node
	void push_front(int);
	int pop_front(void);
	void push_back(int);
	int pop_back(void);

	bool isempty(void);
	void show(void);

	list(void);
	~list(void);
};
