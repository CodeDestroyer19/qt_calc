#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onNumberClicked();
    void onOperationClicked();
    void onEqualsClicked();
    void onClearClicked();
    void onBackspaceClicked();
    void onDecimalPointClicked();

private:
    enum class Operation
    {
        None,
        Add,
        Subtract,
        Multiply,
        Divide
    };

    void calculateResult();
    void updateDisplay();

    Ui::MainWindow *ui;
    double m_currentValue;
    double m_previousValue;
    Operation m_currentOperation;
    bool m_hasDecimalPoint;
    bool m_isNewNumber;
};

#endif // MAINWINDOW_H
