#include <iostream> 
class Animal {
protected:
	std::string name_;
	int weight_;
public:
	Animal() = default;
	Animal(std::string name, int weight) : name_(name), weight_(weight)
	{

	}
	virtual void Print() = 0;
};
struct IAnimal
{
	virtual void Eat() = 0;
	virtual void Move() = 0;
};
struct IBird
{
	virtual void Fly() = 0;
};
struct ISwim
{
	virtual void Swim() = 0;
};
class Cat : public Animal, public IAnimal
{
	std::string color_;
public:
	Cat(std::string name, int weight, std::string color) : Animal(name, weight)
	{
		color_ = color;

	}
	void Print()
	{
		std::cout << "Name: " << name_ << "\n";
		std::cout << "Weight: " << weight_ << "\n";
		std::cout << "Color: " << color_ << "\n";
	}
	void Eat()
	{
		std::cout << "Cat Eat \n";
	}
	void Move()
	{
		std::cout << "Cat Moves \n";
	}
};
class Parrot : public Animal, public IAnimal, public IBird
{
public:
	Parrot(std::string name, int weight) : Animal(name, weight)
	{

	}
	void Print()
	{
		std::cout << "Name: " << name_ << "\n";
		std::cout << "Weight: " << weight_ << "\n";
	}
	void Eat() {
		std::cout << "Parrot Eat \n";
	}
	void Move()
	{
		std::cout << "Parrot Moves \n";
	}
	void Fly()
	{
		std::cout << "Parrot Flies \n";
	}
private:
};
class Penguin : public Animal, public ISwim
{
public:
	Penguin(std::string name, int weight) : Animal(name, weight)
	{

	}
	void Print()
	{
		std::cout << "Name: " << name_ << "\n";
		std::cout << "Weight: " << weight_ << "\n";
	}
	void Eat() { std::cout << "Penguin Eat \n"; }
	void Move() { std::cout << "Penguin Moves \n"; }
	void Swim() { std::cout << "Penguin Swim \n"; }
private:
};
class Elephant : public Animal, public IAnimal
{
public:
	Elephant(std::string name, int weight) : Animal(name, weight)
	{

	}
	void Print()
	{
		std::cout << "Name: " << name_ << "\n";
		std::cout << "Weight: " << weight_ << "\n";
	}
	void Eat() { std::cout << "Elephant Eat \n"; }
	void Move() { std::cout << "Elephant Moves \n"; }
private:
};
class Duck : public Animal, public IBird, public ISwim
{
public:
	Duck(std::string name, int weight) : Animal(name, weight)
	{

	}
	void Print()
	{
		std::cout << "Name: " << name_ << "\n";
		std::cout << "Weight: " << weight_ << "\n";
	}
	void Eat() { std::cout << "Duck Eat \n"; }
	void Move() { std::cout << "Duck Moves \n"; }
	void Fly() { std::cout << "Duck Flies \n"; }
	void Swim() { std::cout << "Duck Swim \n"; }
private:
};
int main()
{
	IAnimal* ref = new Cat("Cat", 3, "White");
	ref->Eat();
	ref->Move();
	ref = new Parrot("Ara", 2);
	ref->Eat();
	ref->Move();
	IBird* Ara = new Parrot("Ara", 3);
	Ara->Fly();
	ISwim* Pengui = new Penguin("Torwald", 5);
	Pengui->Swim();
	IAnimal* Elephan = new Elephant("Artem", 2);
	Elephan->Eat();
	IBird* Ducks = new Duck("Ara", 3);
	Ducks->Fly();
}