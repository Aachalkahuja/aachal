#include<iostream>
using namespace std;

float cir(float r,const float pi=3.14)
{
    float ar;
    ar=pi*r*r;
    return (ar);
}
int main()
{
    float r,area;
    cout<<"enter the radius:"<<endl;
    cin>>r;
    area=cir(r);
    cout<<"area of circle is :"<<area;
    return 0;
}