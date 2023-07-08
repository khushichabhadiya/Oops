#include<iostream>
using namespace std;
class Test
{
    private:
    int testcode , nocandidates,centerreqd;
    string discription;

    int CALCNTR(){
        return (nocandidates/100+1);
    }

    public:
    int SCHEDULE(){
        cout<<"enter testcode"<<endl;
        cin>>testcode;
        cout<<"enter discription"<<endl;
        cin>>discription;
        cout<<"enter a nocandidates"<<endl;
        cin>>nocandidates;

        centerreqd =CALCNTR();
    }
    int DESPTEST()
    {
            cout<<"testcode"<<"\t"<<"discription"<<"\t"<<"nocandidates"<<"\t"<<"centerreqd"<<"\t"<<endl;
            cout<<testcode<<"\t\t"<<discription<<"\t\t"<<nocandidates<<"\t\t"<<centerreqd<<endl;
    }
};

int main()
{
    Test t;
    t.SCHEDULE();
    t.DESPTEST();
}