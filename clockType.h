//
//  clockType.h
//  C++ Project3
//
//  Created by Kaan Şengün on 17.10.2023.
//

#ifndef clockType_h
#define clockType_h

class clockType{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&);
    void printTime();
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType& otherTime) const;
private:
    int hr;
    int min;
    int sec;
    
};
#endif /* clockType_h */
