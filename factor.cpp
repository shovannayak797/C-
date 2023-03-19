#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
       if (num%i==0)
       {
         cout<<"factor is : "<<i<<"\n";
       }
       
    }
    
    return 0;
}
