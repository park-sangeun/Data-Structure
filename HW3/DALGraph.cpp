#include "DALGraph.h"
void DALGraph::addEdge(int fromV, int toV) 
{ 
	assert(fromV < n&& fromV >= 0 && toV < n&& toV >= 0); 
	vertexList[fromV].insert(toV); 
	m++; 
}