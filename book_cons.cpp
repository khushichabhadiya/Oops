#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    char title[20];
    float price;
    float total_cost(int n){
            return price * n;
    }
    public:
     book(){
        cout<<"enter a book number"<<endl;
        cin>>bookno;
        cout<<"enter a book title"<<endl;
        cin>>title;
        cout<<"enter book price"<<endl;
        cin>>price;

    }
    int PURCHASE(){
        int n;
        cout<<"enter a number of copies"<<endl;
        cin>>n;
        float totalcost = total_cost(n);
        cout<<"total cost to paid"<<totalcost<<endl;
    }
};
int main()
{
    book b;
    b.PURCHASE();
}