#pragma once
#include "ListNode.h"
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

// LinkedList class
template <class T>
class LinkedList
{
	private:
		ListNode<T>* head;	// List head pointer

	public:
		// Constructor
		LinkedList();
		// Destructor
		~LinkedList();

		// Linked list operations
		void AppendNode(T value);
		void InsertNode(T value);
		void DeleteNode(T value);
		void DisplayList() const;
		void ClearList();

		T CheckNode(int value) const;
};

// Constructor
template <class T>
LinkedList<T>::LinkedList()
{
	head = nullptr;
}

// Destructor
template <class T>
LinkedList<T>::~LinkedList()
{
	ClearList();
}

template <class T>
void LinkedList<T>::ClearList()
{
	ListNode<T>* nodePtr = nullptr;
	ListNode<T>* nextNode = nullptr;

	nodePtr = head;

	while (nodePtr != NULL) // while (nodePtr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
	head = nullptr;
}

// AppendNode appends a node containing the value passed into newValue, to the end of the list.
template <class T>
void LinkedList<T>::AppendNode(T value)
{
	ListNode<T>* nodePtr = nullptr;	// To point to a new node
	ListNode<T>* newNode = nullptr;	// To move through the list

	// Allocate a new node and store newValue there
	newNode = new ListNode<T>(value);

	// If there are no nodes in the list make newNode the first node
	if (!head)
		head = newNode;
	else // Ohterwise, insert newNode at end
	{
		// Initialize nodePtr to head of list
		nodePtr = head;

		// Find the last node in the list
		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}

		// Insert newNode as the last node
		nodePtr->next = newNode;
	}
}

// InsertNode inserts a node with newValue copied to its value member.
template <class T>
void LinkedList<T>::InsertNode(T value)
{
	ListNode<T>* nodePtr = nullptr;		// To traverse the list
	ListNode<T>* prevNode = nullptr;	// The previous node
	ListNode<T>* newNode = nullptr;		// A new node

	// Allocate a new node and store newValue there
	newNode = new ListNode<T>(value);

	// If there are no nodes in the list make newNode the first node
	if (!head)
	{
		head = newNode;
	}
	else // Otherwise, insert newNode
	{
		// Position nodePtr at the head of list
		nodePtr = head;

		// Initialize previousNode to nullPtr
		prevNode = NULL;

		// Skip all nodes whose value is less than newValue
		while (nodePtr != NULL && nodePtr->value < value)
		{
			prevNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		//If the new node is to be first item list, insert it before all other nodes
		if (prevNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else // Otherwise insert after the previous node
		{
			prevNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

// DeleteNode searches for a node with value.
// The node, if found, is deleted from the list and from memory.
template <class T>
void LinkedList<T>::DeleteNode(T value)
{
	ListNode<T>* nodePtr = nullptr;		// To traverse the list
	ListNode<T>* prevNode = nullptr;	// To point to the previous node

	// If the list is empty, do nothing
	if (!head)
		return;

	// Determine if the first node is the one
	if (head->value == value)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		// Initialize nodePtr to head of list
		nodePtr = head;

		// Skip all nodes whose value member is not equal to value
		while (nodePtr != NULL && nodePtr->value != value)
		{
			prevNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If nodePtr is not at the end of the list, link the previous node 
		// to the node after nodePtr, then delete nodePtr
		if (nodePtr)
		{
			prevNode->next = nodePtr->next;
			delete nodePtr;
			nodePtr = nullptr;
		}
	}
}

// DisplayList show the value stored in each node of the linked list pointed to by head
template <class T>
void LinkedList<T>::DisplayList() const
{
	// To move through the list
	// Position nodePtr at the head of the list
	ListNode<T>* nodePtr = head;

	// While nodePtr points to a node, traverse the list
	while (nodePtr)
	{
		// Display the value in this node
		cout << nodePtr->value << endl;

		// Move to the next node
		nodePtr = nodePtr->next;
	}
}

template <class T>
T LinkedList<T>::CheckNode(int value) const
{
	ListNode<T>* nodePtr = head;

	if (value == 1)
		return head->value;
	else
	{
		for (int index = 1; index < value; index++)
		{
			nodePtr = nodePtr->next;
		}
		return nodePtr->value;
	}	
}