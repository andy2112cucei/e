#ifndef __PACIENT_H__
#define __PACIENT_H__


#include<string>
#include "fecha.hpp"
#include "direccion.hpp"


class Pacient {

private: 
    std::string ns;
    std::string name;
    Fecha fecha;
    std:: string tel;
    Direccion direccion;

public:
    std::string getNs() const;
    std::string getName() const;
    Fecha getFecha () const;
    std::string getTel() const;
    Direccion getDireccion () const;

    std::string toString () const;


    void setNs (const std::string&);
    void setName (const std::string&);
    void setFecha(const std::string&);
    void setTel(const std::string&);
    void setDireccion(const std::string&);














};







#endif // __PACIENT_H__
