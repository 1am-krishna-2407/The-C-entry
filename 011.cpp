#include<iostream>
using namespace std;
int main(){
    int  a[6];
    a[0]=13;
    a[1]=15;
    a[2]=17;
    a[3]=18;
    a[4]= 20;
    a[5]=45;
    cout<<"The elements of the array are as follows"<<a<<endl;
    //  This prints the address of the firstr element of the array
    //  if &a id used the address of the whole array is displayed and it is equal to the address of the first element.
    cout<<"The elements of the array are as follows"<<&a<<endl;
    return 0;
}