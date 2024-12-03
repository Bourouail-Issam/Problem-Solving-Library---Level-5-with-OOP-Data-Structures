#pragma once

template <typename T>
class clsDynamicArray
{
private:
	int _Size = 0;
	T* _TempArray;
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

};

