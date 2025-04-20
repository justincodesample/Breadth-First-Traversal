#ifndef BFT_HPP
#define BFT_HPP

#include "graph.hpp"

#include <queue>
#include <set>

class BFT {
	private:
		Graph graph;
	public:
		BFT(Graph graph);
		void Traversal(std::string start);
};

#endif // BFT_HPP