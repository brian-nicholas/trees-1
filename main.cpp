//============================================================================
// Name        : Main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Tree.h"
using namespace std;

int main() {

	Node* gp = new Node("Grand Pa");
	Node* father = new Node("Father");
	Node* uncle = new Node("Uncle");
	Node* aunt = new Node("Aunt");
	Node* you = new Node("You");
	Node* mitch = new Node("Mitch");
	Node* cousin = new Node("Cousin");
	Node* logan = new Node("Logan");
	Node* jules = new Node("Jules");
	gp->addChild(father);
	gp->addChild(uncle);
	gp->addChild(aunt);
	father->addChild(you);
	father->addChild(mitch);
	mitch->addChild(logan);
	mitch->addChild(jules);
	uncle->addChild(cousin);
	Tree* tree = new Tree(gp);
	tree -> traverse();
}
