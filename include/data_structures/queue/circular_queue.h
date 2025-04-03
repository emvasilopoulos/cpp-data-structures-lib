#include <vector>

namespace manos_practice {

    class MyCircularQueue {
        public:
    
        MyCircularQueue(int k);
            
            bool enQueue(int value);  
            bool deQueue();
            int Front();
            int Rear();
            bool isEmpty();
            bool isFull();
    
        private:
            std::vector<int> data;
            int queueLimit;
            int head = -1; 
            int tail = -1;
            void updateQueuePointer(int& headOrTail);
            int calculateSize();
    
        };
}
    