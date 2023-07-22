#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a :";
        cin>>a;
    }
};
class test : public base1
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"enter b :";
        cin>>b;
    }
};
class derived: public test{
    public:
    void product()
    {
        test :: setB();
        cout<<"product of a and b :"<<a*b<<endl;
    }
};
int main()
{
    derived d;
    d.setA();
    d.product();
}