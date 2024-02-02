#include<iostream>
using namespace std;
int main()
{
    int n , dis,amt =0;
    cout<<"ENTER QUANTITY OF ITEMS PURCHASED";
    cin>>n;
    amt = n*100;
    if(amt>=1000)
    {
        dis = amt- (amt/10);
    }
    cout<<"FINAL AMOUNT :"<<dis;
    return 0;
    }