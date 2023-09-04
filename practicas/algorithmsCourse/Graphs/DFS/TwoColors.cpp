// TWO COLORS
#include <iostream>
#include <vector>

using namespace std;

//    primer color   --> 0
//	  segundo color  --> 1

// G es nuestro grafo, colores es el vector de colores del grafo, u es un vértice cualquiera, viejou es un vértice antiguo adyacente a u

bool es_doscoloreable(const vector<vector<int>> &G, vector<int> &colores, int u, int viejou)
{
	if (colores[u] == 0)
	{
		colores[u] = colores[viejou] % 2 + 1; // poner colores distintos a u y viejou
		for (int i : G[u])
		{ // Iterar sobre los vértices adyacentes a u
			if (not es_doscoloreable(G, colores, i, u))
				return false;
		}
		// -------

		return true; // u y todos sus adyacentes son 2-coloreable
	}

	else
	{
		return colores[u] != colores[viejou]; // Retorno cierto si son distintos, Retorno falso si son iguales
	}
}

// Este es el ALGORITMO DFS que recorre todo el grafo G, mediante una búsqueda en profundidad

bool dfs(const vector<vector<int>> &G)
{
	int n = G.size();		 // obtenemos el número de vértices
	vector<int> color(n, 0); // vector de colores para cada vértice
	for (int i = 0; i < n; ++i)
	{
		if (color[i] == 0 and not es_doscoloreable(G, color, i, i))
			return false;
	}
	return true;
}

int main()
{

	int n; // número de vértices
	int m; // número de aristas

	while (cin >> n >> m)
	{							  // mientras vaya leyendo los casos
		vector<vector<int>> G(n); // declaro un grafo G con n vértices

		int x, y; // dos vértices cualesquiera

		for (int i = 0; i < m; ++i)
		{
			cin >> x >> y; // Leer pareja (x,y) que es una arista del grafo G
			G[x].push_back(y);
			G[y].push_back(x);
		}

		// Mi grafo G está relleno

		if (dfs(G))
			cout << "yes";
		else
			cout << "no";

		cout << endl; // salto de línea
	}
}
