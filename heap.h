#pragma once
#include"node.h"
#include <vector>
#include<stdlib.h>
using namespace std;
class heap{
private:
	vector<node*> Heap;
public: 
	heap();
	~heap();
	void insertar(node* nodo);
	bool vacio();
	void heapifyup(int );
	void heapifydown(int);
	node* extraermin();
};

