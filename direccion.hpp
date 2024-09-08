#ifndef __PACIENTE_H__
#define __PACIENTE_H__

#include<string>


class Direccion {

private: 

std::string street;
        std::string extNumber;
        std::string intNumber;
        std::string neighborhood;
        int ZipCode;
        std::string city;
        std::string state;

public :

        std::string getStreet() const;
        std::string getExtNumber () const;
        std::string getIntNumber () const ;
        std::string getNeighborhood() const ;
        int getZipCode() const ;
        std::string getCity () const ;
        std::string getState () const ;

        std::string toStrig() const;

        void setStreet(const std:: string&);
        void setExtNumber(const std:: string&);
        void setIntNumber  (const std:: string&);
        void setNeighborhood (const std:: string&);
        void setZipCode (const int&);
        void setCity(const std::string&);
        void setState(const std:: string&); 
};

#endif // __PACIENTE_H__
