
# ������������ ������ �1 #

## ������ � ������� � �++ ##

## ������� 4 ##
 

## ���� ������ ##
�������� ������������ ������ ���������� ������� �� �++.


### ����� � ����� ���������� ������������� � ����������� ###
```c++
Product::Product()
{
	std::cout << "The default constructor was called " << this << std::endl;
}

Product::Product(const std::string& n_name, const std::string& n_code, const int n_amount)
	: name(n_name), code(n_code), amount(n_amount)
{
	std::cout << "Constructor with params was called " << this << std::endl;
}

```

### �������� ���������, ������������ ������������� ��������� �� ������ � ��������� �� ������� ###

#### ��������� �� ������ ####

```c++
std::cout << box[1]->getName() << std::endl;
```

#### � �������e box ���������� ����� �������. ����� ���������� ����� getName ������ Product. ����� ���������� ��� �������. ####

#### ��������� �� ������� ####

```c++
void (Product:: * current_fun)() const;
	
	current_fun = &Product::print;

	(ware.*current_fun)();
```

#### ����� ������� print ������������ � ��������� �� �������. ����� ������ ware �������������� ��������� � �������� ������� print ####
