#include<iostream>
#include<string>
using namespace std;

class dayType
{
public:
dayType();

string day[8];
int dayNumber;
int tempDay;

void setDay(int day);
void printDay();
void returnDay(int &day);
void returnNextDay();
void returnPreviousDay();
void calculateDay(int changeDay);

};


//Implementation file

#include <iostream>
#include <string>
//#include "dayType.h"

using namespace std;

void dayType::printDay()
{
cout << "Today is: " << day[dayNumber] << "day" << endl;};

void dayType::setDay(int day)
{
dayNumber=day;};

void dayType::returnDay(int &day)
{
day=dayNumber;};

void dayType::returnNextDay()
{
dayNumber++;};

void dayType::returnPreviousDay()
{
dayNumber--;};

void dayType::calculateDay(int changeDay)
{
tempDay=(dayNumber+changeDay);
dayNumber=(tempDay%7);};


//Main file

#include <iostream>
//#include "dayType.h"

using namespace std;

int main()
{
dayType today;

int day;
int changeDay;

cout << "------------------------------------------------------------------" << endl;
cout << "Default day is Sunday " << endl;
cout << "Type in a number corresponding to set the day" << endl
<< "1: Monday" << endl
<< "2: Tuesday" << endl
<< "3: Wednesday" << endl
<< "4: Thursday" << endl
<< "5: Friday" << endl
<< "6: Saturday" << endl
<< "7: Sunday" << endl;

while (day<0 || day>7)
cin >> day;

today.setDay(day);
today.printDay();

today.returnDay(day);
today.printDay();

cout << "-----------------------------------------------------------------" << endl;
cout << "If it were tomorrow, then the following statement would be true: " << endl;
today.returnNextDay();
today.printDay();
today.dayNumber--;

cout << "-----------------------------------------------------------------" << endl;
cout << "If it were yesterday, then the following statement would be true:" << endl;
today.returnPreviousDay();
today.printDay();
today.dayNumber++;

cout << "-----------------------------------------------------------------" << endl;
cout << "Add a number of days to today and see what day it will be: " << endl;
cin >> changeDay;

today.calculateDay(changeDay);
today.printDay();

return 0;
};

dayType::dayType()
{
dayNumber=1;
day[1]="Mon";
day[2]="Tues";
day[3]="Wednes";
day[4]="Thurs";
day[5]="Fri";
day[6]="Satur";
day[7]="Sun";
};