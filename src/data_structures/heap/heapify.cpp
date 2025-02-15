#include <iostream>
#include <vector>
#include <math.h>
#include "data_structures/heap/heapify.h"

namespace manos_practice {

    MaxHeapifier::MaxHeapifier(){}
    MaxHeapifier::~MaxHeapifier(){}

    void MaxHeapifier::heapifyLayer(std::vector<int> &numbers, int layer_i) {
        int N = numbers.size();
        int node_init = exp2(layer_i) - 1;
        int node_last_at_most = node_init + exp2(layer_i);
        for (int node=node_init; node <= node_last_at_most; node++){
            if (node >= numbers.size()) {
                break;
            }
            heapify(numbers, node);
        }
    }

    void MaxHeapifier::heapifyAll(std::vector<int> &numbers) {
        int N = numbers.size();
        int heapLayers = int(ceil(log2(N)));
        for (int layer_i=heapLayers-1; layer_i>=0; layer_i--) {
            heapifyLayer(numbers, layer_i);
        }
    }
    void MaxHeapifier::heapify(std::vector<int> &numbers, int node) {
        int node_child1 = 2*node + 1;
        if (node_child1 >= numbers.size()) {
            return;
        }
        int largest = numbers[node];
        int largest_idx = node;
        if (numbers[node_child1] > numbers[node]){
            largest = numbers[node_child1];
            largest_idx = node_child1;
        }                
        int node_child2 = 2*node + 2;
        if (node_child2 < numbers.size() && numbers[node_child2] > numbers[largest_idx]) {
            largest = numbers[node_child2];
            largest_idx = node_child2;
        }
        if (largest_idx != node) {
            // swap 
            int temp = numbers[largest_idx];
            numbers[largest_idx] = numbers[node];
            numbers[node] = temp;
            
            // heapify the swapped node
            heapify(numbers, largest_idx);
        }
    }

    void MaxHeapifier::heapifyBottomUp(std::vector<int> &numbers, int node) {
        if (node == 0) {
            return;
        }
        int node_parent = node / 2;

        int largest = numbers[node_parent];
        int largest_idx = node_parent;
        if (numbers[node_parent] < numbers[node]){
            largest = numbers[node];
            largest_idx = node;
        }                
        if (largest_idx == node) {
            // swap 
            int temp = numbers[largest_idx];
            numbers[largest_idx] = numbers[node_parent];
            numbers[node_parent] = temp;
            // heapify the swapped node
            heapifyBottomUp(numbers, node_parent);
        }
    }

    MinHeapifier::MinHeapifier(){}
    MinHeapifier::~MinHeapifier(){}
    void MinHeapifier::heapifyAll(std::vector<int> &numbers) {
        std::cout << "WARNING: MinHeapifier::heapifyAll not implemented" << std::endl;
    }
    void MinHeapifier::heapify(std::vector<int> &numbers, int idx) {
        std::cout << "WARNING: MinHeapifier::heapify not implemented" << std::endl;
    }
    void MinHeapifier::heapifyLayer(std::vector<int> &numbers, int layer_i) {
        std::cout << "WARNING: MinHeapifier::heapifyLayer not implemented" << std::endl;
    }
    void MinHeapifier::heapifyBottomUp(std::vector<int> &numbers, int idx) {
        std::cout << "WARNING: MinHeapifier::heapifyBottomUp not implemented" << std::endl;
    }
}