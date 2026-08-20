#include <bits/stdc++.h>
#include <iostream>

class Animal
{
    public:
        virtual ~Animal()
        {

        };
        virtual void speak()
        {
            std::cout << "Animal falando!" << std::endl;             
        }
};

class Dog : public Animal
{
    public:
        void speak()
        {
            std::cout << "Dog, au au!" << std::endl;
        }
};

class Cat : public Animal
{
    public:
        void speak()
        {
            std::cout << "Dog, miaw!" << std::endl;
        }
};

int main()
{
    char b = 'a';
    int i = static_cast<int>(b);
    std::cout << typeid(b).name() << "->" << typeid(i).name() << std::endl;

    Animal *animal = new Dog();
    Dog *dog = dynamic_cast<Dog *>(animal);

    if (dog)
        dog->speak();
    else
        std::cout << "Erro!" << std::endl;

    Cat *cat = dynamic_cast<Cat *>(animal);

    if (cat)
        cat->speak();
    else
        std::cout << "Erro!" << std::endl;

     int n = 12;

    const int *ptr = &n;
    int *num = const_cast<int *>(ptr);
    std::cout << *num << std::endl;

    int nb = 97;

    int *nmptr = &nb;
    char *ch = reinterpret_cast <char *>(nmptr);
    std::cout << *ch << " " << *nmptr << std::endl; 
    return (0); 
}