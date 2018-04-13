#include "Vector.h"
#include "Edge.h"
#include <vector>
#include <string>
std::vector<Edge> prims_algorithm(std::vector<Vertex> graph, Vertex & startPoint);
void remove_edge(std::vector<Vertex> & graph, Edge & edge);

int main(int argc, char** argv){

return 0;
}

std::vector<Edge> prims_algorithm(std::vector<Vertex> graph, Vertex & startPoint){
  std::vector<Vertex> coveredVertices;  
  std::vector<Edge> spanningEdges;
  
  coveredVertices.push_back(startPoint);
  
  while(coveredVertices.size() != graph.size()){
    Edge lowest();
	int lowestWeight{200000000};
 
    for(auto vertex_it = graph.begin(); vertex_it != graph.end(); ++vertex_it){
		//Get the list of connected edges and thier weights 
		std::vector<std::string> adjacent_vertex = *vertex_it.getAdjacent();
		std::vector<int> adjacent_weights = *vertex_it.getWeights();
		for(int i{0}; i < adjacent_weights.size(); ++i){
			if(adjacent_weights[i] < lowestWeight){
				lowest = adjacent_weights[i];
				lowest.setEdge(vertex_it.getVertex(),adjacent_vertex[i]);
			}
		}
    }
	spanningEdges.push_back(lowest);
	remove_edge(graph, lowest);
  }
  
  return spanningEdges;
}
//Deletes the edge represented in the graph. If it is undirected it 
//deletes the edge twice.
void remove_edge(std::vector<Vertex> & graph, Edge & edge){
	for(auto vertex_it = graph.begin(); vertex_it != graph.end(); ++vertex_it){
		if(*vertex_it.getVertex() == edge[0]){
			std::vector<string> adjacent_vertex = *vertex_it.getAdjacent();
			std::vector<int> adjacent_weights = *vertex_it.getWeights();
			for(int i{0}; i < adjacent_weights.size(); ++i){
				if(adjacent_vertex[i] == edge[1]){
					adjacent_vertex.erase(adjacent_vertex.begin() + i);
					adjacent_weights.erase(adjacent_weights.begin() +1);
					break;
				}
					
			}
		}
		
		if(*vertex_it.getVertex() == edge[1]){
			std::vector<string> adjacent_vertex = *vertex_it.getAdjacent();
			std::vector<int> adjacent_weights = *vertex_it.getWeights();
			for(int i{0}; i < adjacent_weights.size(); ++i){
				if(adjacent_vertex[i] == edge[0]){
					adjacent_vertex.erase(adjacent_vertex.begin() + i);
					adjacent_weights.erase(adjacent_weights.begin() +1);
					break;
				}
					
			}
		}
	}
}
