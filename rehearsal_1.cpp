#include<iostream>
using namespace std;

int main(){
    float G=3.50, s=0;
    string Name;

    cout<<"What is your name?: ";
    cin>>Name;
    cout<<"whait is your GPA?: ";
    cin>>s;
    if (s>=G)
    {
        cout<<Name<<" Inw jrim jrim!!!";
    }
    else
    {
        cout<<"Try harder, "<< Name;
    }
    
    return 0;

}
