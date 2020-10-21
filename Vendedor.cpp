#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

Vendedor::Vendedor(std::string a, double b, double c, double d) : Empregado(a, b, c), quotaMensalVendas(d) {}

double Vendedor::quotaTotalAnual() const
{
	return this->quotaMensalVendas * 12;
}

void Vendedor::print() const
{
	this->defaultPrint();
	std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
}