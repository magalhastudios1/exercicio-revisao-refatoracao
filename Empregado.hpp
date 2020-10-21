#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado
{
protected:
  std::string nome;
  double salarioHora;
  double horasMes;

public:
  double pagamentoMes() const;
  Empregado(std::string a, double b, double c) : nome(a), salarioHora(b), horasMes(c) {}
  void defaultPrint() const;
  virtual void print() const = 0;
};

#endif