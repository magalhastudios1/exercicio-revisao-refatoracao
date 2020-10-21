#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
private:
    int projetos;

public:
    Engenheiro(std::string a, double b, double c, double d);
    void print() const;
};

#endif