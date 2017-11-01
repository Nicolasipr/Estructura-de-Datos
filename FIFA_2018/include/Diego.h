#ifndef DIEGO_H
#define DIEGO_H

#include <Persona.h>


class Diego : public Persona
{
    public:
        Diego();
        virtual ~Diego();

        int Getedad() { return edad; }
        void Setedad(int val) { edad = val; }
        Rut Getrut() { return rut; }
        void Setrut(Rut val) { rut = val; }
        string Getapodo() { return apodo; }
        void Setapodo(string val) { apodo = val; }
        bool Getmalaonda() { return malaonda; }
        void Setmalaonda(bool val) { malaonda = val; }
        float Getcalzado() { return calzado; }
        void Setcalzado(float val) { calzado = val; }

    protected:

    private:
        int edad;
        Rut rut;
        string apodo;
        bool malaonda;
        float calzado;
};

#endif // DIEGO_H
