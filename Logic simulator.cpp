#include <iostream>
#include "Node.h"
#include "Gate.h"

int main()
{
    Node node1('A', 1);
    Node node2('B', 0);
    Gate and_gate(node1, node2, "AND");
    cout << and_gate.simulateGate();
}