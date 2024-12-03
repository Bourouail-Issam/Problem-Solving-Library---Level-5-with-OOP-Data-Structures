#pragma once

template <typename T>
class clsDynamicArray
{
private:
	int _Size = 0;

public:
	T* OriginalArray;

	clsDynamicArray(int Size = 0)
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
		return (_Size = 0);
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
	}
};

