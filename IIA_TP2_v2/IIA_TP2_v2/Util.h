#pragma once

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

#include "Interface.h"
#include "Dados.h"

using namespace std;

class Util
{
private:
	Interface in;
public:
	Util();
	~Util();

	vector<Dados*> carregaFicheiro(string nomeFicheiro);
	string selecionaFicheiro(vector<string> lista);
};

