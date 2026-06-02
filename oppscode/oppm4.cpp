//MESSAGE PASSING
/*#include <iostream>
using namespace std;
class Cars{
    void startengine(){
        cout<<"Engine started"<<endl;

    }
};
class Driver{
    public:
        void Drive(Cars &car)
        {
            car.startengine();
            cout<<"CAR IS BEING DRIVED"<<endl;

            }
};
int main(){
    Cars mycar;
    Driver driver;
    driver.drive(mycar);
}*/


//INLINE FUNCTION
/*#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int main(){
    cout<<"Sum: "<<add(3,5) << endl;

    return 0;
}*/



//COPY CONSTRUCTOR
#include<iostream>
using namespace std;
class Myclass{
    int x;
    float y;
public:
    Myclass() : x(0), y(2) {}
    Myclass(const Myclass &other) {
        x = other.x;
        y = other.y;
    }
    void display() {
        cout << "x: " << x << " y: " << y << endl;
    }
};
int main(){
    Myclass obj1;
    Myclass obj2=obj1; //copy constructor
    obj1.display();
    obj2.display();
    return 0;
}