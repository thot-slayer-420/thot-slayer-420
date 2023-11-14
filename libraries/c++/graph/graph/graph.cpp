
#include <vector>
#include <iostream>
using namespace std;

namespace graph_lib {
    class node
    {
    public:
        node(int new_id) { id = new_id; }
        node(int new_id, int new_depth) { id = new_id; depth = new_depth; }

        void add_edge(node& edge) { edges.push_back(edge); cout << "pointer from node " << id << " to " << edge.get_id() << " added" << endl; }
        int get_id() { cout << "Node: " << id << " id returned" << endl; return id; }
        int get_depth() { cout << "Node: " << depth << " depth returned" << endl; return depth; }
        void set_id(int new_id) { id = new_id; cout << "id " << id << "set" << endl; }
        void set_depth(int new_depth) { depth = new_depth; cout << "depth" << depth << " set" << endl; }


    private:
        vector<node> edges;
        int id;
        int depth;


    };


    class graph
    {
    public:
        graph() { cout << "Graph created" << endl; }
        void add_node(int id) { node new_node(id); nodes.push_back(new_node); cout << "Node " << id << " is created into the graph." << endl; }
        void add_node(int id, int depth) { node new_node(id, depth); nodes.push_back(new_node); cout << "Node " << id << " is created at depth " << depth << endl; }
        void add_edge(node parent, node child) { parent.add_edge(child); cout << "Parent node, " << parent.get_id() << ", has child node, " << child.get_id() << endl; }
        node* get_node(int search_id) {
            for (int i = 0; i < nodes.size(); ++i) {
                if (search_id == nodes[i].get_id()) { cout << "node " << search_id << " returned" << endl; return &nodes[i]; }
            }
            cout << "Node " << search_id << " not found" << endl;
            return 0;
        }
    private:
        vector<node> nodes;
    };

}

