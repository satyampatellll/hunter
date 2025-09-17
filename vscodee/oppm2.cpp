#include<iostream>
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