#include <iostream>
#include <string>

class Animal {
public:
    std::string name;
    int age;
    
    void eat() {
        std::cout << "The animal is eating." << std::endl;
    }
     void sleep() {
        std::cout << "The animal is sleeping." << std::endl;
    }
};

class Mammal : public Animal {
public:
    void giveBirth() {
        std::cout << "The mammal is giving birth." << std::endl;
    }
};

class Cat : public Mammal {
public:
    void meow() {
        std::cout << "The cat is meowing." << std::endl;
    }
    
};  

class Dog :  public Mammal {
public:
    void bark() {
        std::cout << "The dog is barking." << std::endl;
    }
    
};

class DomesticDog : public Dog {
public:
    void wagTail() {
        std::cout << "The domestic dog is wagging its tail." << std::endl;
    }
};

class Poodle : public DomesticDog {
public:
    void performTrick() {
        std::cout << "The poodle is performing a trick." << std::endl;
    }
};

class ToyPoodle : public Poodle {
public:
    void beCute() {
        std::cout << "The toy poodle is being cute." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.name = "Chapa";
    dog.age = 2;
    Cat cat;
    cat.name = "Murka";
    cat.age = 3;
    
    dog.eat();
    dog.bark();
    dog.giveBirth();
    dog.performTrick();
    dog.eat();
    dog.sleep();
    
    cat.sleep();
    cat.meow();
    cat.giveBirth();

    return 0;
}

    