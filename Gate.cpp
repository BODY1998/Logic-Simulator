#include "Gate.h"

Gate::Gate()
{
}

Gate::Gate(Node node1, Node node2, string type):firstInput(node1),secondInput(node2),gateType(type)
{
	cout << "gate: " << type << " has specifications of: " << endl << "first input : " << node1 << endl << "second input: " << node2 << endl;
}

void Gate::setFirstInput(Node node)
{
	firstInput.setName(node.getName());
	firstInput.setValue(node.getValue());
}

void Gate::setSecondInput(Node node)
{
	secondInput.setName(node.getName());
	secondInput.setValue(node.getValue());
}

void Gate::setOutput(Node out)
{
	output.setName(out.getName());
	output.setValue(out.getValue());
}

Node Gate::getFirstInput()
{
	return firstInput;
}

Node Gate::getSecondInput()
{
	return secondInput;
}

Node Gate::getoutput()
{
	return output;
}

int Gate::NOT(int res)
{
	if (res == 1) {
		return 0;
	}
	else
		return 1;
}

int Gate::simulateGate()
{
	if (gateType == "AND") {
		return firstInput.AND(secondInput);
	}
	else if (gateType == "OR") {
		return firstInput.OR(secondInput);
	}
	else if (gateType == "XOR") {
		return firstInput.XOR(secondInput);
	}
	else if (gateType == "XNOR") {
		return NOT(firstInput.XOR(secondInput));
	}
	else if (gateType == "NOR") {
		return NOT(firstInput.OR(secondInput));
	}
	else if (gateType == "NAND") {
		return NOT(firstInput.AND(secondInput));
	}
}
