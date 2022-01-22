#ifndef MYHEAD_H_
#define MYHEAD_H_

#include<iostream>

class Animal
{
private:
    /* data */
public:
    Animal(/* args */);
    ~Animal();
    void eat();
    void sleep();
};

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}

void Animal::eat()
{
    std::cout<<"I'm eating\n";
}
void Animal::sleep()
{
    std::cout<<"I'm sleeping\n";
}


#endif