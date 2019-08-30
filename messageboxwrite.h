#ifndef MESSAGEBOXWRITE_H
#define MESSAGEBOXWRITE_H

#include "abstractwrite.h"

#include <QMessageBox>

class MessageBoxWrite : public AbstractWrite
{
public:
    MessageBoxWrite();
    ~MessageBoxWrite();
    void Write(const std::string&, const std::string&);
protected:
    QMessageBox mMessageBox;
};

#endif // MESSAGEBOXWRITE_H
