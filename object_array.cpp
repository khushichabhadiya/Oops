#include<iostream>
using namespace std;
class hello
{
    int m;
    public:
    void setm()
    {
        cout<<"enter m";
        cin>>m;
    }
    void getm()
    {
        cout<<"value of m is"<<m<<endl;
    }
};
int main()
{
    hello a[5];
    int i;
    for(i=0;i<2;i++){
        a[i].setm();
    }
    for(i=0;i<2;i++){
        a[i].getm();
    }
}