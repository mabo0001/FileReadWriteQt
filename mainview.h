#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = nullptr);
    ~MainView();
    void test_func();

signals:
    void WriteButtonPushed();
    void ReadButtonPushed();
public slots:
    void m_write_button_pushed();
    void m_read_button_pushed();
private:
    Ui::MainView *ui;
    void m_wire_signals_slots();
    QMessageBox mMsgBox;
};

#endif // MAINVIEW_H
