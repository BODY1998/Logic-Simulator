#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	char nodeName;
	int nodeValue;

public:
	Node();
	Node(char nName, int nValue);
	void setName(char nName);
	void setValue(int nValue);
	char getName();
	int getValue();
	int AND(Node node);
	int OR(Node node);
	int XOR(Node node);
	friend ostream& operator<<(ostream& os, Node node);
};

