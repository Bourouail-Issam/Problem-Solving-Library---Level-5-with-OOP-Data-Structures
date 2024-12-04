#pragma once
#include "clsDynamicArray.h"

using namespace std;
template <typename T>

class clsMyQueueArr
{
protected:
	clsDynamicArray <T> _MyList;

public:
	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyList.DeleteFirstItem();
	}

	void Print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	T GetTtem(int index)
	{
		return _MyList.GetItem(index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpDateItem(int index, T NewValue)
	{
		_MyList.SetItem(index, NewValue);
	}

	void InserAfter(int index, T NewValue)
	{
		_MyList.InsertAfter(index, NewValue);
	}

	void InsertAtFront(T NewValue)
	{
		_MyList.InsertAtBeginning(NewValue);
	}

	void InsertAtBack(T NewValue)
	{
		_MyList.InsertAtEnd(NewValue);
	}

	void Clear()
	{
		_MyList.Clear();
	}
};

