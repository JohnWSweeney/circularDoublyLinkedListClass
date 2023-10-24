#include <iostream>
#include "nodes.h"
#include "cdList.h"

int main()
{
	std::cout << "Circular Doubly Linked List Class v1.0.0\n\n";
	int result;
	int nodeCount;
	int data;
	int position;
	dNode* list = nullptr;
	dNode* ptr = nullptr;

	cdList cdlist;

	list = cdlist.init(1234);
	for (int i = 0; i < 9; i++)
	{
		cdlist.addNodeBack(list, pow(i, 5));
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