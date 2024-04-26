#include<iostream>
using namespace std;
class space
{
private:
int a,b,c;
public:
space(int x,int y, int z)
{
    a=x;
    b=y;
    c=z;
}
void display()
{
    cout<<"value of a is"<<a<<endl;
    cout<<"value of b is"<<b<<endl;
    cout<<"value of c is"<<c<<endl;
}
void operator -()
{
    a=-a;
    b=-b;
    c=-c;
}
};
int main()
{
space s(10,11,12);
cout<<" original values "<<endl;
s.display();
-s;
cout<<"operation values"<<endl;
s.display();

return 0;
}