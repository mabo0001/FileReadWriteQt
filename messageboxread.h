#ifndef MESSAGEBOXREAD_H
#define MESSAGEBOXREAD_H

#include "abstractread.h"
#include <QMessageBox>

class MessageBoxRead : public AbstractRead
{
public:
    MessageBoxRead();
    ~MessageBoxRead();
    std::string Read(const std::string&);
protected:
    QMessageBox mMessageBox;
};

#endif // MESSAGEBOXREAD_H
