#include <iostream>
#include <cstdint>
#include <math.h>
#define SIZE 10

class Power
{
private:
	double num_1;
	double num_2;
public:
	Power() 
	{
		num_1 = 0;
		num_2 = 0;
	}

	void setNum(double valueNum_1, double valueNum_2)
	{
		 num_1 = valueNum_1;
		 num_2 = valueNum_2;
	}
	void calculate()
	{
		
		std::cout << pow(num_1, num_2) << ::std::endl;
	}
	


};

class RGBA 
{
private:
	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;
public:
	RGBA(uint8_t valueM_red, uint8_t valueM_green, uint8_t valueM_blue, uint8_t valueM_alpha) : m_red(valueM_red), m_green(valueM_green), m_blue(valueM_blue), m_alpha(valueM_alpha)
	{

	}
	
	void Print() 
	{
		std::cout << "m_red = " << m_red << "\tm_green = " << m_green << "\tm_blue = " << m_blue << "\tm_alpha = " << m_alpha << std::endl;

	}
	~RGBA() {}
};

class Stack 
{
private:
	int Stack[SIZE];
	int length = 0;
public:
	void reset()
	{
		length = 0;
		for (int  i = 0; i < SIZE; ++i)
		{
			Stack[i] = 0;
		}
	}
	bool push(int data) 
	{
		if (length != SIZE)
		{
			Stack[length++] = data;
			return true;
		}
		else
			std::cout << "Stack overflow" << std::endl;
		return false;
	
	}
	void pop() 
	{
		if (length != 0)
		{
			 Stack[length--];
		}
		else 
		{
			std::cout << "Stack is empty" << ::std::endl;
			
		}

	}
	void Print() 
	{
		for (int  i = 0; i < length; ++i)
	
		{
			std::cout<< Stack[i]<<"\t";
		}
		std::cout << std::endl;
	}

};
int main()
{
	Power result;
	result.setNum(2.6, 5.2);
	result.calculate();
	RGBA Values(5, 2, 9, 22);
	Values.Print();
	Stack stack;
	stack.reset();
	stack.Print();
	stack.push(3);
	stack.push(5);
	stack.push(7);
	stack.Print();
	stack.pop();
	stack.Print();
	stack.pop();
	stack.pop();
	stack.Print();
	return 0;

}

