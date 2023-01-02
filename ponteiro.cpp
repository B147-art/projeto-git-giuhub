#include<iostream>
using namespace std;

main()
{
	int valor = 30;
	
	//declaracao de varialvel ponteiro
	int *ptr;
	
	//atribuindo o endereco da variavel valor ao
	//ponteiro
	ptr = &valor;
	
	cout << "Utilizando Ponteiros \n";
	cout << "Conteudo da Variavel valor: " << valor;
	cout << "\nEndereco da Variavel valor: "<< &valor;
	cout << "\nConteudo da Variavel ponteiro " << ptr; 
	cout << "\nConteudo da Variavel ponteiro " << *ptr; 
}
