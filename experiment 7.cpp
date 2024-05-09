#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void getvalue()
    {
       cout<<"enter value of a and b"<<endl;
       cin>>a>>b;
    }
    void operator+()
    {
       a = +a;
       b =  +b;
    }
void operator-()
    {
       a = -a;
       b =  -b;
    }
    void display()
    {
      cout<<a<<"+"<<b<<"i"<<endl;
    }
    
    complex operator +(complex object);
    complex operator -(complex object);
};
complex complex :: operator+(complex object)
{
    complex t;
    t.a = a + object.a;
     t.b = b + object.b;
     return (t);
}
complex complex :: operator-(complex object)
{
    complex t;
    t.a = a - object.a;
     t.b = b - object.b;
     return (t);
}
int main()
{
   complex c1,c2,result,result1;
   c1.getvalue(); 
   c2.getvalue();
   
   cout<<".....................\n"<<endl;
   c1.display();
   c2.display();
    cout<<".....................\n"<<endl;
    result = c1 +c2;
    result1 = c1 - c2;
    cout<<".....................\n"<<endl;
   result.display();
   result1.display();

   return 0;
}
