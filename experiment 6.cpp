#include<iostream>
using namespace std;
class circle{
   int cx,cy;
   float slope,circumference ,x1,x2,y1,y2;
   public:
   circle(int cx,int cy)
    {
       this->cx=cx;
       this->cy=cy;
    }
    circle(float x1, float x2, float y1, float y2)
    {
       this->x1=x1;
       this->x2=x2;
       this->y1=y1;
       this->y2=y2;
    }
    void show()
    {
       slope = (y2-y1)/(x2-x1);
       cout<<"slope is = "<<slope<<endl;
    }
     void getvalue()
     {
        cout<<"value fo x1,x2,y1,y2 ";
        cin>>x1>>x2>>y1>>y2;
     }
    void showint()
    {
      slope = (y2-y1)/(x2-x1);
      float h= y2-y1;
      float j = x2-x1;
      float f=slope*j;
     cout<<"(y2-y1) = "<<h<<endl;
     cout<<"(x2-x1) = "<<j<<endl;
    cout<<"(s*(x2-x1)) = "<<j<<endl;
    }
};
float area(float radius)
{
  return(3.14*radius*radius);
}
float circumference (int radius)
{
  return(2*3.14*radius);
}
int main()
{
float a,b,c;
int d;
     cout<<"radius =";
     cin>>b;
     a=area(b);
     cout<<"area of circle ="<<a<<endl;
     
     cout<<"radius =";
     cin>>d; 
     c=circumference(d);
     cout<<"circumference = "<<c<<endl;
      
     circle m(1, 2 , 4 ,8);
     m.show();
   
     m.showint();
}






















