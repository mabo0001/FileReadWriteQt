#include "messageboxwrite.h"
#include <QString>

#include <iostream>

MessageBoxWrite::MessageBoxWrite()
{

}

MessageBoxWrite::~MessageBoxWrite() {
    std::cout << "MessageBoxWrite destroyed" << std::endl;
}

void MessageBoxWrite::Write(const std::string &filename, const std::string &message) {
    QString write_text("Writing ");
    write_text.append(message.c_str());
    write_text.append(" to ");
    write_text.append(filename.c_str());

    mMessageBox.setText(write_text);
    mMessageBox.exec();
}
