#include <vector>
#include <math.h>
#include "data_structures/heap/max_heap.h"

namespace manos_practice {

    void MaxHeap::heapifyLayer(int layer_i) {
        int N = heap.size();
        int node_init = exp2(layer_i);
        int node_last = node_init + N / exp2(layer_i+1);
        for (int node=node_init; node < node_last; node++){
            int node_child1 = 2*node + 1;
            if (node_child1 >= heap.size()) {
                continue;
            }
            int largest = heap[node];
            int largest_idx = node;
            if (heap[node_child1] > heap[node]){
                largest = heap[node_child1];
                largest_idx = node_child1;
            }                
            int node_child2 = 2*node + 2;
            if (node_child2 < heap.size() && heap[node_child2] > heap[largest_idx]) {
                largest = heap[node_child2];
                largest_idx = node_child2;
            }
            if (largest_idx != node) {
                // swap 
                int temp = heap[largest_idx];
                heap[largest_idx] = heap[node];
                heap[node] = heap[largest_idx];
                
                // heapify the previous layer
                if (layer_i - 1 > 0){
                    heapifyLayer(layer_i - 1);
                }
            }
        }
    }
    
    void MaxHeap::heapify() {
        int N = heap.size();
        int heapLayers = int(ceil(log2(N)));
        for (int layer_i=1; layer_i<=heapLayers; layer_i++) {
            heapifyLayer(layer_i);
        }
    }

}