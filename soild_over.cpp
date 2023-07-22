#include<iostream>
using namespace std;
class solid
{
    public:
    solid(int a){
        cout<<"area of cube"<<a*a*a<<endl;
    }

     solid(int r,int h){
        cout<<"area of cylinder"<<3.14*(r*r)*h<<endl;
    }

     solid(int l,int w,int h){
        cout<<"area of cuboid"<<l*w*h<<endl;
    }                                

     solid(double b,double h){
        cout<<"area of prism"<<b*h<<endl;
    }
};
int main()
{
    solid cube(19),cylinder(6,9),cuboid(5,6,8),prism(12.3,6.7);
}
