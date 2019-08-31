#ifndef FILEWRITE_H
#define FILEWRITE_H

#include "abstractwrite.h"

#include <QMessageBox>

class FileWrite : public AbstractWrite
{
public:
    FileWrite();
    ~FileWrite();
    void Write(const std::string&, const std::string&);
protected:
    QMessageBox mMessageBox;
};

#endif // FILEWRITE_H
