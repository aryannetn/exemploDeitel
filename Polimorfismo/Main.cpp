#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"

int main()
{
	Assalariado a1;
	Comissionado c1;
	Horista h1;

	a1.setNome("Zezinho");
	a1.setSalario(2000.0);

	c1.setNome("luizinho");
	c1.setTaxaComissao(0.1);
	c1.setTotalVendas(3000.0);

	h1.setNome("Huguinho");
	h1.sethorasTrabalhadas(180.0);
	h1.setPrecoHora(50.0);

	a1.vencimento();
	c1.vencimento();
	h1.vencimento();
}