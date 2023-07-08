#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    char name[20];
    int inning,notout,runs;
    float batavg;
    float calcavg(){
        return runs/(inning-notout);
    }
    public:
      float  readdata(){
        cout<<"enter bcode"<<endl;
        cin>>bcode;
        cout<<"enter bastman name"<<endl;
        cin>>name;
        cout<<"enter a inning"<<endl;
        cin>>inning;
        cout<<"enter a notout"<<endl;
        cin>>notout;
        cout<<"enter runs"<<endl;
        cin>>runs;
        batavg = calcavg();
    }

    float displaydata(){
        cout<<"bcode"<<"\t"<<"name"<<"\t"<<"inning"<<"\t"<<"notout"<<"\t"<<"runs"<<"\t"<<"batavg"<<"\t"<<endl;
        cout<<bcode<<"\t"<<name<<"\t"<<inning<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg<<endl;
    }

};

int main()
{
    batsman man;
    man.readdata();
    man.displaydata();

}