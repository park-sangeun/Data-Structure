#include "graph.h"
#include "AMGraph.h"

class uAMGraph : public amGraph { 
public:
	uAMGraph(int size, int initialValue = 0) :
		amGraph(size) { }
	virtual void addEdge(int fromV, int toV); 
};