#include "heap.h"
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
}
void heap::heapifyup(int index) {
	while (index > 0) {
		int padre = (index - 1) / 2;
		if (Heap[index]->getfreq()<Heap[padre]->getfreq()){

		}
	}
}
void heap::heapifydown(int index) {

}
node* heap::extraermin() {

}