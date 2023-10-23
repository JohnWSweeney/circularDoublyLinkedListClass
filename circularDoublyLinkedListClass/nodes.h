#pragma once
#include <iostream>
// singly linked list node.
struct node
{
	int data;
	node* next = nullptr;
};
// doubly linked list node.
struct dNode
{
	int data;
	dNode* next = nullptr;
	dNode* prev = nullptr;
};