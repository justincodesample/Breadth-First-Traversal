#include "bft.hpp"

BFT::BFT(Graph graph) {
	this->graph = graph;
}

// function BREADTHFIRST(GRAPH,SRC)
//     QUEUE = empty queue
//     DISCOVERED = empty set
//     add SRC to DISCOVERED
//     add SRC to QUEUE
//     while QUEUE is not empty
//         CURR = first element in QUEUE
//         NEIGHS = neighbors of CURR
//         for EDGE in NEIGHS
//             NODE = first entry in EDGE
//             if NODE is not in DISCOVERED
//                 add NODE to DISCOVERED
//                 append NODE to QUEUE

// Perform breadth first traversal
void BFT::Traversal(std::string start) {
	std::queue<std::string> queue;
	std::set<std::string> visited;

	queue.push(start);
	visited.insert(start);

	std::cout << "Current Node : Current Node's Neighbor" << std::endl;

	while (!queue.empty()) {
		std::string current = queue.front();
		queue.pop();

		std::cout << current << " : ";
		for (auto [neighbor, weight] : graph.GetEdge(current)) {
			std::cout << neighbor << " ";
			if (visited.find(neighbor) == visited.end()) {
				queue.push(neighbor);
				visited.insert(neighbor);
			}
		}
		std::cout << std::endl;
	}
}