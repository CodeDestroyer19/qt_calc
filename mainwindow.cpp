#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), m_currentValue(0.0), m_previousValue(0.0), m_currentOperation(Operation::None), m_hasDecimalPoint(false), m_isNewNumber(true)
{
    ui->setupUi(this);

    // Connect number buttons
    connect(ui->btn0, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn1, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn2, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn3, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn4, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn5, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn6, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn7, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn8, &QPushButton::clicked, this, &MainWindow::onNumberClicked);
    connect(ui->btn9, &QPushButton::clicked, this, &MainWindow::onNumberClicked);

    // Connect operation buttons
    connect(ui->btnPlus, &QPushButton::clicked, this, &MainWindow::onOperationClicked);
    connect(ui->btnMinus, &QPushButton::clicked, this, &MainWindow::onOperationClicked);
    connect(ui->btnMultiply, &QPushButton::clicked, this, &MainWindow::onOperationClicked);
    connect(ui->btnDivide, &QPushButton::clicked, this, &MainWindow::onOperationClicked);

    // Connect other buttons
    connect(ui->btnEquals, &QPushButton::clicked, this, &MainWindow::onEqualsClicked);
    connect(ui->btnClear, &QPushButton::clicked, this, &MainWindow::onClearClicked);
    connect(ui->btnBackspace, &QPushButton::clicked, this, &MainWindow::onBackspaceClicked);
    connect(ui->btnDot, &QPushButton::clicked, this, &MainWindow::onDecimalPointClicked);

    // Initialize display
    updateDisplay();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNumberClicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button)
        return;

    QString digit = button->text();

    if (m_isNewNumber)
    {
        ui->display->setText(digit);
        m_isNewNumber = false;
    }
    else
    {
        ui->display->setText(ui->display->text() + digit);
    }
}

void MainWindow::onOperationClicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button)
        return;

    // Calculate previous operation if exists
    if (m_currentOperation != Operation::None)
    {
        calculateResult();
    }

    // Store current value and operation
    m_previousValue = ui->display->text().toDouble();
    QString op = button->text();

    if (op == "+")
        m_currentOperation = Operation::Add;
    else if (op == "-")
        m_currentOperation = Operation::Subtract;
    else if (op == "×")
        m_currentOperation = Operation::Multiply;
    else if (op == "÷")
        m_currentOperation = Operation::Divide;

    m_isNewNumber = true;
    m_hasDecimalPoint = false;
}

void MainWindow::onEqualsClicked()
{
    if (m_currentOperation != Operation::None)
    {
        calculateResult();
        m_currentOperation = Operation::None;
    }
}

void MainWindow::onClearClicked()
{
    m_currentValue = 0.0;
    m_previousValue = 0.0;
    m_currentOperation = Operation::None;
    m_hasDecimalPoint = false;
    m_isNewNumber = true;
    updateDisplay();
}

void MainWindow::onBackspaceClicked()
{
    QString currentText = ui->display->text();
    if (currentText.length() > 1)
    {
        currentText.chop(1);
        ui->display->setText(currentText);
    }
    else
    {
        ui->display->setText("0");
        m_isNewNumber = true;
    }
}

void MainWindow::onDecimalPointClicked()
{
    if (m_isNewNumber)
    {
        ui->display->setText("0.");
        m_isNewNumber = false;
    }
    else if (!m_hasDecimalPoint)
    {
        ui->display->setText(ui->display->text() + ".");
    }
    m_hasDecimalPoint = true;
}

void MainWindow::calculateResult()
{
    double currentValue = ui->display->text().toDouble();
    double result = 0.0;

    switch (m_currentOperation)
    {
    case Operation::Add:
        result = m_previousValue + currentValue;
        break;
    case Operation::Subtract:
        result = m_previousValue - currentValue;
        break;
    case Operation::Multiply:
        result = m_previousValue * currentValue;
        break;
    case Operation::Divide:
        if (currentValue == 0.0)
        {
            ui->display->setText("Error");
            m_isNewNumber = true;
            return;
        }
        result = m_previousValue / currentValue;
        break;
    default:
        return;
    }

    // Handle result display
    if (result == std::floor(result))
    {
        ui->display->setText(QString::number(static_cast<qint64>(result)));
    }
    else
    {
        ui->display->setText(QString::number(result, 'g', 10));
    }

    m_currentValue = result;
    m_isNewNumber = true;
    m_hasDecimalPoint = ui->display->text().contains('.');
}

void MainWindow::updateDisplay()
{
    ui->display->setText("0");
}
