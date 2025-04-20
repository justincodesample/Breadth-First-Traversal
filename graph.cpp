#include "graph.hpp"

void Graph::AddEdge(std::string source, std::string target, int weight) {
	// add nodes without any edges to the map
	adjacency[source];
	adjacency[target];

	adjacency[source].push_back({target, weight});
}

std::list<std::pair<std::string, int>> Graph::GetEdge(std::string node) {
	auto it = adjacency.find(node);
	if (it != adjacency.end()) {
		// it->first is the key
		// it->second is the list
		return it->second;
	}

	// To return an empty list when node not found.
	std::list<std::pair<std::string, int>> empty;
	return empty;
}

void Graph::Print() const {
	for (const auto& [node, edges] : adjacency) {
		// print node
		std::cout << node << ":";
		// print edges with weight
		for (const auto& [target, weight] : edges) {
			std::cout << "(" << target << ", " << weight << ") ";
		}
		std::cout << std::endl;
	}
}