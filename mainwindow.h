#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QLabel>
#include <QTextEdit>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QTextStream>


#include "dockwidget.h"


#define VERSION "V0.1"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_help_triggered();

    void on_action_new_triggered();

    void on_action_open_triggered();

    void on_action_save_triggered();

private:
    Ui::MainWindow *ui;
    bool isUntitled;
    QString curFile;
    DockWidget *d;
    int newFileNum;
};

#endif // MAINWINDOW_H
