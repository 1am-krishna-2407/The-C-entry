#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int sum=0;  
    int count;
    cout<<"Enter the size of the array";
    cin>>count;

    vector<int> a;
    a.resize(count);
    for (int i=0;i<a.size(); i++){
        a[i]=i;
        sum+=a[i];
    }
    cout<<"Array sum: "<<sum<<endl;
    return 0;
}