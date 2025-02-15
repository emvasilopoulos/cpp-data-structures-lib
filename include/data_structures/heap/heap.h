#ifndef MYHEAP_H
#define MYHEAP_H

#include <vector>
#include <data_structures/heap/heapify.h>
#include <memory>  // For smart pointer usage

namespace manos_practice {
    enum HeapType {
        MIN,
        MAX
    };
    class Heap{
        public:
            Heap(std::vector<int> numbers, HeapType heapType1);
            Heap(HeapType heapType);
            ~Heap();
            
            void add(int newElement);
            void pop();
            void printHeap();
            std::vector<int> getHeapAsVector();
        private:
            std::vector<int> heap;
            Heapifier *heapifier;
            HeapType heapType;
    };
}

#endif