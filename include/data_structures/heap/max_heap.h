#ifndef MYMAXHEAP_H
#define MYMAXHEAP_H

#include <vector>
#include "data_structures/heap/abstract_heap.h"

namespace manos_practice {
    class MaxHeap: public Heap {
        public:
            using Heap::Heap;
            void heapify() override;
        protected:
            void heapifyLayer(int layer_i);
    };
}

#endif