//PROTECTED:one specified access is allowed and also protected can access our public elements
//PRIVATE:only the class itself can access its private elements
//PUBLIC:everyone can access our public elements
//FRIEND:fuction that exists in neither of the classes but help multiple classes objects to share data
/*#include <iostream>
using namespace std;
class two; // Forward declaration

class one {
    int a = 10;
    friend class two;
public:
    void show2()
    {
        cout << "Class one: " << a << endl;
    }
};

// Definition of class two
class two {
public:
    void show1(one& obj) {
        // Accessing private member 'a' of class one
        cout << "Class two accessing one.a: " << obj.a << endl;
    }
};

int main() {
    // Creates an instance of the 'one' class named 'o1'.
    one o1;
    o1.show2();
    two o2;
    o2.show1(o1);
    return 0;
}*/

#include <stdio.h>
  