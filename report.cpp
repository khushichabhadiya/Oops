#include<iostream>
using namespace std;
class report
{
    private:
    int admno;
    char name[20];
    float marks[5],average;
    int GETAVG(){
        for(int i=0; i<5; i++){
        sum+=marks[i];
        }
        average=sum/5;
    }
    public:
    int readinfo(){
        cout<<"enter admno"<<endl;
        cin>>admno;
        cout<<"enter a name"<<endl;
        cin>>name;
        cout<<"enter a marks"<<endl;
        for(int i=0; i<5; i++)
        {
            cin>>marks[i];
        }
        GETAVG();
    }
    void displayinfo(){
        
    }

};
int main()
{

}