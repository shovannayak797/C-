#include <iostream>  
using namespace std;  
int main()  
{  
int bin[10], dec, i;    
cout<<"Enter the number to convert: ";    
cin>>dec;    
for(i=0; dec>0; i++)    
{    
bin[i]=dec%2;    
dec= dec/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<bin[i];    
}    
}  