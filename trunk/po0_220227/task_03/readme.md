# ������������ ������ �3 #

## ������� ���������� �������� � �������� ��������� ���������� � C++ ##

## ������� 12 ##
 

## ���� ������ ##
�������� ������ ���������� �������� � ��������� ��������� ���������� � C++. 

### ��������� ���������� � ProgrammError *operator[](const int index) ###
```c++
	try {
		if (index < 0 || index >= size)
			throw  "your index is out of range\nReturn empty element";
		Item* ptr = begin;
		for (int i = 0; i < index; i++)
		{
			ptr = ptr->next;
		}
		return ptr->number;
	}
	catch (const char* error_message)
	{
		std::cout << error_message << std::endl;
		Number number;
		return &number;
	}
```

### ���������� ���������� ������ Number ###

```c++
bool Number::operator == (const Number other) const
{
	if (this->designating == other.designating)
		return true;
	return false;
}
```

### ���������� ���������� ������ Integer ###

```c++
bool Integer::operator == (const Integer other) const
{
	if (this->value == other.value)
		return true;
	return false;
}
```

### ���������� ���������� ������ Real ###

```c++
bool Real::operator == (const Real other) const
{
	if (this->value == other.value)
		return true;
	return false;
}
```

### ���������� ���������� ������ Complex ###

```c++
bool Complex::operator == (const Complex other) const
{
	if (this->realPart == other.realPart && this->imaginaryPart == other.imaginaryPart)
		return true;
	return false;
}
```

