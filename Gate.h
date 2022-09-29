#pragma once
#include <iostream>
#include "Node.h"

class Gate
{
private:
	Node firstInput;
	Node secondInput;
	Node output;
	string gateType;
public:
	Gate();
	Gate(Node node1, Node node2,string type);
	void setFirstInput(Node node);
	void setSecondInput(Node node);
	void setOutput(Node out);
	Node getFirstInput();
	Node getSecondInput();
	Node getoutput();
	int NOT(int res);
	int simulateGate();
};

