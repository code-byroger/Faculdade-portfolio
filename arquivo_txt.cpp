#include <iostream>
#include <fstream>
#include <string>
#include <tchar.h>
//Prototipos da função
void abrir();
void novo();

int main()
{	
	//Definindo a saída em português
	_tsetlocale(LC_ALL, _T("portuguese"));
	std::string decisao;


	//Criando  Menu
	do {
		std::cout << "\t\tMENU\n";
		std::cout << "======================================================= \n";
		std::cout << "1 - Abrir arquivo\t2 -Criar Arquivo\t3-Sair\n";
		std::cin >> decisao;
		int decisao_int = stoi(decisao); // converte string para inteiro
		system("cls"); // Limpando a saída
		//manipulando dados recebido pelo usuário
		switch (decisao_int)
		{
		case 1:
			abrir();
			break;
		case 2:
			novo();
			break;
		case 3:
			std::cout << "Saindo do programa...\n";
			break;
		default:
			std::cout << "Opção inválida! Tente novamente.\n";
			break;
		}

	} while (!3);

}
//Função Para criar novo arquivo
void novo()
{
	std::ofstream arquivo("arquivo.txt");
	std::cout << "\t\tRECEBENDO DADOS\n";
	std::cout << "======================================================= \n";

	if (arquivo.is_open())
	{
		std::string texto;
		std::cout << "Digite o texto que deseja salvar no arquvio: (digite 'sair' para encerrar)\n";
		std::cout << "============================================================== \n";

		while (true)
		{
			std::getline(std::cin, texto);
			if (texto == "sair")
			{
				break;
			}
			arquivo << texto << std::endl;
		}
	}
	else
	{
		std::cout << "Erro ao criar o arquivo.\n";
	}
	arquivo.close();
}
//Função para abrir um arquivo
void abrir()
{
	std::cout << "\t\tABRINDO DADOS\n";
	std::cout << "======================================================= \n";
	std::ifstream arquivo("arquivo.txt");
	if (!arquivo.is_open())
	{
		std::cout << "Erro ao abrir o arquivo.\n";
		arquivo.clear(); // limpando o arquivo
	}
	else
	{
		std::string linha;
		std::cout << "\n\tConteúdo do arquivo:\n";
		std::cout << "======================================================= \n";
		while (std::getline(arquivo, linha))
		{
			std::cout << linha << std::endl;
		}
	}
	
}