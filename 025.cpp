#include<iostream>
using namespace std;
int main(){
    int a[100000];
    int n;
     int flag=0;
     int start=0;
     int sum=0;
    cout<<"No. of elements in the array"<<endl;
    cin>>n;
    int s;
    cin>>s;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
     for (int i=0; i<n; i++){
        sum=sum + a[i];
        while(sum>s){
            sum=  sum-a[start];
            start++;
        }
        if (sum==s){
            cout<<start+1<<" "<<i+1;
            flag=1;
            break;
        }
    
     }
     if (flag==0){
        cout<<-1<<endl;
     }
} 

