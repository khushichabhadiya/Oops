#include<iostream>
using namespace std;
class base1
{
    public:
    int a;
    void setA()
    {
        cout<<"enter  a number";
        cin>>a;
    }
};
class base2
{
    public:
    int b;
    void setb()
    {
        cout<<"enter  b number";
        cin>>b;
    }
};
class derived : public base1 , public base2
{
    public:
    int square;
    int product()
    {
        for(int i=a; i<=b; i++){
            square = i*i;
            cout<<" "<<square;
        }
    }
};
int main()
{
    derived d;
    d.setA();
    d.setb();
    d.product();
}