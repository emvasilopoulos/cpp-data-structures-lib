#include <iostream>
#include <vector>
#include <iomanip>
#include <memory>
#include "data_structures/heap/heap.h"

namespace manos_practice
{
    Heap::Heap(std::vector<int> numbers, HeapType heapType1) {
        heapType = heapType1;
        heap = numbers;
        if (heapType == MIN) {
            heapifier = new MinHeapifier();
        }
        else if (heapType == MAX) {
            heapifier = new MaxHeapifier();
        }
        heapifier->heapifyAll(heap);
    }

    Heap::Heap(HeapType heapType) {}
    Heap::~Heap() {}
    
    void Heap::add(int newElement) {
        heap.push_back(newElement);
        heapifier->heapifyBottomUp(heap, heap.size()-1); // Buggy
    }

    void Heap::pop() {
        int lastElement = heap[heap.size()-1];
        heap[0] = lastElement;
        heap.pop_back();
        heapifier->heapify(heap, 0); // Possibly Buggy 
    }
    
    void Heap::printHeap() {
        int size = heap.size();
        if (size == 0) {
            std::cout << "Heap is empty." << std::endl;
            return;
        }
        
        int levels = std::log2(size) + 1;
        int maxWidth = std::pow(2, levels) * 2; // Approximate width for proper spacing
        int index = 0;
        
        for (int level = 0; level < levels; ++level) {
            int numElements = std::pow(2, level);
            int spacing = maxWidth / (numElements + 1);
            
            for (int i = 0; i < numElements && index < size; ++i, ++index) {
                std::cout << std::setw(spacing) << heap[index];
            }
            std::cout << "\n";
        }
    }

    std::vector<int> Heap::getHeapAsVector(){
        return heap;
    }


} // namespace manos_practice
