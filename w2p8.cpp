#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"ENTER TEMPERATUREE : ";
    cin>>temp;
    if(temp>=80)
        cout<<"SWIMMING";
        else if(temp<80 && temp>=60)
            cout<<"TENNIS";
    else if(temp<60&& temp>=40)
    cout<<"GOLF";
    else
    cout<<"SKIING";
    return 0 ;
}
        
    
