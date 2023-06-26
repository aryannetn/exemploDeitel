#pragma once
#include <iostream>
using namespace std;

class Empregado
{
public:
	void setNome(string nome);
	void setSobrenome(string sobrenome);
	void setCpf(string cpf);

	virtual void vencimento() = 0;

protected:
	string nome;
	string sobrenome;
	string cpf;

};

