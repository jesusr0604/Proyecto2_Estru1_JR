#pragma once
#include<stdlib.h>
class node {
private:
	int freq;
	char car;
	node* izq;
	node* der;
public:
	node();
	node(char, int);
	~node();
	int getfreq();
	void setfreq(int );
	char getcar();
	void setcar(char);
	node* getizq();
	void setizq(node*);
	node* getder();
	void setder(node*);








};