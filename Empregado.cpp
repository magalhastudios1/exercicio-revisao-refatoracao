#include <iostream>
#include <string>
#include "Empregado.hpp"

double Empregado::pagamentoMes() const
{
    //  Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (this->horasMes > 8)
    {
        return ((this->horasMes - 8) * 0.5 + this->horasMes )* this->salarioHora;
    }
    return this->horasMes * this->salarioHora;
}

void Empregado::defaultPrint() const
{
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;
}