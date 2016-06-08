#include "ReentrantLock.hpp"

//TODO process or set recursion deepness
void ReentrantLock::lock() {
    recursiveLock.lock();
}

void ReentrantLock::unlock() {
    recursiveLock.unlock();
}

