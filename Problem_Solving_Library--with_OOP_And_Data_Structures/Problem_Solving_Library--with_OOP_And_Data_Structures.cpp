#include <iostream>

#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsMyStack.h"

#include "clsDynamicArray.h"
#include "clsMyQueueArr.h"
#include "clsMyStackArr.h"

using namespace std;


int main()
{
	//clsDblLinkedList <int> MydblLinkedList;

	//MydblLinkedList.InsertAtBeginning(410);
	//MydblLinkedList.InsertAtBeginning(9);
	//MydblLinkedList.InsertAtBeginning(8);
	//MydblLinkedList.InsertAtBeginning(7);
	//MydblLinkedList.InsertAtBeginning(6);
	//MydblLinkedList.InsertAtBeginning(5);
	//MydblLinkedList.InsertAtBeginning(4);
	//MydblLinkedList.InsertAtBeginning(3);
	//MydblLinkedList.InsertAtBeginning(2);
	//MydblLinkedList.InsertAtBeginning(1);
	//cout << "\nDouble Linked List Content :\n";
	//MydblLinkedList.PrintList();
	//clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
	//if (N1 != NULL)
	//	cout << "\nNode with value 2 is Found :-)\n";
	//else
	//	cout << "\nNode Is Not Found :-(\n";
	//MydblLinkedList.InsertAfter(N1, 555);
	//cout << "\nAfter Inserting 555 after 2 : \n";
	//MydblLinkedList.PrintList();
	//MydblLinkedList.InsertAtEnd(700);
	//cout << "\nAfter Inserting 700 At End : \n";
	//MydblLinkedList.PrintList();
	//clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
	//MydblLinkedList.DeleteNode(N2);
	//cout << "\nAfter Deleting 4 :\n";
	//MydblLinkedList.PrintList();
	//MydblLinkedList.DeleteFirstNode();
	//cout << "\nAfter deleting first node :\n";
	//MydblLinkedList.PrintList();
	//MydblLinkedList.DeleteLastNode();
	//cout << "\nAfter deleting last node :\n";
	//MydblLinkedList.PrintList();
	//
	//cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();
	//if (MydblLinkedList.IsEmpty())
	//	cout << "\n\nYes List is Empty.\n";
	//else
	//	cout << "\n\nNo List is not Empty.\n";
	//cout << "\nExecuting .Clear()";
	//MydblLinkedList.Clear();

	//cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size() << endl;


	/*MydblLinkedList.Reverse();
	cout << "\nDouble Linked List Content After Reversing  : ";
	MydblLinkedList.PrintList();

	clsDblLinkedList<int> ::Node* N;

	N = MydblLinkedList.GetNode(5);

	cout << "\nNode Value is : " << N->value << endl << endl;
	cout << MydblLinkedList.GetNode(0)->value << endl;
	cout << MydblLinkedList.GetNode(1)->value << endl;
	cout << MydblLinkedList.GetNode(2)->value << endl;

	cout << "\nItem(2) Value is : " << MydblLinkedList.GetItem(2) << endl;

	MydblLinkedList.PrintList();
	MydblLinkedList.UpdateItem(33, 566);
	cout << "\nAfter Updating Item(33) :\n";
	MydblLinkedList.PrintList();

	MydblLinkedList.UpdateItem(4, 566);
	cout << "\nAfter Updating Item(4) :\n";
	MydblLinkedList.PrintList();

	MydblLinkedList.InsertAfter(1, 500);
	cout << "\nAfter Insert : " << endl;
	MydblLinkedList.PrintList();*/

	//clsMyQueue <int> MyQueue;
	//MyQueue.push(10);
	//MyQueue.push(20);
	//MyQueue.push(30);
	//MyQueue.push(40);
	//MyQueue.push(50);
	//cout << "\nQueue : \n";
	//MyQueue.Print();
	//cout << "\nQueue Size : " << MyQueue.Size();
	//cout << "\nQueue front : " << MyQueue.front();
	//cout << "\nQueue back : " << MyQueue.back();
	//MyQueue.pop();
	//cout << "\n\nQueue after pop() : \n";
	//MyQueue.Print();
	//// Extension #1
	//cout << "\n\nItem(2) : " << MyQueue.GetTtem(2);
	//// Extension #2
	//MyQueue.Reverse();
	//cout << "\n\nQueue after reverse() : \n";
	//MyQueue.Print();
	//// Extension #3
	//MyQueue.UpDateItem(2,600);
	//cout << "\n\nQueue after Updating Item(2) to 600 : \n";
	//MyQueue.Print();
	//// Extension #4
	//MyQueue.InserAfter(2, 800);
	//cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
	//MyQueue.Print();
	//// Extension #5
	//MyQueue.InsertAtFront(1000);
	//cout << "\n\nQueue after Inserting 1000 at front : \n";
	//MyQueue.Print();
	//// Extension #6
	//MyQueue.InsertAtBack(2000);
	//cout << "\n\nQueue after Inserting 2000 at back : \n";
	//MyQueue.Print();
	//// Extension #6
	//MyQueue.Clear();
	//cout << "\n\nQueue after Clear() : \n";
	//MyQueue.Print();


	//clsMyStack <int> MyStack;
	//
	//MyStack.push(10);
	//MyStack.push(20);
	//MyStack.push(30);
	//MyStack.push(40);
	//MyStack.push(50);
	//
	//cout << "\nStack : \n";
	//MyStack.Print();
	//
	//cout << "\nStack Size : " << MyStack.Size();
	//cout << "\nStack Top : " << MyStack.Top();
	//cout << "\nStack Bottom : " << MyStack.Bottom();
	//
	//MyStack.pop();
	//cout << "\n\nStack after pop() : \n";
	//MyStack.Print();
	//
	//// Extension #1
	//cout << "\n\nItem(2) : " << MyStack.GetTtem(2);
	//
	//// Extension #2
	//MyStack.Reverse();
	//cout << "\n\nStack after reverse() : \n";
	//MyStack.Print();
	//
	//// Extension #3
	//MyStack.UpDateItem(2, 600);
	//cout << "\n\nStack after Updating Item(2) to 600 : \n";
	//MyStack.Print();
	//
	//// Extension #4
	//MyStack.InserAfter(2, 800);
	//cout << "\n\nStack after Inserting 800 after Item(2) : \n";
	//MyStack.Print();
	//
	//// Extension #5
	//MyStack.InsertAtFront(1000);
	//cout << "\n\nStack after Inserting 1000 at front : \n";
	//MyStack.Print();
	//
	//// Extension #6
	//MyStack.InsertAtBack(2000);
	//cout << "\n\nStack after Inserting 2000 at back : \n";
	//MyStack.Print();
	//
	//// Extension #6
	//MyStack.Clear();
	//cout << "\n\nStack after Clear() : \n";
	//MyStack.Print();

	//clsDynamicArray <int> MyDynamicArray(5);
	//  
	//MyDynamicArray.SetItem(0, 10);
	//MyDynamicArray.SetItem(1, 20);
	//MyDynamicArray.SetItem(2, 30);
	//MyDynamicArray.SetItem(3, 40);
	//MyDynamicArray.SetItem(4, 50);
	//  
	//  
	//cout << "\nIs Empty : " << MyDynamicArray.IsEmpty();
	//cout << "\nArray Size : " << MyDynamicArray.Size();
	//cout << "\nArray Items : ";
	//MyDynamicArray.PrintList();

	//MyDynamicArray.Resize(2);
	//cout << "\nArray Size : " << MyDynamicArray.Size();
	//cout << "\nArray Items after resize to 2 : \n";
	//MyDynamicArray.PrintList();\
	//
	//MyDynamicArray.Resize(10);
	//cout << "\nArray Size : " << MyDynamicArray.Size();
	//cout << "\nArray Items after resize to 10 : \n";
	//MyDynamicArray.PrintList();

	//cout << "\n\nItem(2) : " << MyDynamicArray.GetItem(2) << endl;

	//MyDynamicArray.Reverse();
	//cout << "\nArray Items after reverse : \n";
	//MyDynamicArray.PrintList();

	//MyDynamicArray.Clear();
	//cout << "\nArray Items after Clear : \n";
	//MyDynamicArray.PrintList();
	//  
	//MyDynamicArray.DeleteItemAt(2);
	//cout << "\n\nArray Items after deleting item(2) : ";
	//cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	//MyDynamicArray.PrintList();
	//  
	//MyDynamicArray.DeleteFirstItem();
	//cout << "\n\nArray Items after deleting FirstItem : ";
	//cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	//MyDynamicArray.PrintList();
	//  
	//MyDynamicArray.DeleteLastItem();
	//cout << "\n\nArray Items after deleting LastItem : ";
	//cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	//MyDynamicArray.PrintList();
	//  
	//int Index = MyDynamicArray.Find(30);
	//  
	//if (-1 == Index)
	//  cout << "\nItem was not Found : -(\n";
	//else
	//	cout << "\n30 is Found at index : " << Index;
	//  
	//MyDynamicArray.DeleteItem(30);
	//cout << "\n\nArray Size : " << MyDynamicArray.Size();
	//cout << "\nArray Items after deleting 30 : ";
	//MyDynamicArray.PrintList();

	/*MyDynamicArray.InsertAt(2, 500);
	cout << "\n\nArray after insert 500 at index 2 :";
	cout << "\nArray Size : " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertAtBeginning(400);
	cout << "\n\nArray after insert 400 at Begining:";
	cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertBefore(2, 500);
	cout << "\n\nArray after insert 500 before index 2:";
	cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertAfter(2, 600);
	cout << "\n\nArray after insert 600 after index 2:";
	cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();


	MyDynamicArray.InsertAtEnd(800);
	cout << "\n\nArray after insert 800 at End:";
	cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();*/


	//   clsMyQueueArr <int> MyQueue;
	//MyQueue.push(10);
	//MyQueue.push(20);
	//MyQueue.push(30);
	//MyQueue.push(40);
	//MyQueue.push(50);
	//cout << "\nQueue : \n";
	//MyQueue.Print();
	//cout << "\nQueue Size : " << MyQueue.Size();
	//cout << "\nQueue front : " << MyQueue.front();
	//cout << "\nQueue back : " << MyQueue.back();
	//MyQueue.pop();
	//cout << "\n\nQueue after pop() : \n";
	//MyQueue.Print();
	//// Extension #1
	//cout << "\n\nItem(2) : " << MyQueue.GetTtem(2);
	//// Extension #2
	//MyQueue.Reverse();
	//cout << "\n\nQueue after reverse() : \n";
	//MyQueue.Print();
	//// Extension #3
	//MyQueue.UpDateItem(2,600);
	//cout << "\n\nQueue after Updating Item(2) to 600 : \n";
	//MyQueue.Print();
	//// Extension #4
	//MyQueue.InserAfter(2, 800);
	//cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
	//MyQueue.Print();
	//// Extension #5
	//MyQueue.InsertAtFront(1000);
	//cout << "\n\nQueue after Inserting 1000 at front : \n";
	//MyQueue.Print();
	//// Extension #6
	//MyQueue.InsertAtBack(2000);
	//cout << "\n\nQueue after Inserting 2000 at back : \n";
	//MyQueue.Print();
	//// Extension #6
	//MyQueue.Clear();
	//cout << "\n\nQueue after Clear() : \n";
	//MyQueue.Print();

	clsMyStackArr <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	cout << "\nStack : \n";
	MyStack.Print();

	cout << "\nStack Size : " << MyStack.Size();
	cout << "\nStack Top : " << MyStack.Top();
	cout << "\nStack Bottom : " << MyStack.Bottom();

	MyStack.pop();
	cout << "\n\nStack after pop() : \n";
	MyStack.Print();

	// Extension #1
	cout << "\n\nItem(2) : " << MyStack.GetTtem(2);

	// Extension #2
	MyStack.Reverse();
	cout << "\n\nStack after reverse() : \n";
	MyStack.Print();

	// Extension #3
	MyStack.UpDateItem(2, 600);
	cout << "\n\nStack after Updating Item(2) to 600 : \n";
	MyStack.Print();

	// Extension #4
	MyStack.InserAfter(2, 800);
	cout << "\n\nStack after Inserting 800 after Item(2) : \n";
	MyStack.Print();

	// Extension #5
	MyStack.InsertAtFront(1000);
	cout << "\n\nStack after Inserting 1000 at front : \n";
	MyStack.Print();

	// Extension #6
	MyStack.InsertAtBack(2000);
	cout << "\n\nStack after Inserting 2000 at back : \n";
	MyStack.Print();

	// Extension #6
	MyStack.Clear();
	cout << "\n\nStack after Clear() : \n";
	MyStack.Print();

	//system("pause>0");
}
