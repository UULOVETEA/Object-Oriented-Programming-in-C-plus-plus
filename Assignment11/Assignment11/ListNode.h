#pragma once
//*********************************************
// The ListNode class creates a type used to  *
// store a node of the linked list.			  *
//*********************************************

template <class T>
class ListNode
{
	public:
		T value;			// Node value
		ListNode<T>* next;	// Pointer to next node

		// Constructor
		ListNode(T nodeValue);
		
};

// Constructor
template <class T>
ListNode<T>::ListNode(T nodeValue)
{
	value = nodeValue;
	next = nullptr;
}