// Pointer To Objects.
#include<iostream>
using namespace std;
class Rectangle     // Class
{
public:
       int length;
       int breadth;
     int area(int l,int b)
     {
         return l*b;
     }
     int parimeter()
     {
         return 2*(length+breadth);
     }
};
int main()
{
    Rectangle r;  //Object
    Rectangle *ptr;
    ptr=&r;
    ptr->length=10;    //-> this sign pointing to class members.
    ptr->breadth=20;
    cout<<ptr->area(10,20)<<endl;
    cout<<ptr->parimeter()<<endl;
    return 0;
}