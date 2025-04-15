#include <iostream>
#include <tchar.h>

//Declarando o prototipo da função
void maior(int vet[], int n, int* resultado);

int main()
{
	//Colocando a letra do terminal em português
	_tsetlocale(LC_ALL, _T("portuguese"));
	const int tamanho = 5;
	int vetor[tamanho]{3, 5, 6, 7, 9};
	int valorMaior;

	maior(vetor, tamanho, &valorMaior);

	std::cout << "Valor maior do vetor: " << valorMaior << std::endl;
	system("PAUSE");
	return 0;
}

//Declarando o procedimento para verificar qual o valor maior
void maior(int vet[], int n, int* resultado)
{
	*resultado = vet[0];

	for (int i = 1; i < n; i++)
	{
		if (vet[i] > *resultado)
		{
			*resultado = vet[i];
		}
	}
}