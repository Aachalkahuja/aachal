#include<iostream>
using namespace std;

class person
{
    char name[30];
    int age;
    public:
    void getdata(void);
    void display(void);
};
void person::getdata(void)
{
    cout<<"\n enter name:";
    cin>>name;
    cout<<"\n enter age:";
    cin>>age;
}
void person::display(void)
{
    cout<<"\n enter name:"<<name<<endl;
    cout<<"\n enter age:"<<age<<endl;
}

int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}