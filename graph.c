#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main(){
    printf("Hello world\n");

    data_item* data_item1 = make_data_item(1,2,3);
    graph* graph1 = make_graph();

    free(data_item1);
    free_graph(graph1);
    printf("Goodbye world\n");
}

graph* make_graph(){
    graph* ret_graph = (graph*) malloc(sizeof(graph));
    ret_graph->num_nodes = 0;
    return ret_graph;
}


//     //TODO
// void add_node(graph** graph_ptr, data data, graph_node** edges){
//     graph* graph = graph_ptr*;
//
//     graph_node* new_node = malloc(sizeof(graph_node));
//
//     graph->num_nodes++;
//     graph->nodes[graph->num_nodes] =
//
//     // add the data
//     current_node
// }

data_item* make_data_item(int data1, int data2, int data3){
    data_item* ret_data = (data_item*) malloc(sizeof(data_item));
    ret_data->data1 = data1;
    ret_data->data2 = data2;
    ret_data->data3 = data3;
    return ret_data;
}

void free_graph(graph* g){
    //free the nodes in the graph and the node pointers
    for(int i=0; i<g->num_nodes; i++){
        free_node(g->nodes[i]);
        free(g->nodes[i]);
    }

    //free the graph pointer
    free(g);
}

void free_node(graph_node* node){
    // free data
    free(node->data_item); //adjust if the data_item needs to be specially freed

    // free edges
    for(int i=0; i < node->num_edges; i++){
        free(node->edges[i]);
    }
}




















//
