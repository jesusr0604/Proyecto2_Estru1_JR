#include "Arbol.h"
#include"heap.h"
#include <iostream>
using namespace std;

Arbol::Arbol() {
	raiz = NULL;
}
Arbol::~Arbol() {

}
Arbol::Arbol(int freq[256]) {
	heap* h= new heap();
	for (int i = 0; i < 256; i++){
		if (freq[i] > 0) {
			h->insertar(new node((char)i, freq[i]));
		}//Se agregan al arreglo lo que seria el nodo y dentro del nodo, se incluira el carcater con su respectiva frecuencia
	}
	while (h->getheap().size()>1){
		node* izq = h->extraermin();
		node* der = h->extraermin();
		node* nodonuevo = new node('\0',izq->getfreq()+der->getfreq());
		nodonuevo->setizq(izq);
		nodonuevo->setder(der);
		h->insertar(nodonuevo);
	}//
	raiz = h->extraermin();
}





