#pragma once
#include "node.h"
#include<stdlib.h>
#include<string>
using namespace std;
class Arbol{
private:
	node* raiz;

public:
	Arbol();
	~Arbol();
	Arbol(int freq[256]);
	
};

