#include<iostream>
using namespace std;

void swap(int*x,int*y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main()
{
    int x=500,y=100;
    cout<<"value of x is:"<<x<<endl;
    cout<<"value of y is:"<<x<<endl;
    cout<<"after swapping\n";
    cout<<"value of x is:"<<x<<endl;
    cout<<"value of y is:"<<x<<endl;
    cout<<"after swapping\n"; 
    swap(&x,&y);
    cout<<"value of x is:"<<x<<endl;
    cout<<"value of y is:"<<x<<endl;
    cout<<"value of x is:"<<x<<endl;
    cout<<"value of y is:"<<x<<endl;
    return 0;
}