#pragma once
#include "nodes.h"
// sweeney's hand-rolled circular doubly linked list.
//
// pos = "position".
// ptr = "pointer".
//
// error codes:
// 0	no error.
// 1	list is nullptr.
// 2	ptr is nullptr.
// 5	list has only one node.
// -1	pos/ptr not in list.
// -2	no action needed.

class cdList
{
private:
	dNode* init(int data);
public:
	int addFront(dNode** list, int data);
	int addBack(dNode** list, int data);
	int addPos(dNode** list, int pos, int data);
	int deleteFront(dNode** list);
	int deleteBack(dNode** list);
	int deletePos(dNode** list, int pos);
	int deletePtr(dNode** list, dNode* ptr);
	int deleteBeforePos(dNode** list, int pos);
	int deleteBeforePtr(dNode** list, dNode* ptr);
	int deleteAfterPos(dNode** list, int pos);
	int deleteAfterPtr(dNode** list, dNode* ptr);
	int returnPosPtr(dNode* list, dNode* &ptr, int pos);
	int returnPtrPos(dNode* list, int &pos, dNode* ptr);
	int returnFrontData(dNode* list, int &data);
	int returnBackData(dNode* list, int &data);
	int returnPosData(dNode* list, int &data, int pos);
	int returnPtrData(dNode* list, int &data, dNode* ptr);
	int updatePosData(dNode* list, int pos, int data);
	int updatePtrData(dNode* list, dNode* ptr, int data);
	int returnDataPos(dNode* list, int data, int &pos);
	int returnDataPtr(dNode* list, int data, dNode* &ptr);
	int returnMinPos(dNode* list, int &min, int &pos);
	int returnMinPtr(dNode* list, int &min, dNode* &ptr);
	int returnMaxPos(dNode* list, int &max, int &pos);
	int returnMaxPtr(dNode* list, int &max, dNode* &ptr);
	int returnTailPos(dNode* list, int &pos);
	int returnTailPtr(dNode* list, dNode* &ptr);
	int movePosFront(dNode** list, int pos);
	int movePtrFront(dNode** list, dNode* ptr);
	int movePosBack(dNode** list, int pos);
	int movePtrBack(dNode** list, dNode* ptr);
	int movePosUp(dNode** list, int pos);
	int movePtrUp(dNode** list, dNode* ptr);
	int movePosDown(dNode** list, int pos);
	int movePtrDown(dNode** list, dNode* ptr);
	int clear(dNode** list);
	int isEmpty(dNode* list);
	int size(dNode* list, int &nodeCount);
	int print(dNode* list);
	int printReverse(dNode* list);
	int reverse(dNode** list);
	int swap(dNode** list, dNode* ptr1, dNode* ptr2);
	int shuffle(dNode** list);
};