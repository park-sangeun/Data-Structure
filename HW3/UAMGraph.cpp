#include "UAMGraph.h"
#include "graph.h"
#include <cassert>
void uAMGraph::addEdge(int fromV, int toV) { 
	assert(fromV < n&& toV < n&& fromV >= 0 && toV >= 0); 
	if (!edgeMember(fromV, toV)) {
		m++; 
		am[fromV][toV] = 1; 
		am[toV][fromV] = 1; 
	} 
}