//CREATE 2 CLASSES HERO AND VILLIAN GIVE THEM ATTRIBUTES POWER is private ,CREATE ANOTHER CLASS "COMPARISON"THAT WILL HAVE A METHOD TO CHECK WHOM AMONG HERI AND VILLIAN MORE POWERFUL
/*#include<iostream>
using namespace std;
class hero{
    private:
    int power;
    public:
    void setpower(int p){
        power=p;
    }
    friend class comparison;
};
class villian{
    private:
    int power;
    public:
    void setpower(int p){
        power=p;
    }
    friend class comparison;
};
class comparison{
    public:
    void compare(hero h,villian v){
        if(h.power>v.power){
            cout<<"hero is more powerful";
        }else{
            cout<<"villian is more powerful";
        }
    }
};
int main(){
    hero h;
    villian v;
    h.setpower(300);
    v.setpower(200);                                            ,. 
    comparison c;
    c.compare(h,v);
    return 0;
}
*/
//WHAT ARE ABSTRACT CLASSES?
//ABSTRACT CLASS ONLY PASSING NESSCESSARY DATA FROM A PARENT CLASS TO A CHILD CLASS

//WHAT IS INTERFACES IN OPPS ?

/*#include<iostream>
using namespace std;
class Base{
    public:
    void sample(){
        cout<<"this is base class."<<endl;
    }
};*/

#include<iostream>
using namespace std;
class myfriend{
    virtual void myshoes()=0;
};
int main(){
     void myshoes() override{
        cout<<"these are my shoes now ";
         

    }
};
int main