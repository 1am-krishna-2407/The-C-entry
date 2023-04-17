#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;
    void print(){
        cout<< level<<endl;

    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    // static allocation
    Hero a;
    cout<< "level is " <<a.level<<endl;
    cout<<" health is "<<a.getHealth()<<endl;
    // dynamically 
    Hero *b= new Hero;
    cout<< " level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;
    
    cout<<" level is "<< b-> level<<endl;
    cout<<"health is "<<b->getHealth()<<endl;
}
//  in case of an empty class the memory allocated to the class is 1 byte

