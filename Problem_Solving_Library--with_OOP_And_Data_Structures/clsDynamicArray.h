#pragma once

template <typename T>
class clsDynamicArray
{
private:
	int _Size = 0;
	T* _TempArray;
public:
	T* OriginalArray;

	clsDynamicArray(int Size = 0) : _TempArray(nullptr)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;

		OriginalArray = new T[_Size];
	}

	~clsDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int index, T value)
	{
		if (index >= _Size)
			return false;

		OriginalArray[index] = value;
		return true;
	}

	bool IsEmpty()
	{
		return (_Size == 0);
	}

	int Size()
	{
		return _Size;
	}

	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << endl;
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		if (NewSize == _Size) return;

		_TempArray = new T[NewSize];

		if (_Size > NewSize)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;

	}

	T GetItem(int index)
	{
		if (_Size > index && index >= 0)
			return OriginalArray[index];
		else
			throw out_of_range("Index is out of range.");
	}

	void Reverse()
	{
		if (!IsEmpty())
		{
			_TempArray = new T[_Size];

			for (int i = 0; i < _Size; i++)
			{
				_TempArray[_Size - 1 - i] = OriginalArray[i];
			}
			delete[] OriginalArray;
			OriginalArray = _TempArray;
		}

	}

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	// solution 1 for delete Item with index 
	//bool DeleteItemAt(int index)
	//{
	//	if (_Size <= index || index < 0) return false;
	//	
	//	--_Size;
	//	_TempArray = new T[_Size];
	//	for (int i = 0; i < index; i++)
	//	{
	//		_TempArray[i] == OriginalArray[i];
	//	}
	//	for (int i = index+1; i < _Size; i++)
	//	{
	//		_TempArray[i - 1] = OriginalArray[1];
	//	}
	//	delete[] OriginalArray;
	//	OriginalArray = _TempArray;
	//	return true;
	//}

	/*The second function for delete Item with index is better because it is :
	# More clear and easier to read.
	# Uses only one loop, making it more efficient.
	# Simplifies the copying process without the need for additional calculations.
	*/
	bool DeleteItemAt(int index)
	{
		if (_Size > index && index >= 0)
		{
			_TempArray = new T[_Size - 1];
			int counter = 0;
			for (int i = 0; i < _Size; i++)
			{
				if (index == i) continue;
				_TempArray[counter] = OriginalArray[i];
				++counter;
			}
			delete[] OriginalArray;
			OriginalArray = _TempArray;
			--_Size;
			return true;
		}
		return false;
	}

	bool DeleteFirstItem()
	{
		if (_Size > 0)
		{
			DeleteItemAt(0);
			return true;
		}
		return false;
	}
	bool DeleteLastItem()
	{
		if (_Size > 0)
		{
			DeleteItemAt(_Size - 1);
			return true;
		}
		return false;
	}

	int Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (value == OriginalArray[i])
				return i;
		}
		return -1;
	}

	bool DeleteItem(T value)
	{
		int index = Find(value);
		if (index != -1)
		{
			DeleteItemAt(index);
			return true;
		}
		return false;
	}
};

