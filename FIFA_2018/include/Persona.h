#ifndef PERSONA_H
#define PERSONA_H
#include <string>


using namespace std;

#include <Rut.h>
#include <Fecha.h>

class Persona
{
    public:
        Persona();
        virtual ~Persona();

        Rut GetrutPersona() { return rutPersona; }
        void SetrutPersona(Rut val) { rutPersona = val; }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        Fecha GetfechaNac() { return fechaNac; }
        void SetfechaNac(Fecha val) { fechaNac = val; }
        string Getmail() { return mail; }
        void Setmail(string val) { mail = val; }
        string Getnacionalidad() { return nacionalidad; }
        void Setnacionalidad(string val) { nacionalidad = val; }
        int Getsueldo() { return sueldo; }
        void Setsueldo(int val) { sueldo = val; }

    protected:

    private:
        Rut rutPersona;
        string nombre;
        Fecha fechaNac;
        string mail;
        string nacionalidad;
        int sueldo;
};

#endif // PERSONA_H
