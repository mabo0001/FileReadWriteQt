#include "mainview.h"
#include "ui_mainview.h"

#include <iostream>

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    std::cout << "const" << std::endl;
    ui->setupUi(this);

//    mReader_ptr.reset(ReadWriteFactory::CreateReader(STRATEGY::MESSAGE_BOX));
//    mWriter_ptr.reset(ReadWriteFactory::CreateWriter(STRATEGY::MESSAGE_BOX));
    mReader_ptr.reset(ReadWriteFactory::CreateReader(STRATEGY::FILE_IO));
    mWriter_ptr.reset(ReadWriteFactory::CreateWriter(STRATEGY::FILE_IO));

    this->m_wire_signals_slots();
}

MainView::~MainView()
{
    delete ui;
}

void MainView::test_func()
{
//    QMessageBox box;
//    box.setText("test");
//    box.exec();
}

void MainView::m_wire_signals_slots()
{
    std::cout << "wire" << std::endl;
    connect(ui->btnWrite, &QPushButton::clicked,
            this, &MainView::m_write_button_pushed);
    connect(ui->btnRead, &QPushButton::clicked,
            this, &MainView::m_read_button_pushed);
}

void MainView::m_write_button_pushed()
{
    std::cout << "write test" << std::endl;
    std::string input_value = ui->lneInputText->text().toStdString();
    std::string filename = ui->lneWriteFile->text().toStdString();

    mWriter_ptr->Write(filename, input_value);
}

void MainView::m_read_button_pushed()
{
    ui->plainTextEdit->clear();

    std::cout << "read test" << std::endl;
    std::string filename = ui->lneReadFile->text().toStdString();

    std::string read_value = mReader_ptr->Read(filename);

    ui->plainTextEdit->appendPlainText(read_value.c_str());
}
