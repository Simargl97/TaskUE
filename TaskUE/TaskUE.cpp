#include <iostream>
#include <cmath>
#include <vector>
#include <string>

//TASK 18

class Stack {
private:
    std::vector<std::string> elements;
        
public:
    void push(const std::string& item) {
        elements.push_back(item);
    }
        
    std::string pop() {
        if (elements.empty()) {
            std::cout << "Stack is empty\n";
            return "";
        }
        else {
            std::string top = elements.back();
            elements.pop_back();
            return top;
        }
    }
};

//TASK 17

class Vector
{
public:
    Vector() : x(3), y(3), z(3)
    {}
    Vector(double x, double y, double z) : x(x), y(y), z(z)
    {}

    double Length() 
    {
        return std::sqrt(x*x + y*y + z*z);
    }
    void Show()
    {
        std::cout << '\n' << x << ' ' << y << ' ' << z ;
    }
    
private:
    double x;
    double y;
    double z;
};

// TASK 19

class Animal {
public:
    virtual void Voice() { 
        std::cout << "Animal voice!" << std::endl;
    }
};


class Dog : public Animal {
public:
    void Voice() override {  
        std::cout << "Woof!" << std::endl;
    }
};


class Cat : public Animal {
public:
    void Voice() override {
        std::cout << "Meow!" << std::endl;
    }
};


class Bird : public Animal {
public:
    void Voice() override {
        std::cout << "Chirp!" << std::endl;
    }
};

int main()
{
    Vector v;
    v.Show();
    std::cout << '\n' << v.Length() << '\n';

    std::vector<Animal*> animals; 

    animals.push_back(new Dog()); 
    animals.push_back(new Cat());
    animals.push_back(new Bird());

  
    for(auto animal : animals) {
        animal->Voice();
    }
    
    for(auto animal : animals) {
        delete animal;
    }

    return 0;
}