#include <iostream>
using namespace std;
  
int main() {
    float fahren, celsius;
    int opt;
    cout<<"Press 1 for F2C // Press 2 for C2F"<<endl;
    cin>>opt;
    switch(opt){
        case 1:
            cout<<"Enter temp in F :";
            cin>>fahren;
            celsius = 5 * (fahren - 32) / 9;
            cout << celsius <<" Centigrade";
            break;
        case 2:
        cout<<"Enter temp in C :";
        cin>>celsius;
            fahren =(9*celsius +160)/5;
            cout<< fahren<<"celsius";
            break;
    
    }
     

      
    return 0;
}
