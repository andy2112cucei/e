#ifndef __QUIROFANO_H__
#define __QUIROFANO_H__

#include<string>
#include"fecha.hpp"


class Quiro {
    
    private: 
        
        float nquiro;
        Fecha fecha;
        std::string hora;
        std::string proce;
        //clsase pciente 
        //clase domicilio 
        //clase enfermera 
        //clase doctor 

    public:


        float getNquiro() const;
        Fecha getFecha () const;
        std::string getHora() const;
        std::string getProce() const;


        void setNquiro( const float&);
        void setFecha (const int&);
        void setHora (const std:: string&);
        void setProce(const std:: string&);
    	void 




};





#endif // __QUIROFANO_H__
