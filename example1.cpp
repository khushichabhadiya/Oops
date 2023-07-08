#include<iostream>
using namespace std;
class Test
{
    private:
    int b,c;
    public:
    int a;
    void hello()
    {
        cout<<"hello"<<endl;
        b=1;
        cout<<"b :"<<b<<endl;
    }
};
int main()
{
    Test z;
    z.a = 10;
    cout<<"valiue of a is :"<<z.a<<endl;
    z.hello();
}