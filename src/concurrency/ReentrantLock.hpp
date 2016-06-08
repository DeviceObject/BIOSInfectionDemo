#ifndef REENTRANTLOCK_HPP
#define REENTRANTLOCK_HPP

#include "IReentrantLock.hpp"
#include <mutex>

class ReentrantLock : public IReentrantLock {
private:
    std::recursive_mutex recursiveLock;
public:
    virtual void lock();
    virtual void unlock();
};

#endif /* REENTRANTLOCK_HPP */
