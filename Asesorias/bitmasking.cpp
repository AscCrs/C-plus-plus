#include<bits/stdc++.h>
using namespace std;

bool kthBit(int k,int x){ // Funcion que busca si el k-esimo bit es un 1
	return x&(1<<k);
}

//Las funciones __builtin_popcount(x) y __builtin_popcountll(x) son equivalentes
//CUIDADO: SOLO DISPONIBLES PARA GCC
int countOnes(int x){
	int b = 1,ans=0;
	while(b<INT_MIN){
		ans+= x&b;
		b = b<<1;
	}
	return ans;
}

int clearBit(int k,int x){
	return x&(~(1<<k));
}

int setBit(int k,int x){
	return x|(1<<k);
}

int fillOnes(int l,int r){
	return ((1<<(l+1))-1)^((1<<r)-1);
}

int getRange(int l,int r,int x){
	return (x&fillOnes(l,r))>>r;
}

int changeBit(int k,int x){
	return (1<<k)|clearBit(k,x);
}

int main(){
	//Fuerza representaciÃ³n de conjuntos con un entero (Bitmasking)
	
	int n; 
	cout << countOnes(151) << "\n";
}
