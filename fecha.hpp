#ifndef __FECHA_H__
#define __FECHA_H__


class Fecha {

private: 

int day;
int month;
int year;


public:


    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDay(const int&);
    void setMonth(const int&);
    void setYear(const int&);

};




#endif // __FECHA_H__
