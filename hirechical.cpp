#include<iostream>
using namespace std;
class base
{
    protected:
    int m;
    public:
    void setM(int a)
    {
        m = a;
    }
};
class derived1 : public base
{
    int n; 
    public:
    void setN(int z)
    {
        n=z;
    }
void product()
{
    cout<<"product to m and n"<<m*n<<endl;
}
};
class derived2 : public base
{
    int p;
    public:
    void setp(int z)
    {
        p=z;
    }

void add(){
cout<<"addtion of m and p is"<<m+p<<endl;
}
};
int main()
{
    derived1 d;
     d.setM(15);
     d.setN(20);
     d.product();

     derived2 z;
     z.setM(30);
     z.setp(70);
     z.add();

}
