// cx12-1.h
// Code Example 12-1: Header for graph hierarchy
#ifndef __MB_CX12_1__
#define __MB_CX12_1__
class graph {
public:
	graph(int size) : n(size), m(0) { }
	virtual int vertexSize() { return n; }
	virtual int edgeSize() { return m; }
	virtual void addEdge(int fromV, int toV) = 0; 
	// specify abstract classprotected:
	int n; // number of vertices
	int m; // number of edges
};
#endif