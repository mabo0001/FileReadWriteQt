#ifndef ABSTRACTREAD_H
#define ABSTRACTREAD_H

#include <string>

class AbstractRead
{
public:
    AbstractRead();
    virtual ~AbstractRead();
    virtual std::string Read(const std::string&) = 0;
};

#endif // ABSTRACTREAD_H
