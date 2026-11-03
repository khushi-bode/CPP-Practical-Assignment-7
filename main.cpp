#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

    virtual ~Animal() = default;
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    // Base-class pointer demonstrates runtime polymorphism.
    Animal* animal = nullptr;

    animal = &dog;
    animal->sound();

    animal = &cat;
    animal->sound();

    return 0;
}
