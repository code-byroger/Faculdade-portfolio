#include <iostream>
#include <math.h>
#include <tchar.h>

//Declara��o de fun��es
bool numerosprimos(int numero);
void mensagemResultado(bool resultado);

//Fun��o principal
int main()
{
	//Define o terminal em portugu�s
	_tsetlocale(LC_ALL, _T("portuguese"));

	int numero;
	std::cout << "Informe um n�mero para saber se � primo ou n�o: ";
	std::cin >> numero;

	if (numero < 0)
	{
		std::cout << "Informe apenas n�meros inteiro positivos!" << "\n";
		return 1;
	}

	bool resultado = numerosprimos(numero);
	mensagemResultado(resultado);

	system("PAUSE");
	return 0;
}

//Fun��o para saber se os n�meros � primo
bool numerosprimos(int numero)
{

	//Objetivo da fun��o: Realizar 8 divis�es de 2 a 8 utilizando a fun��o da biblioteca math.h para verificar se o n�mero informado pelo usu�rio � primo.
	for (int i = 2; i < sqrt(numero); i++)
	{
		if (numero % i == 0)
		{
			return false;
		}
	}

	return true;
}
//Fun��o para impress�o da mensagem na tela
void mensagemResultado(bool resultado)
{
	if (resultado)
		std::cout << "Primo" << "\n";
	else
		std::cout << "N�o primo" << std::endl;
}