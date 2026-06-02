//multilevel inheritance
/*#include<iostream>
using namespace std;
class Animal{
    public:
    void eat()
    {
        cout<<"this animal eats food"<<endl;

    }
};
class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"the dog barks"<<endl;
    }
};
int main(){
    Dog dog1;
    dog1.eat();
    dog1.bark();
    return 0;
}/*


//MULTIPLE INHERTANCE:
//WHEN A CLASS IS DERIVED FROM MORE THAN ONE BASE CLASS
/*#include<iostream>
using namespace std;
class paternt1{
    public:
    void color()
    {
        cout<<"color is black"<<endl;

    }
};
class paternt2{
    public:
    void eye()
    {
        cout<<"eye color is blue "<<endl;
    }
};
class child:public paternt1,public paternt2
{
    public:
    void result()
    {
        cout<<"this is child look like"<<endl;
    }
};
int main(){
    child A;
    A.result();
    A.eye();
    A.color();
    return 0;
}*/


//HYBRID INHERITANCE:
/*#include<iostream>
using namespace std;
class vehicle{
    public:
    void display()
    {
        cout<<"this is vehicle"<<endl;

    }
}; 
class fare
{
    public:
    fare()
    {
        cout<<"this is fare of vehicle"<<endl;
    }
};
class car:public vehicle
{
    public:
    void car1()
    {
        cout<<"this car is vehilce"<<endl;
    }
};
class bus:public vehicle
{
    public:
    void bus1()
    {
        cout<<"this bus is vehicle"<<endl;
    }
};
int main(){
    bus obj2;
    return 0;
}*/

//question 1:
//class animal with publice function eat()with cout "this animal eats food"
//class bird with public fuction wings with cout "bird is flying"
/*#include<iostream>
using namespace std;
class animal{
    public:
    void eat()
    {
        cout<<"this animal eats food"<<endl;

    }
};
class bird:virtual public animal
{
    public:
    void wings()
    {
        cout<<"bird is flying"<<endl;
    }
};
class mammal:virtual public animal
{
    public:
    void legs()
    {
        cout<<"mammal has 4 legs"<<endl;
    }
};
class bat:public bird,public mammal
{
    public:
    void color()
    {
        cout<<"bat is flying at night"<<endl;
    }
};
int main(){
    bat b;
    b.eat();
    b.wings();
    b.legs();
    b.color();
    return 0;
}*/

//HIERARCHICAL INHERITANCE:
#include<iostream>
using namespace std;
class Animal{
    public:
    void eat()
    {
        cout<<"this animal eats food"<<endl;

    }
};
class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"the dog barks"<<endl;
    }
};
class cat:public Animal
{
    public:
    void meow()
    {
        cout<<"the cat meows"<<endl;
    }
};
int main(){
    Dog dog1;
    dog1.eat();
    dog1.bark();
    cat cat1;
    cat1.eat();
    cat1.meow();
    return 0;
};



