#include "Node.h"

Node::Node() {}

Node::Node(char nName, int nValue):nodeName(nName),nodeValue(nValue)
{
	cout << "The value of node "<< nodeName<<" is : " << nodeValue << endl;
}
void Node::setName(char nName)
{
	nodeName = nName;
}

void Node::setValue(int nValue) {
	nodeValue = nValue;
}

char Node::getName() {
	return nodeName;
}

int Node::getValue() {
	return nodeValue;
}

int Node::AND(Node node)
{
	return nodeValue * node.getValue();
}

int Node::OR(Node node)
{
	return nodeValue + node.getValue();
}

int Node::XOR(Node node)
{
	if (nodeValue == node.getValue()) {
		return 0;
	}
	else
		return 1;
}


ostream& operator <<(ostream& os, Node node)
{
	os << node.getName() << '/' << node.getValue() << endl;
	return os;
}
