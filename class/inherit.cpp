/*
 * 类的继承
 * 父类的构造器优先调用
 * 子类的析构器优先调用
 * 析构器在程序执行结束和del时调用
 */

#include<iostream>
#include"myhead.h"


//Animal子类
class Pig : public Animal
{
private:
    /* data */
public:
    Pig(std::string name);
    ~Pig();
    void dance();
};

Pig::Pig(std::string name)
{
    std::cout<<"- Create a pig named "<<name<<std::endl;
}

Pig::~Pig()
{
}

void Pig::dance()
{
    std::cout<<"- Alought I'm a pig, I can dance.\n";
}

class Monkey : public Animal
{
private:
    /* data */
public:
    Monkey(/* args */);
    ~Monkey();
    void climb();
};

Monkey::Monkey(/* args */)
{
}

Monkey::~Monkey()
{
}

void Monkey::climb()
{
    std::cout<<"- Every monkey can climb.\n";
}

class WildPig : public Pig
{
private:
    /* data */
public:
    WildPig(std::string name);
    ~WildPig();
    void attack();
};

WildPig::WildPig(std::string name):Pig(name)//继承父类的构造器
{
    std::cout<<"-- Now, there is a wild pig named "<<name<<std::endl;
}

WildPig::~WildPig()
{
}

void WildPig::attack()
{
    std::cout<<"-- Wild pig is dengerous.";
}


int main()
{
    std::string name1 = "peiqi";
    std::string name2 = "qiaozhi";

    Pig peiqi(name1);//子类1
    Monkey king;//子类2
    WildPig Qiaozhi(name2);//子类1的子类

    //调用父类方法
    peiqi.eat();
    king.sleep();
    Qiaozhi.eat();

    //调用子类方法
    peiqi.dance();
    king.climb();
    Qiaozhi.dance();
    
    Qiaozhi.attack();
}