#ifndef IBIOS_HPP
#define IBIOS_HPP


class IBios
{
public:

    virtual void read() = 0;
    virtual bool isReaded() = 0;
    virtual void write() = 0;
    virtual bool isInfected() = 0;
    virtual void infect() = 0;
    virtual void ensureInfected() = 0;
    virtual void clear() = 0;
    virtual ~IBios() {};
};

#endif // IBIOS_HPP
