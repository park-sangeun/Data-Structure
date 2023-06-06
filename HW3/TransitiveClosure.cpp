#include <iostream>
#include "UAMGraph.h"
#include <fstream>
#include <cassert>
using namespace std;

int main(){
	cout << "20211522 박상은" << endl;
	const char * inFileName = "graph2.dat";
	ifstream ifs(inFileName); 
	assert(ifs); 
	int n; 
	ifs >> n; 
	uAMGraph G(n); 
	cout << "Created graph; n = " << G.vertexSize() << endl; 
	int u, v; 
	while (ifs >> u) { 
		ifs >> v; 
		G.addEdge(u, v); 
	}
	cout << "Edges in graph: m = " << G.edgeSize() << endl; 
	int step; 
	for (step = 0; step < n; step++)
		for (u = 0; u < n; u++)
			for (v = 0; v < n; v++)
				if (G.edgeMember(u, step) && G.edgeMember(step, v))
					G.addEdge(u, v);
	// print results
	for (u=0; u < n; u++) {
		cout << u << "\t: ";
		for (v = 0; v < n; v++)
			cout << (G.edgeMember(u,v)? "T " : "F ");
		cout << endl;
	}
	return 0;
}