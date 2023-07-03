#include <iostream>
//������������ 

class Base {
public:
	int publicMember;
	Base() 
	{ 
		std::cout << this << " Base object created\n";
	}
	Base(int a, int b, int c) : publicMember(a), protectedMember(b), privateMember(c)
	{
		std::cout << this << " Base object created\n";
	}
	~Base() 
	{
		std::cout << this << " Base object destructor\n";
	}
protected:
	int protectedMember;
private:
	int privateMember;
};



class Derived : public Base {

	//publicMember - ������� ��������� 
	//protectedMember - ����������� ��������� 
	//privateMember - ���������� 
	int selfState;
public:
	Derived() : Base()
	{
		std::cout << this << " Derived Base object created\n";
	}
	Derived(int a, int b, int c) : Base(a, b, c)
	{
		std::cout << this << " Derived Base object created\n";
	}
	~Derived() 
	{
		std::cout << this << " Derived Base object destructor\n";
	}
};

class Derived2 : protected Base 
{
	//publicMember � protectedMember ���������� ���������� 
	//privateMember ���������� 
	void bar() {
		this->protectedMember;
		this->publicMember;
	}
public:
	Derived2() 
	{
		std::cout << this << " Derived2 Base object created\n";
	}
	~Derived2() 
	{
		std::cout << this << " Derived2 Base object destructor\n";
	}

public:
	int pole;

};

class Derived3 : private Base 
{
	//publicMember � protectedMember ���������� ���������� 
	//privateMember ���������� 


public:
	Derived3() 
	{
		std::cout << this <<  " Derived3 Base object created\n";
	}
	~Derived3() 
	{
		std::cout << this << " Derived3 Base object destructor\n";
	}
};

class 

int main() 
{
	Base obj(2, 5, 7);
	obj.publicMember;
	Derived ojbDer;
	obj.publicMember;
	Derived2 ojbDer2;
	ojbDer2.pole;
	Derived3 ojbDer3;



	return 0;
}
// ������� ������� ������ ��� �������� � ������ 
// ������ 
// ����� ����� ������ ������������� ����������� :
// ������������� �������� ��� �������� (������� ��� ��������)
// ������ ���� ��� � ���� (��� �� ����� ������ ��� ��������)
// ������� ����� �������� ������ ����� ����� � ���� ������ 
// �������, ���������, ������� 
// ���� � ������� �� �� ����� ���� ������ 