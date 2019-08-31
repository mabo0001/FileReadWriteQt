#include "filewrite.h"

#include <iostream>
#include <fstream>

#include <QString>

FileWrite::FileWrite()
{

}

FileWrite::~FileWrite() {
    std::cout << "FileWrite destroyed" << std::endl;
}

void FileWrite::Write(const std::string &filename, const std::string &message) {
    std::ofstream output_file(filename);

    if (output_file.is_open()) {
        output_file << message;
        output_file.close();
    } else {
        QString error_string("Could not open ");
        error_string.append(filename.c_str());
        std::cout << error_string.toStdString() << std::endl;
        mMessageBox.setText(error_string);
        mMessageBox.exec();
    }


}
