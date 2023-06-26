#pragma once
#include "Empregado.h"
class Horista :
    public Empregado
{
public:
    void setPrecoHora(double precoHora);
    void sethorasTrabalhadas(double horasTrabalhadas);

    void vencimento();

private:
    double precoHora;
    double horasTrabalhadas;

};

