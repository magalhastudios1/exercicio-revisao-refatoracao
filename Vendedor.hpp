#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado
{
private:
    double quotaMensalVendas;

public:
    Vendedor(std::string a, double b, double c, double d);
    double quotaTotalAnual() const;
    void print() const;
};
