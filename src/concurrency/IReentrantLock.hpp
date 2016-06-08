#ifndef IREENTRANTLOCK_HPP
#define IREENTRANTLOCK_HPP


class IReentrantLock {
public:
    virtual void lock() = 0;
    virtual void unlock() = 0;
    virtual ~IReentrantLock() {}
};

#endif // IREENTRANTLOCK_HPP
