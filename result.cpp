#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    char arr[20];
    float maths,english,science,total;
    float ctotal(){
        return maths+english+science;
    }
    public:
    int takedata()
    {
        cout<<"enter admno"<<endl;
         cin>>admno;
         cout<<"enter student name"<<endl;
         cin>>arr;
         cout<<"enter maths markrs"<<endl;
         cin>>maths;
         cout<<"enter english markrs"<<endl;
         cin>>english;
         cout<<"enter science markrs"<<endl;
         cin>>science;
        total=ctotal();
    }
    int showdata()
    {
        cout<<"admno"<<"\t"<<"sname"<<"\t"<<"maths"<<"\t"<<"english"<<"\t"<<"science"<<"\t"<<"total"<<endl;
        cout<<admno<<"\t"<<arr<<"\t"<<maths<<"\t"<<english<<"\t"<<science<<"\t"<<total<<"\t";
    }
};

int main()
{
    student test;
    test.takedata();     
    test.showdata();
}