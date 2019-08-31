#include "readwritefactory.h"

#include "messageboxread.h"
#include "messageboxwrite.h"
#include "fileread.h"
#include "filewrite.h"

AbstractRead* ReadWriteFactory::CreateReader(const STRATEGY &strategy) {
    std::unique_ptr<AbstractRead> read_ptr = nullptr;

    if (strategy == STRATEGY::FILE_IO) {
        read_ptr = std::make_unique<FileRead>();
    } else {
        read_ptr = std::make_unique<MessageBoxRead>();
    }

    if (read_ptr == nullptr)
        return nullptr;
    return read_ptr.release();
}

AbstractWrite* ReadWriteFactory::CreateWriter(const STRATEGY &strategy) {
    std::unique_ptr<AbstractWrite> write_ptr = nullptr;

    if (strategy == STRATEGY::FILE_IO) {
        write_ptr = std::make_unique<FileWrite>();
    } else {
        write_ptr = std::make_unique<MessageBoxWrite>();
    }

    if (write_ptr == nullptr)
        return nullptr;
    return write_ptr.release();
}
