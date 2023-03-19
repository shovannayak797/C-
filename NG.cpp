#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, rNum=(rand()%100);
    
    
    while(n!=rNum){
        
    cout<<"Enter NO";
    cin>>n;
        if (n<rNum)
        {
            cout<<"\nEnter higher no\n";
        }
        else if(n>rNum)
        {
            cout<<"\nEnter Lower No\n";
        }
        else{
            cout<<"\nYou Win\n";
        }
        
    }
    
    
    return 0;
}

