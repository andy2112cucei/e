#include "student.hpp"

using namespace std;


string Student::getCode() const
{
    return this->code;
}

Name Student::getName() const
{
    return this  ->name;
}

Date Student::getBirthDate() const
{
    return this->birthDate;
}

string Student::getCareer() const
{
    return this->career;
}

Date Student::getStartDate() const
{
    return this->startDate;
}

float Student::getGrade() const
{
    return this->grade;
}

string Student::toString() const
{
    string result;
    result += this->code;\
    result+="|";
    result += this->name.toString();
    result+="|";
    result += this->birthDate.toString();
    result+="|";
    result+= this -> startDate.toString();
    result+="|";
    result+= to_string(this -> grade);
}

void Student::setCode(const std:: string& c)
{
        this->code = c;

}

void Student::setName(const Name& n )
{
        this->name =n;

}

void Student::setBirthDate(const Date& d)
{
        this->birthDate =d;

}

void Student::setCareer(const std:: string& c)
{
    this -> career;
}

void Student::setStartDate(const Date& d)
{
    this -> startDate =d;
}

void Student::setGrade(const float& g)
{
    this ->grade = g;
}
