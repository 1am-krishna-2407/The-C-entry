#include<iostream>
#include<vector>
using namespace std;
#define MAX 100
int main(){vector<int> arr(MAX);
cout<< "Enter the no. of the elements: ";
int count;
int sum=0;
cin>>count;
for (int i=0; i<count; i++){
    arr[i]=i;
    sum+=arr[i];

} 
cout<<"Array of the sum: "<<sum<<endl;

}
