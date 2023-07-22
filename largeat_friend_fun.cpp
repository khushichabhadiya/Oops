#include<iostream>
using namespace std;
class largest
{
    int a,b;
    public:
    void setdata (int x, int y)
    {
        a = x , b = y;
    }
    void getdata()
    {
        cout<<"largest number"<<a<<endl;
    }

    friend largest find(largest , largest);
};

largest find(largest x )
{
    largest t;
    if(x.a>y.b)
    {
        cout<<x.a<<"largest number"<<endl;
    }
    else
    {
        cout<<x.b<<"largest number"<<endl;
    }
    return t;
}

int main()
{
    largest c,d;
    c.setdata(10,20);
    c.getdata();

}