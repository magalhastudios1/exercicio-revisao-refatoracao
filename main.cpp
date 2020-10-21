#include <iostream>
#include <vector>
#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main()
{
  std::vector<Empregado *> empregados;

  empregados.push_back(new Engenheiro("Joao Snow", 35, 9.5, 3));
  empregados.push_back(new Engenheiro("Daniela Targaryen", 30, 8, 1));
  empregados.push_back(new Engenheiro("Bruno Stark", 30, 8, 2));

  empregados.push_back(new Vendedor("Tonho Lannister", 20, 6, 5000));
  empregados.push_back(new Vendedor("Jose Mormont", 25, 8, 3000));
  empregados.push_back(new Vendedor("Sonia Stark", 30, 8, 4000));

  for (auto empregado : empregados)
  {
    empregado->print();
    std::cout << std::endl;
  }

  return 0;
}