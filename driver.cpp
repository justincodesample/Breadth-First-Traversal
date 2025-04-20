#include "graph.hpp"
#include "bft.hpp"

int main() {
	Graph weighted;
	std::cout << "weighted graph:" << std::endl;
	weighted.AddEdge("A", "B", 1);
	weighted.AddEdge("A", "C", 1);
	weighted.AddEdge("B", "D", 1);
	weighted.AddEdge("D", "F", 2);
	weighted.AddEdge("D", "G", 1);
	weighted.AddEdge("C", "E", 1);
	weighted.AddEdge("E", "H", 3);
	weighted.AddEdge("E", "I", 1);
	weighted.AddEdge("H", "J", 2);
	weighted.AddEdge("J", "K", 1);
	weighted.Print();

	std::cout << std::endl;

	Graph unweighted;
	std::cout << "unweighted graph:" << std::endl;
	unweighted.AddEdge("A", "B", 1);
    unweighted.AddEdge("A", "C", 1);
    unweighted.AddEdge("B", "D", 1);
    unweighted.AddEdge("B", "E", 1);
    unweighted.AddEdge("C", "F", 1);
    unweighted.AddEdge("D", "G", 1);
    unweighted.AddEdge("E", "H", 1);
    unweighted.AddEdge("F", "I", 1);
    unweighted.AddEdge("G", "J", 1);
    unweighted.AddEdge("H", "K", 1);
	unweighted.Print();

	std::cout << std::endl;

	BFT weighted_bft(weighted);
	std::cout << "Traversal of weighted graph, start from A" << std::endl;
	weighted_bft.Traversal("A");
	std::cout << std::endl;

	std::cout << "Traversal of weighted graph, start from A" << std::endl;
	weighted_bft.Traversal("C");
	std::cout << std::endl;

	BFT unweighted_bft(unweighted);
	std::cout << "Traversal of unweighted graph, start from A" << std::endl;
	unweighted_bft.Traversal("A");
	std::cout << std::endl;

	std::cout << "Traversal of unweighted graph, start from D" << std::endl;
	unweighted_bft.Traversal("D");
	std::cout << std::endl;

	return 0;
}