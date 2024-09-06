#include "node.h"
#include <cstddef>


node::node() {
	
}





node::node(char c, int fre) {
	this->izq = NULL;
	this->der = NULL;
	this->car = c;
	this->freq = fre;
}
node::~node() {
	delete izq;
	delete der;
}
int node::getfreq() {
	return freq;
}
void node::setfreq(int fre) {
	this->freq = fre;
}
char node::getcar() {
	return car;
}
void node::setcar(char c) {
	this->car = c;
}
node* node::getizq() {
	return izq;
}
void node::setizq(node* left) {
	this->izq = left;
}
node* node::getder() {
	return der;
}
void node::setder(node* right) {
	this->der = right;
}
