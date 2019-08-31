#ifndef FILEREAD_H
#define FILEREAD_H

#include "abstractread.h"

#include <QMessageBox>

class FileRead : public AbstractRead
{
public:
    FileRead();
    ~FileRead();
    std::string Read(const std::string&);
protected:
    QMessageBox mMessageBox;
};

#endif // FILEREAD_H
