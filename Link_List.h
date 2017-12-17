#pragma once
template <class my_type>
class Link_List
{
	typedef struct node{
		my_type data;
		node *ptr;
	}* node_ptr;
	node_ptr current;
	node_ptr head;
	node_ptr temp;

public:
	Link_List();
	void add_node(my_type);
	void delete_node(my_type);
	void add_at_begginig(my_type);
	void add_after(my_type, my_type);
	void add_before(my_type, my_type);
	void print_list();
	void reverse();
	~Link_List();
};

