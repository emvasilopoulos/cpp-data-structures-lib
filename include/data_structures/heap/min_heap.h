#ifndef MYMINHEAP_H
#define MYMINHEAP_H

#include <vector>
#include "data_structures/heap/abstract_heap.h"

namespace manos_practice {
    class MinHeap: public Heap {
        public:
            using Heap::Heap; // inherit all the constructors of the Heap class
            void heapify() override;
    };
}

#endif