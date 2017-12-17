#include "Link_List.h"
#include <iostream>
using namespace std;

template <class my_type>
Link_List<my_type>::Link_List()
{
	head = nullptr;
	current = nullptr;
	temp = nullptr;
}

template <class my_type>
void Link_List<my_type>::add_node(my_type data){
	node_ptr n = new node;
	n->data = data;
	n->ptr = nullptr;
	if (head != nullptr)
	{
		current = head;
		while (current->ptr != nullptr)
		{
			current = current->ptr;
		}
		current->ptr = n;

	}
	else
	{
		head = n;
	}
}


template<class my_type>
void Link_List<my_type>::add_at_begginig(my_type element) {
	node_ptr n = new node;
	n->data = element;
	n->ptr = head;
	head = n;
}

template <class my_type>
void Link_List<my_type>::add_after(my_type key, my_type element) {
	node_ptr temp = head;
	while (temp != nullptr)
	{
		if (temp->data == key)
		{
			node_ptr n = new node;
			n->data = element;
			n->ptr = temp->ptr;
			temp->ptr = n;
			break;
		}
		temp = temp->ptr;
	}
}

template <class my_type>
void Link_List<my_type>::add_before(my_type key, my_type element) {
	node_ptr temp = head;
	node_ptr temp1=nullptr
	while (temp != nullptr)
	{
		if (temp->data == key)
		{
			node_ptr n = new node;
			n->data = element;
			n->ptr = temp->ptr;
			temp->ptr = n;
			break;
		}
		temp1 = temp;
		temp = temp->ptr;
	}
}

template <class my_type>
void Link_List<my_type>::delete_node(my_type data){
	node_ptr n = new node;
	temp = head;
	current = head;
	while (current != nullptr && current->data !=data)
	{
		temp = current;
		current = current->ptr;
	}
	if (current != nullptr)
	{
		n = current;
		current = current->ptr;
		if (head == n)
			head = current;
		else
			temp->ptr = current;
		delete n;
		
	}
}


template <class my_type>
void Link_List<my_type>::print_list(){
	current = head;
	while (current->ptr != nullptr)
	{
		cout << current->data << endl;
		current = current->ptr;
	}
	cout << current->data << endl;
}


template <class my_type>
Link_List<my_type>::~Link_List()
{
	node_ptr n = head;
	while (head != nullptr)
	{
		n = head;
		head = head->ptr;
		delete n;
	}
}


template <class my_type>
void Link_List<my_type>::reverse(){
	node_ptr previous, next;
	current = head;
	previous = nullptr;
	while (current != nullptr)
	{
		next = current->ptr;
		current->ptr = previous;
		previous = current;
		current = next;

	}
	head = previous;
}