#ifndef READWRITEFACTORY_H
#define READWRITEFACTORY_H

#include "abstractread.h"
#include "abstractwrite.h"
#include "messageboxread.h"
#include "messageboxwrite.h"


enum class STRATEGY {
    MESSAGE_BOX,
    FILE_IO
};

class ReadWriteFactory
{
public:
    ReadWriteFactory() = delete;
    static AbstractRead* CreateReader(const STRATEGY&);
    static AbstractWrite* CreateWriter(const STRATEGY&);
};

#endif // READWRITEFACTORY_H
