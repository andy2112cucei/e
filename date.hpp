#include"date.hpp"

using namespace std;



int Date::getYear() const
{
    return this->year;
}

int Date::getMonth() const
{
    return this->month;

}

int Date::getDay() const
{
    this->day;
}

std::string Date::toString() const
{
 char result[12];

    sprintf(result, "%02i/%02i/%04i",this->day,this->month,this->year);
    return result;
}

void Date::setYear(const int& y)
{
    this->year= y;
}

void Date::setMonth(const int& m)
{
        this->month= m;

}

void Date::setDay(const int& d)
{
        this->day= d;

}
