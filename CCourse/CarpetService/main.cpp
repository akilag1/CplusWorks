#include <iostream>
using namespace std;
int main()
{
    int lRooms{0},sRooms{0};
    const int sRoomPrice{25};
    const int lRoomPrice{35};
	cout<<"Welcome to Frank's Carpet cleaning Service\n";
    cout<<"\n";
    cout<<"--------------------------------"<<endl;
    cout<<"How many small rooms: ";
    cin>>sRooms;
    cout<<"How many large rooms: ";
    cin>>lRooms;
    cout<<"\n";
    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"\n";
    cout<<"Number of small rooms: "<<sRooms<<endl;
    cout<<"Number of Large rooms: "<<lRooms<<endl;
    cout<<"Price per Small Room: "<<sRoomPrice<<"$"<<endl;
    cout<<"Price per Large Room: "<<lRoomPrice<<"$"<<endl;
    int sum=sRooms*sRoomPrice+lRooms*lRoomPrice;
    cout<<"Cost: "<<sum<<endl;
    float tax=sum*0.06F;
    cout<<"Tax: "<<tax<<"$"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Total Estimates: "<<sum+tax<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
    
	return 0;
}
