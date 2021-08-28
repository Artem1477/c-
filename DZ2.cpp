#include <iostream>
#include <string>



class Person
{
private:
	std::string name;
	int age;
	std::string gender;
	int weight;
public:	
	static int counter;
	Person()
	{
	   counter++;
	}

	void setPerson(std::string name, int age, std::string gender, int weight)
	{
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->weight = weight;
	
	}
	std::string getName() const{ return name; }
	int getAge() const { return age; }
	std::string getGender() const { return gender; }
	int getWeight() const { return weight; }

};

int Person::counter = 0;
class Student : public Person
{
private:
	int year_of_study;
	
public:

		void setYear_of_study(int year_of_study) 
		{
			this->year_of_study = year_of_study;
		}
		void Print(const Student &student)
		{
			std::cout << "Name " << student.getName() << "\tage " << student.getAge() << "\tgender " << student.getGender()
				<< "\tYear of study " <<student.getYear_of_study()<< std::endl;
			std::cout << "number of students " << student.counter <<"\n\n";

		}
		int getYear_of_study() const { return year_of_study; }

	
};

class Fruit
{
private:
	std::string name;
	std::string color;
	
public:

	Fruit() {};
	Fruit(std::string color) : color(color) {}

	void setName(std::string name)
	{
		this->name = name;
	}
	void setColor(std::string color)
	{
		this->color = color;
	}
	std::string getName() const
	{
		return  name;
	}
	std::string getColor() const
	{
		return  color;
	}
};

class Banana : public Fruit
{
public:
	Banana() 
	{
		setName("Banana");
		setColor("yellow");
	}

private:

};
class Apple : public Fruit
{
public:
	Apple() {};
	Apple(std::string color):Fruit(color)
	{
			setName("Apple");
	};


private:

};

class GrannySmith : public Apple
{
public:
	GrannySmith() 
	{
		setName("Granny Smith");
		setColor("green");
	};


private:

};




int main()
{
	Student student1;
	Student student2;
	student1.setPerson("Alex", 20, "Man", 75);
	student1.setYear_of_study(3);
	student1.Print(student1);
	student2.setPerson("Petya", 22, "Man", 83);
	student2.setYear_of_study(1);
	student2.Print(student2);
	Apple a("red");
	Banana b;
	GrannySmith c;
	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My "<<b.getName()<< " is "<<b.getColor()<<".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
	

	return 0;
}

