/*
Miguel
Mario
21220363

*/

// BIBLIOTECAS
#include <iostream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <io.h>
#include <tchar.h>
#include <fcntl.h>
#include <cmath>
#include <stdio.h>
//#include <locale>
#include <Windows.h>

// CLASSES DO PROJETO
#include "Interface.h"
#include "Dados.h"
#include "Util.h"



// NAMEPACES
using namespace std;



int main(void) {
	// Função main do projeto

	// DADOS
	bool continuar = true;
	int N, M, dim, iter;
	string nomeFicheiro;
	Interface in;
	Util u;
	vector<string> listaFicheirosDeDados = { "MDPI1_20.txt", "MDPI1_150.txt" ,"MDPI1_500.txt" ,"MDPI2_25.txt" ,"MDPI2_30.txt" ,"MDPI2_150.txt" ,"MDPII1_20.txt" ,"MDPII1_150.txt" ,"MDPII2_25.txt" ,"MDPII2_30.txt" ,"MDPII2_150.txt" ,"MDPII2_500.txt" };
	vector<string> listaAlgoritmos = { "Trepa-Colinas", "Evolutivo", "Hibrido" };
	vector<Dados*> dadosFicheiro;

	//////// IMPRIME ECRA INICIAL
	in.setTextColor(in.BRANCO);


	do {
		//////// Ficheiro (lista)
		nomeFicheiro = u.selecionaFicheiro(listaFicheirosDeDados);

		// Carrega ficheiro para a memoria
		dadosFicheiro = u.carregaFicheiro(nomeFicheiro);

		//////// Algoritmo (trepa-colinas, evolutivo, hibrido)

		//////// Numero de iteracoes (min, max!)

		//////// Calcula

		//////// Apresenta resultados


	} while (continuar == true);


	//////// IMPRIME ECRA FINAL / CREDITOS

	return 0;
}


