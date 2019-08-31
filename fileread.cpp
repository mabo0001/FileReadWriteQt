#include "fileread.h"

#include <iostream>
#include <fstream>
#include <sstream>

FileRead::FileRead()
{

}

FileRead::~FileRead() {
    std::cout << "FileRead destroyed" << std::endl;
}

std::string FileRead::Read(const std::string &filename) {
    std::stringstream string_stream;

    std::ifstream input_file(filename);

    if (input_file.is_open()) {
        std::string line;
        while (std::getline(input_file, line)) {
//            std::cout << "R " << line << std::endl;
            string_stream << line;
        }
        input_file.close();
    } else {
        QString error_string("Could not open ");
        error_string.append(filename.c_str());
        std::cout << error_string.toStdString() << std::endl;
        mMessageBox.setText(error_string);
        mMessageBox.exec();
    }

//    std::cout << "Z " << string_stream.str() << std::endl;
    return string_stream.str();
}
