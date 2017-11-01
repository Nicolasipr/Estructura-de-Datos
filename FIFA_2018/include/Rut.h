#ifndef RUT_H
#define RUT_H


class Rut
{
    public:
        Rut();
        virtual ~Rut();

        int Getrut() { return rut; }
        void Setrut(int val) { rut = val; }
        char Getverificador() { return verificador; }
        void Setverificador(char val) { verificador = val; }

    protected:

    private:
        int rut;
        char verificador;
};

#endif // RUT_H
