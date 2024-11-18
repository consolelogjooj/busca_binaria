#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <map>
#include <new>
#define TAM 10

using namespace std;

int busca_binaria(int vetor[TAM], int valorProcurado, int* posicaoEncontrada) {
	int esquerda = 0;
	int direita = TAM - 1;
	int meio;

	while (vetor[meio] <= valorProcurado) {
		meio = (esquerda + direita) / 2;

		if (vetor[meio] == valorProcurado) {
			*posicaoEncontrada = meio;
			return 1;
		}
		if (vetor[meio] < valorProcurado) {
			esquerda = meio + 1;
		}
		else {
			direita = meio - 1;
		}
	}
	return -1;
}

int main() {

	int vetor[TAM] = { 1,23,34,45,56,67,78,89,90 };
	int valorProcurado;
	int posicaoEncontrada = false;
	bool valorEncontrado;
	int cont;

	// exibir vetor \(¨0¨)/
	for (cont = 0; cont < TAM; cont++) {
		cout << vetor[cont] << " - ";
	}

	cout << " qual valor deseja encontrar ? ";
	cin >> valorProcurado;

	if (busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1) {
		cout << " valor encontrado na posicao  : " << posicaoEncontrada;
	}
	else {
		cout << " valor nao encontrado ";
	}

	return 0;
}