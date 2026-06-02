/*#include<iostream>
using namespace std;
class Car
{
    public:
    string brand;
    string model;

    char_traits(){                                                                                                                                                   
        brand="unknown";
        model="unknown";
    }
    car(string b,string m){
        brand=b;
        model=m;
    }
};
int main(){
    Car car1;
     Car car2("BMW","X5");
      Car car3("FORD","MUSTANG");
      cout<<"Car1:"<<car1.brand<<""<<car1.model<<"\n";
      cout<<"car2:"<<car2.brand<<""<<car2.model<<"\n";
      cout<<"car3:"<<car3.brand<<""<<car3.model;
        return 0;}
        */
/*#include <iostream>
using namespace std;
class myfrind;



int main()
{
    One A;
    Two B;
    A.input(20);
    B.input(50);
    add(A, B);
    return 0;

}*/

//CREATE A FRIEND FUNCTION THAT MULIPLES THE DATA OF TWO CLASSES
/*#include <iostream>
using namespace std;
class ankit; // Forward declaration

class rajiv { // Definition of class rajiv
    int b = 5;
    friend void multiply(ankit, rajiv); // Friend function declaration
public:
    void show() {
        cout << "Class rajiv: " << b << endl;
    }
};

class ankit {
    int a = 10;
    friend void multiply(ankit, rajiv); // Friend function declaration
public:
    void show() {
        cout << "Class ankit: " << a << endl;
    }
};

void multiply(ankit obj1, rajiv obj2) { // Definition of friend function
    int result = obj1.a * obj2.b;
    cout << "Multiplication result: " << result << endl;
}

int main() {
    ankit obj1;
    rajiv obj2;
    multiply(obj1, obj2);
    return 0;
};*/