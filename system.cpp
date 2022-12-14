#include<bits/stdc++.h>
#include <iostream>
#include<string>
#include <cmath>
using namespace std;

main(){
    double car=1;
    double minivan=2;
    double bus=4;
    double truck=4;
    int hours=0;
    cout<<"PARKING SYSTEM\n";
    cout<<"-----------------\n";
    cout<<"VEHICLE PARKING HOURS: ";
    cin>>hours;
    if(hours==1){
    }else if(hours<=4){
        for(int i=2;i<=hours;i++){
            car+=1;
            minivan+=2;
            bus+=4;
            truck+=4;
            }
        }else if(hours>4){
        	car=4;
        	minivan=8;
        	bus=16;
        	truck=16;
            for(int i=5;i<=hours;i++){
			car+=(1*0.75);
            minivan+=2*0.75;
            bus+=4*0.75;
            truck+=4*0.75;
            }
        }
        cout<<"PRICE FOR A CAR $"<<car<<endl;
        cout<<"PRICE FOR A MINIVAN $"<<minivan<<endl;
        cout<<"PRICE FOR A BUS $"<<bus<<endl;
        cout<<"PRICE FOR A TRUCK $"<<truck<<endl;
}
