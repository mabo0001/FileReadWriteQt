#include "messageboxread.h"
#include <QString>

#include <iostream>

MessageBoxRead::MessageBoxRead()
{

}

MessageBoxRead::~MessageBoxRead() {
    std::cout << "MessageBoxRead destroyed" << std::endl;
}

std::string MessageBoxRead::Read(const std::string &filename) {
    QString text_string("Reading from ");
    text_string.append(filename.c_str());
    mMessageBox.setText(text_string);
    mMessageBox.exec();

    std::string return_value(text_string.toStdString());

    return return_value;
}
