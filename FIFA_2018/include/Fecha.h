#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        Fecha();
        virtual ~Fecha();

        int Getdia() { return dia; }
        void Setdia(int val) { dia = val; }
        int Getmes() { return mes; }
        void Setmes(int val) { mes = val; }
        int Getanio() { return anio; }
        void Setanio(int val) { anio = val; }

    protected:

    private:
        int dia;
        int mes;
        int anio;
};

#endif // FECHA_H
