#include "mainview.h"
#include "ui_mainview.h"

#include <iostream>

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    std::cout << "const" << std::endl;
    ui->setupUi(this);
    this->m_wire_signals_slots();

//    emit WriteButtonPushed();
}

MainView::~MainView()
{
    delete ui;
}

void MainView::test_func()
{

}

void MainView::m_wire_signals_slots()
{
    std::cout << "wire" << std::endl;
//    connect(&ui->btnWrite, &MainView::WriteButtonPushed,
//            this, &MainView::m_write_button_pushed);

//    connect(&m_instSocket, &InstSocket::NotifyDisconnected,
//            this, &Instrument::onDisconnected);

//    connect(ui, &MainView::WriteButtonPushed,
//            this, &MainView::m_write_button_pushed);

//    connect(this, &MainView::WriteButtonPushed,
//            this, &MainView::m_write_button_pushed);
}

void MainView::m_write_button_pushed()
{
    std::cout << "test" << std::endl;
    mMsgBox.setText("test");
    mMsgBox.exec();
}

void MainView::m_read_button_pushed()
{

}
