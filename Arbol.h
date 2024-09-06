#pragma once
#include "node.h"
#include<stdlib.h>
class Arbol{
private:
	node* raiz;

public:
	Arbol();
	~Arbol();
	Arbol(int freq[256]);
	
};

