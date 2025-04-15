#include <iostream>
#include <math.h>
#include <tchar.h>

//Declaração de funções
bool numerosprimos(int numero);
void mensagemResultado(bool resultado);

//Função principal
int main()
{
	//Define o terminal em português
	_tsetlocale(LC_ALL, _T("portuguese"));

	int numero;
	std::cout << "Informe um número para saber se é primo ou não: ";
	std::cin >> numero;

	if (numero < 0)
	{
		std::cout << "Informe apenas números inteiro positivos!" << "\n";
		return 1;
	}

	bool resultado = numerosprimos(numero);
	mensagemResultado(resultado);

	system("PAUSE");
	return 0;
}

//Função para saber se os números é primo
bool numerosprimos(int numero)
{

	//Objetivo da função: Realizar 8 divisões de 2 a 8 utilizando a função da biblioteca math.h para verificar se o número informado pelo usuário é primo.
	for (int i = 2; i < sqrt(numero); i++)
	{
		if (numero % i == 0)
		{
			return false;
		}
	}

	return true;
}
//Função para impressão da mensagem na tela
void mensagemResultado(bool resultado)
{
	if (resultado)
		std::cout << "Primo" << "\n";
	else
		std::cout << "Não primo" << std::endl;
}