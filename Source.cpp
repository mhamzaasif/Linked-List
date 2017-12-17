#include <iostream>
#include "Link_List.h"
#include "Link_List.cpp"
using namespace std;

int main()
{
	Link_List <int>list;
	list.add_node(39);
	list.add_node(5);
	list.add_node(6);
	list.add_node(7);
	list.print_list();
	list.delete_node(7);
	list.print_list();
	list.add_node(8);
	list.print_list();
	cout << endl;
	list.reverse();
	list.print_list();
	/*list.add_node(8);
	list.print_list();*/
	return 0;
}