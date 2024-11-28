#include <iostream>
#include "clsDblLinkedList.h"

int main()
{
	clsDblLinkedList <int> MydblLinkedList;

	MydblLinkedList.InsertAtBeginning(5);
	MydblLinkedList.InsertAtBeginning(4);
	MydblLinkedList.InsertAtBeginning(3);
	MydblLinkedList.InsertAtBeginning(2);
	MydblLinkedList.InsertAtBeginning(1);
	cout << "\nDouble Linked List Content :\n";
	MydblLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
	if (N1 != NULL)
		cout << "\nNode with value 2 is Found :-)\n";
	else
		cout << "\nNode Is Not Found :-(\n";

	MydblLinkedList.InsertAfter(N1, 555);
	cout << "\nAfter Inserting 555 after 2 : \n";
	MydblLinkedList.PrintList();

	MydblLinkedList.InsertAtEnd(700);
	cout << "\nAfter Inserting 700 At End : \n";
	MydblLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
	MydblLinkedList.DeleteNode(N2);
	cout << "\nAfter Deleting 4 :\n";
	MydblLinkedList.PrintList();

	MydblLinkedList.DeleteFirstNode();
	cout << "\nAfter deleting first node :\n";
	MydblLinkedList.PrintList();

	MydblLinkedList.DeleteLastNode();
	cout << "\nAfter deleting last node :\n";
	MydblLinkedList.PrintList();

}
