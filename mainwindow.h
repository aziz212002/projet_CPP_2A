#ifndef MAINWINDOW_H
#define MAINWINDOW_H


// .... AZIZ
#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include "personnel.h"
#include<QAbstractSocket>
#include<QtNetwork>
#include <QTcpSocket>
#include <QDateTime>
#include <QMessageBox>
#include "QIntValidator"
#include <QDateEdit>
#include <QPlainTextEdit>
#include <QPrinter>
//#include <QPrinterInfo>
//#include <QPrintDialog>
#include <QTextStream>
#include <QPainter>
#include <QTextStream>
#include <QFileDialog>
#include <QTextDocument>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <strstream>
#include <QSystemTrayIcon>
#include <QRegExpValidator>
#include <QDesktopServices>
#include <QUrl>
#include <arduino.h>
#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include <QTcpSocket>
//#include <QQuickItem>
#include <QSystemTrayIcon>
#include <QIntValidator>
#include "dialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
    Dialog * Ui;
   // mapping * m;

};

#endif // MAINWINDOW_H
