#include<iostream>
using namespace std;
class shape
{
    public:
    shape(int a){
        cout<<"area of circle is"<<3.14*a*a<<endl;
    }

   shape(double n) {
       cout<<"area of square is"<<n*n<<endl;
    }

     shape(int l, int w){
        cout<<"area of ractangle is"<<l*w<<endl;
    }

    shape(double h, double b){
        cout<<"area of tringle is"<<h*b<<endl;
    }
};

int main()
{
    shape circle(7), square(4),ractangle(4,6),tringle(12.3,23.4);
   
}