
#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


class Date
{
private:
    int day;
    int month;
    int year;
    int daysInMonth;
    
public:
    int getDay();
    int getMonth();
    int getYear();
    
    string getMonthName();
    void print();
    void printLong();
 
    void setDate(int);
    void setYear(int);
    void setMonth(int);
    
    Date () : month (1), day (1), year (2000) {}
    Date (int mh, int dy, int yr){
        setDate(dy);
        setYear(yr);
        setMonth(mh);
    }
};
     
   

#endif
