#include "graph.h" 
// graph base class
class amGraph : public graph {
public:
	amGraph(int size);
	virtual bool edgeMember(int fromV, int toV);
protected:
	int * * am; // am points to pointers to int
};
