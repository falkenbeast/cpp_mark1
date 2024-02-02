#include<iostream>
using namespace std;
int main()
{
    double height , weight, bmi;
cout<<"ENTER HEIGHT IN METRES :";
    cin>>height;
    cout<<"ENTER WEIGHT IN KG : ";
        cin>>weight;
        bmi = weight/(height*height);
        cout<<bmi;
        return 0;
}