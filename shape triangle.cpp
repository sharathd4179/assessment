#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class shape
{
public:
double t,r;
void getdata()
{
cout<<"Enter t:";
cin>>t;
cout<<"Enter i:";
cin>>r;
}
virtual void display_area()
{
cout<<"t="<<t<<endl;
cout<<"r="<<r<<endl;
}
};
class rectangle: public shape
{
public:
int w;
void display_area()
{
getdata();
w=t*r;
cout<<"\n area of rectangle is:"<<w<<endl;
}
};
class triangle:public shape
{
public:
int u;
void display_area()
{
getdata();
u=(0.5)*(t*r);
cout<<"\n Area of triangle="<<u;
}
};
int main()
{
triangle t;
rectangle r;
shape *b;
b=&r;
b->display_area();
b=&t;
b->display_area();
getch();
}
