#include "heap.h"
#include <iostream>
heap::heap() {

}
heap::~heap() {

}
void heap::insertar(node* nodo) {
	Heap.push_back(nodo);
	heapifyup(Heap.size() - 1);
}



bool heap::vacio() {
	if (Heap.empty()){
		return true;
	}
	else {
		return false;
	}
}//Verificacion para que el vector de heap este vacio


void heap::heapifyup(int index) {
	while (index > 0) {
		int padre = (index - 1) / 2;
		if (Heap[index]->getfreq() < Heap[padre]->getfreq()) {
			node* temp = Heap[index];
			Heap[index] = Heap[padre];
			Heap[padre] = temp;

			index = padre;
		}
		else {
			break;
		}
	}
}//Lo que hace heapifyup el mover el nodo hacia arriba 


void heap::heapifydown(int index) {
	int tam = Heap.size();
	while (true) {
		int izq = 2 * (index + 1);
		int der = 2 * (index + 2);
		int menor = index;
		//Verificacion si el hijo de la parte izquierda es menor que el nodo actual
		if (izq<tam && Heap[izq]->getfreq()<Heap[menor]->getfreq()){
			menor = izq;
		}
		//Verificacion si el hijo de la parte derecha es menor que el nodo mas pequeño encontrado
		if (der < tam && Heap[der]->getfreq() < Heap[menor]->getfreq()){
			menor = der;
		}
		//Verificacion en caso de que el hijo sea el mas pequeño para que pueda hacer el intercambio
		if (menor!= index){
			node* temp = Heap[index];
			Heap[index] = Heap[menor];
			Heap[menor] = temp;
			index = menor;//Para continuar bajando por el arbol
			
		}
		else {
			//En caso de que ninguna de las condiciones se cumplen, se sale del bucle infinito
			break;
		}
	}
}
node* heap::extraermin() {
	if (vacio()) {
		cout << "El vector de Monticulos esta vacio";
		return NULL;
	}
	node* min = Heap[0];

	Heap[0] = Heap.back();
	Heap.pop_back();//Remover el ultimo elemento del vector

	heapifydown(0);
	return min;
}


void heap:: setHeap(vector<node*>h) {
	this->Heap = h;
}
vector<node*> heap::getheap() {
	return Heap;
}
