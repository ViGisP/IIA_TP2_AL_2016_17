#pragma once
class Dados
{
private:
	int vertice1;
	int vertice2;
	float distancia;


public:
	Dados();
	Dados(int v1, int v2, int dist);
	~Dados();

	int getVertice(int i);
	float getDistancia();


};

