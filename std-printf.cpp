#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	// indica os valores da v�riaveis
	float NumeroReal{ 34.57 };
	int NumeroInteiro{ 12 };
	char caracter{ 'B' };
	// apresenta a fun��o string com o #include
	std::string Texto{"texto da string"};
	// faz o print no console dos valores das v�riaveis
	// usando especificadores
	std::printf("Valor de NumeroInteiro: %d - Valor de NumeroReal: %f - Valor de Caracter: %c - Valor de String: %s", NumeroInteiro, NumeroReal, caracter, Texto.c_str());
}