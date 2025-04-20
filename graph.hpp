#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <list>
#include <string>
#include <utility>
#include <map>
#include <iostream>

class Graph {
	private:
    std::map<std::string, std::list<std::pair<std::string, int>>> adjacency;
	public:
		void AddEdge(std::string source, std::string target, int weight);
		std::list<std::pair<std::string, int>> GetEdge(std::string);
		void Print() const;
		void BFT();
};

#endif // GRAPH_HPP