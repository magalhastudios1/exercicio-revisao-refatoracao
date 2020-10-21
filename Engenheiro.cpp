#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string a, double b, double c, double d) : Empregado(a, b, c), projetos(d) {}

void Engenheiro::print() const
{
    this->defaultPrint();
    std::cout << "Projetos: " << this->projetos << std::endl;
}