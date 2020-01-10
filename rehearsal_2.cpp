#include<iostream>
using namespace std;

int main(){
    float x,sum=0;

    cout<<"Enter x: ";
    cin>>x;
    
    while (x!=0)
    {
        sum=sum+x;
        cout<<"Enter x: ";
        cin>>x;
        
    }

    if (x==0)
    {
        sum=sum+x;
        cout<<"sum = "<<sum;
    }

    
    
    
    return 0;

}
