#include <vector>
#include "data_structures/queue/circular_queue.h"

namespace manos_practice {

    MyCircularQueue::MyCircularQueue(int k): data(k) {
        queueLimit = k;
    }
    
    bool MyCircularQueue::enQueue(int value) {
        if (isEmpty()) {
            head = 0;
            tail = 0;
            data[0] = value;
            return true;
        }
        else if (isFull()) {
            return false;
        }
        else {
            updateQueuePointer(tail);
            data[tail] = value;
            return true;
        }
        
    }
    
    bool MyCircularQueue::deQueue() {
        int queueSize = calculateSize();
        if (queueSize == 0){
            return false;
        }
        else if (queueSize == 1) {
            head = -1;
            tail = -1;
            return true;
        }
        updateQueuePointer(head);
        return true;
    }
    
    int MyCircularQueue::Front() {
        if (head == -1) {
            return -1;
        }
        return data[head];
    }
    
    int MyCircularQueue::Rear() {
        if (tail == -1) {
            return -1;
        }
        return data[tail];
    }
    
    bool MyCircularQueue::isEmpty() {
        return (calculateSize() == 0);
    }
    
    bool MyCircularQueue::isFull() {
        return (calculateSize() == queueLimit);
    }


    void MyCircularQueue::updateQueuePointer(int& headOrTail){
        headOrTail = (headOrTail + 1) % data.size();
    }
    
    int MyCircularQueue::calculateSize(){
        if (head == -1 || tail == -1) {
            return 0;                
        }
        else if (head <= tail) {
            return (tail - head) + 1;
        }
        else {
            return ((data.size() - head) + (tail+1));
        }
        
    }

}
