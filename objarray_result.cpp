#include<iostream>
using namespace std;
class result
{
    int maths,sci,eng;
    public:
    void math(){
        cout<<"enter maths marks";
        cin>>maths;
    }
     void science(){
        cout<<"enter sci marks";
        cin>>sci;
    }
     void english (){
        cout<<"enter eng  marks";
        cin>>eng ;
    }

    void total(){
        total = maths+sci+math;
    }
    void getmarks()
    {

        cout<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<total<<"\t"<<percentage<<"\t"<<endl;
    }
};

int main()
{
    result a[5];
    int i;
    for(i=0;i<4;i++){
        a[i].math();
    }
    for(i=0;i<4;i++){
        a[i].science();
    }
    for(i=0;i<4;i++){
        a[i].english();
    }
     cout<<"maths\t"<<"science\t"<<"english\t"<<"total\t"<<"percentage\t"<<endl;
    for(i=0;i<4;i++){
        a[i].getmarks();
    }
}