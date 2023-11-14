//
//  clockType.cpp
//  C++ Project3
//
//  Created by Kaan Şengün on 15.10.2023.
//

#include "clockType.h"
#include <iostream>
using namespace std;

void clockType::setTime(int hours, int minutes, int seconds){
    if (0<=hours&&hours<24) {
        hr=hours;
    }
    else
        hr = 0;
    if(0 <= minutes && minutes < 60){
        min = minutes;
    }
    else
        min = 0;
    if(0 <= seconds && seconds < 60){
        sec = seconds;
    }
    else
        sec = 0;
    }
void clockType::getTime(int &hours, int &minutes,int &seconds){
        
    hours = hr;
    minutes = min;
    seconds = sec;
    }
void clockType::printTime(){
    cout<<"\nSaat: "<<hr << endl;
    cout<<"\nDakika: "<<min<< endl;
    cout<<"\nSaniye: "<<sec<< endl;
    cout<<"\n";
}
