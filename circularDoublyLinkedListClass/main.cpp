#include <iostream>
#include "nodes.h"
#include "cdList.h"

int main()
{
	std::cout << "Circular Doubly Linked List Class v1.0.3\n\n";
	int result;
	int nodeCount;
	int data;
	int position;
	dNode* list = nullptr;
	dNode* ptr = nullptr;

	cdList cdlist;

	for (int i = -5; i < 5; i++)
	{
		cdlist.addBack(&list, pow(i, 4));
	}
	result = cdlist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		cdlist.print(list);
	}
	else
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = cdlist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		cdlist.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}