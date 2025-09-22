#include<iostream>
using namespace std;
class parents{
    public:
    int n;
    void display(){
        cout<<"This is parent class"<<endl;
    }
};
class child1:public parents{
    public:
    void display(){
     
        cout<<"This is child1 class"<<endl;
    }
};


#include<iostream>
using namespace std;
class vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<<"Tuut, tuut!"<<endl;
    }
};
class car:public vehicle{
    public:
    string model="Mustang";
};  
int main(){
    car mycar;
    mycar.honk();
    cout<<mycar.brand+" "+mycar.model<<endl;
    return 0;
};

