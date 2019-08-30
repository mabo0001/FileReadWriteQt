#ifndef ABSTRACTWRITE_H
#define ABSTRACTWRITE_H

#include <string>

class AbstractWrite
{
public:
    AbstractWrite();
    virtual ~AbstractWrite();
    virtual void Write(const std::string&, const std::string&) = 0;
};

#endif // ABSTRACTWRITE_H
