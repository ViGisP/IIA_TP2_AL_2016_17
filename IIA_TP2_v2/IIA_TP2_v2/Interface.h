
#pragma once

#ifndef __INTERFACE_H__
#define __INTERFACE_H__

#include <iostream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <io.h>
#include <tchar.h>
#include <fcntl.h>
#include <cmath>
#include <stdio.h>
#include <Windows.h>

using namespace std;

#ifdef UNICODE
#define tcout wcout
#define tcin wcin
#define tstring wstring
#define tchar wchar_t
#define tstringstream wstringstream
#define tstream_iterator wstream_iterator
#define tback_inserter wback_inserter
#else
#define tcout cout
#define tcin cin
#define tchar char
#define tstring string
#define tstringstream istringstream
#define tstream_iterator istream_iterator
#define tback_inserter back_inserter
#endif

class Interface {
private:
	// DADOS
	HANDLE hconsola;
	HANDLE hStdin;
	HWND hwnd;

public:

	// CORES
	const static int PRETO = 0;
	const static int AZUL = 1;
	const static int VERDE = 2;
	const static int CYAN = 3;
	const static int VERMELHO = 4;
	const static int ROXO = 5;
	const static int AMARELO = 6;
	const static int BRANCO = 7;
	const static int CINZENTO = 8;
	const static int AZUL_CLARO = 9;
	const static int VERDE_CLARO = 10;
	const static int CYAN_CLARO = 11;
	const static int VERMELHO_CLARO = 12;
	const static int COR_DE_ROSA = 13;
	const static int AMARELO_CLARO = 14;
	const static int BRANCO_CLARO = 15;

	// GETCH
	const static char ESQUERDA = 1;
	const static char DIREITA = 2;
	const static char CIMA = 3;
	const static char BAIXO = 4;
	const static char ENTER = 13;
	const static char ESCAPE = 27;

	Interface();
	// Posiciona o cursor na posicao x,y
	// - Os proximos cout/cin serão feitos a partir daí!
	void gotoxy(int x, int y);

	// Limpa o ecrã
	// - Usa a cor de fundo que estiver definida
	void clrscr();

	// Muda a cor das letras
	// - Os cout/cin seguintes usarão essa cor
	void setTextColor(WORD color);

	// Muda a cor de fundo
	// - Os printf/cout seguintes usarão essa cor
	// - Os clrsrc() seguintes usarão essa cor de fundo
	void setBackgroundColor(WORD color);

	// Muda a dimensão do ecrã para NLinhas x NCols
	// - O redimensionamento pode falhar se o tamanho indicado for excessivo ou se for demasiado pequeno
	void setScreenSize(int nLinhas, int nCols);

	// Muda (tenta mudar) o tamanho da letra
	// - Esta função pode falhar em determinadas situações (falhar = não muda nada)
	void setTextSize(int x, int y);

	// Muda (tenta mudar) o tamanho da letra para XP
	// - Esta funcao é para usar apenas no Windows XP (nos outros sistemas existe a função setTextSize)
	// - Pode falhar em determinadas situacoes (falhar = nao muda nada)
	void setTextSizeXP(int x, int y);

	// Lê um caractér sem precisar de "enter" no fim
	// - Útil para fazer pausas do tipo "press any key to continue"
	char getch(void);

	// Desenha uma linha usando píxeis (não é com caractéres)
	// - Esta é uma função gráfica, trabalha com píxeis!
	// - Os píxeis da linha ficam sobrepostos ao texto
	// ATENÇÃO:
	// - A linha não fica memorizada, desaparece quando:
	//   - Se oculta e volta a mostrar a janela da consola
	//   - Se redimensiona a janela
	void drawLine(int x1, int y1, int x2, int y2, int cor);

	// Desenha um círculo usando píxeis (não é com caractéres)
	// - Esta é uma função gráfica, trabalha com píxeis!
	// - Os píxeis do círculo ficam sobrepostos ao texto
	// ATENÇÃO:
	// - O circulo não fica memorizado, desaparece quando:
	//   - Se oculta e volta a mostrar a janela da consola
	//   - Se redimensiona a janela
	void drawCircle(int X, int Y, int R, int Pen, int Fill);

	// Imprime ecrã de saída do programa
	void printExitScreen();

	// Imprime ecrã de início do programa
	void printOpenScreen();
};

#endif

