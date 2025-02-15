#include <vector>

namespace manos_practice {
    class Heapifier {
        public:
            virtual ~Heapifier() = default;
            virtual void heapifyAll(std::vector<int> &numbers) = 0;
            virtual void heapify(std::vector<int> &numbers, int idx) = 0;
            virtual void heapifyLayer(std::vector<int> &numbers, int layer_i) = 0;
            virtual void heapifyBottomUp(std::vector<int> &numbers, int idx) = 0;
        };
        
        class MaxHeapifier: public Heapifier {
            public:
            MaxHeapifier();
            ~MaxHeapifier();
            void heapifyAll(std::vector<int> &numbers) override;
            void heapify(std::vector<int> &numbers, int idx) override;
            void heapifyBottomUp(std::vector<int> &numbers, int idx) override;
            void heapifyLayer(std::vector<int> &numbers, int layer_i) override;
    };
    class MinHeapifier: public Heapifier {
        public:
            MinHeapifier();
            ~MinHeapifier();
            void heapifyAll(std::vector<int> &numbers) override;
            void heapify(std::vector<int> &numbers, int idx) override;
            void heapifyBottomUp(std::vector<int> &numbers, int idx) override;
            void heapifyLayer(std::vector<int> &numbers, int layer_i) override;
    };
}