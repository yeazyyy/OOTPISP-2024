# ������������ ������ �2 #

## ������������ � ����������� ������� ##

## ������� 4 ##
 

## ���� ������ ##
�������� ������������ ������ �������� �������� ������� � ������������� ����������� ����������� ������


### ����������� �������� ������ ###
```
Detail::Detail(const std::string& _name, const bool _is_metal) : name(_name), is_metal(_is_metal)
{
	this->Add();
}
```

#### ����������� ���������� ������ ####

```
	static Detail *begin;
	static Detail *last;
```

#### ���������� ������ ��� ��������� ������ ####

```
void Detail::ShowDetails()
{
	Detail* ptr= begin;
	while (ptr != nullptr)
	{
		ptr->Print();
		std::cout << std::endl;
		ptr = ptr->next;
	}
}
```
#### ���������� ������ ��� ���������� ������� � ������ ####

```
void Detail::Add()
{
	if (begin == nullptr)
	{
		begin = this;
	}
	next = nullptr;
	if (last != nullptr)
	{
		last->SetNext(this);
	}
	last = this;
}
```

#### ���� ������� �� ����� ������������, �� ��������� �� �������������� ####

