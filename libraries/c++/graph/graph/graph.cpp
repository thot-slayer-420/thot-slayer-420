// graph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;

class graph
{
public:
    graph() { cout << "Graph created" << endl; }
    void add_node(int id) { node new_node(id); nodes.push_back(new_node); cout << "Node " << id << "is created into the graph." << endl; }
    void add_edge(node& parent, node& child) { parent.add_edge(child); cout << "Parent node, " << parent.get_id() << ", has child node, " << child.get_id() << endl; }
    node get_node(int search_id) {
        for (int i = 0; i < nodes.size(); ++i) {
            if (search_id == nodes[i].get_id()) { cout << "node " << search_id << " returned" << endl; return nodes[i]; }
        }
        cout << "Node " << search_id << " not found" << endl;
        return 0;
    }
private:
    vector<node> nodes;
};

class node
{
public:
    node(int new_id) { id = new_id; }
    node(int new_id, int new_depth) { id = new_id; depth = new_depth; }

    void add_edge(node& edge) { edges.push_back(edge); }
    int get_id() { cout<< "Node: "<< id << " returned" << endl; return id; }
    void set_id(int new_id) { id = new_id; }
    

private:
    vector<node> edges;
    int id;
    int depth;

   
};

int main()
{
    cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
