#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the limit: ";
    cin>> n;
    int sum=0;
    for (int i=0; i<=n;++i)
    sum=sum+i;
    cout<<"Sum of all the numbers "<<sum;
    return 0;
}
