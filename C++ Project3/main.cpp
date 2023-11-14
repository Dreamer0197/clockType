//
//  main.cpp
//  C++ Project3
//
//  Created by Kaan Şengün on 14.10.2023.
//

#include <iostream>
#include "clockType.h"
using namespace std;

/*int *funcArray()
{
    int *arr = new int [3]{1,2,3};
    return arr;
}
*/

int main(){
    
/*    int *aryPtr = funcArray();
    cout<<aryPtr[0];
    cout<<aryPtr[1];
    cout<<aryPtr[2];
    
    delete[] aryPtr;
 */
    clockType myClock;
    myClock.setTime(3, 48, 52);
    myClock.printTime();
    
    
    
    
    
    return 0;
}
