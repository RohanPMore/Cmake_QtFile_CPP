#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the signals to the slots
    connect(ui->addNoteButton, &QPushButton::clicked, this, &MainWindow::on_addNoteButton_clicked);
    connect(ui->clearButton, &QPushButton::clicked, this, &MainWindow::on_clearButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addNoteButton_clicked()
{
    QString note = ui->textEdit->toPlainText();
    if (!note.isEmpty()) {
        ui->listWidget->addItem(note);
        ui->textEdit->clear();
    }
}

void MainWindow::on_clearButton_clicked()
{
    ui->listWidget->clear();
}
