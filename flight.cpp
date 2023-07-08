#include<iostream>
using namespace std;
class flight
{
    private:
    int flightmember;
    string destination;
    float distance, fuel;

    int calfuel(){
        if (distance<=1000){
            return 500;
        }
        else if(distance > 1000 && distance <=2000){
            return 1100;
        }
        else if(distance >= 2000){
            return 2200;
        }
    }

    public:
    int feedinfo()
    {
        cout<<"enter a flightmember"<<endl;
        cin>>flightmember;
        cout<<"enter a destination"<<endl;
        cin>>destination;
        cout<<"enter distance"<<endl;
        cin>>distance;
        fuel = calfuel();

    }

    int showinfo(){
        cout<<"flightmember"<<"\t"<<"destination"<<"\t"<<"distance"<<"\t"<<"fuel"<<"\t"<<endl;
        cout<<flightmember<<"\t\t"<<destination<<"\t\t"<<distance<<"\t\t"<<fuel<<"\t"<<endl;
    }
};


int main()
{
    flight f;
    f.feedinfo();
    f.showinfo();

}

