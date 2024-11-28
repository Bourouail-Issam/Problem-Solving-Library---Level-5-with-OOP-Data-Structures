#pragma once
#include <iostream>
using namespace std;

template <typename T>
class clsDblLinkedList
{

public:
	class Node
	{
	public:
		T value;
		Node* next;
		Node* prev;
	};
	Node* head = NULL;

	void InsertAtBeginning(T value)
	{
		/*
		1-Create a new node with the desired value.
		2-Set the next pointer of the new node to the current head of the list.
		3-Set the previous pointer of the current head to the new node.
		4-Set the new node as the new head of the list.
		*/
		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = head;
		new_node->prev = NULL;

		if (head != NULL)
			head->prev = new_node;

		head = new_node;
	}

	void PrintList()
	{
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->value << " ";
			current = current->next;
		}
		cout << endl;
		delete current;
	}

	Node* Find(T value)
	{
		Node* current = head;

		while (current != NULL)
		{
			if (current->value == value)
				return current;
			current = current->next;
		}
		return NULL;
	}

	void InsertAfter(Node* current, T value)
	{
		/*  1 - Create a new node with the desired value.
	 2-Set the next pointer of the new node to the next node of the current node.
	 3-Set the previous pointer of the new node to the current node.
	 4-Set the next pointer of the current node to the new node.
	 5-Set the previous pointer of the next node to the new node(if it exists).
		*/
		if (current == NULL) return;

		Node* new_node = new Node();
		new_node->value = value;
		new_node->prev = current;
		new_node->next = current->next;

		if (current->next != NULL)
			current->next->prev = new_node;

		current->next = new_node;
	}

	void InsertAtEnd(T value)
	{
		/*
	   1-Create a new node with the desired value.
	   2-Traverse the list to find the last node.
	   3-Set the next pointer of the last node to the new node.
	   4-Set the previous pointer of the new node to the last node.
		*/
		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = NULL;

		if (head == NULL)
		{
			new_node->prev = NULL;
			head = new_node;
		}
		else {
			Node* LastNode = head;
			while (LastNode->next != NULL)
			{
				LastNode = LastNode->next;
			}
			new_node->prev = LastNode;
			LastNode->next = new_node;
		}
	}

	void DeleteNode(Node* NodeToDelete)
	{
		/*
		1-Set the next pointer of the previous node to the next pointer of the current node.
		2-Set the previous pointer of the next node to the previous pointer of the current node.
		3-Delete the current node.
		*/
		if (head == NULL || NodeToDelete == NULL)
			return;

		if (NodeToDelete == head)
			head = NodeToDelete->next;

		if (NodeToDelete->next != NULL)
			NodeToDelete->next->prev = NodeToDelete->prev;

		if (NodeToDelete->prev != NULL)
			NodeToDelete->prev->next = NodeToDelete->next;

		delete NodeToDelete;
	}

	void DeleteFirstNode()
	{
		/*
			1-Store a reference to the head node in a temporary variable.
			2-Update the head pointer to point to the next node in the list.
			3-Set the previous pointer of the new head to NULL.
			4-Delete the temporary reference to the old head node.
		*/

		if (head == NULL) return;

		Node* temp = head;
		head = head->next;

		if (head != NULL)
			head->prev = NULL;

		delete temp;
	}

	void DeleteLastNode()
	{
		/*
	   1-Traverse the list to find the last node.
	   2-Set the next pointer of the second-to-last node to NULL.
	   3-Delete the last node.
		*/
		if (head == NULL) return;

		if (head->next == NULL)
		{
			delete head;
			head = NULL;
			return;
		}

		Node* Current = head;

		// First Solution
	 /*  while (Current->next != NULL)
			Current = Current->next;
		Current->prev->next = NULL;
		delete Current;*/


		// Second Solution
		while (Current->next->next != NULL)
		{
			Current = Current->next;
		}
		Node* LastNode = Current->next;
		Current->next = NULL;
		delete LastNode;
	}
};

