#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    newFileNum = 1;
    // 初始化窗口标题为文件名
    setWindowTitle("MulDocEdi");


    /*这种工具栏*/


    /*设置状态栏*/
    ui->statusBar->showMessage(tr("欢迎使用多文档编辑器"),2000);
    QLabel *permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Sunken);
    permanent->setText("www.qq.com");
    ui->statusBar->addPermanentWidget(permanent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_help_triggered()
{
    QMessageBox mess;
    mess.setWindowTitle(tr("Help"));
    mess.setIcon(QMessageBox::Information);
    mess.setText(tr(VERSION));
    mess.exec();
}


/*新建文件*/
void MainWindow::on_action_new_triggered()
{
    //新建文本编辑器部件
    QTextEdit *edit = new QTextEdit(this);
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("new")+QString::number(newFileNum++));
    child->show();
}
/*打开文件*/
void MainWindow::on_action_open_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    if (!fileName.isEmpty())
    {
        //文件存在
        QFile file(fileName);
        if (!file.open(QFile::ReadWrite | QFile::Text))
        {
            QMessageBox::warning(this, tr("多文档编辑器"),tr("无法读取文件 %1:\n%2.").arg(fileName).arg(file.errorString()));
            return; // 只读方式打开文件，出错则提示，并返回false
        }
        QTextStream in(&file); // 新建文本流对象
        QApplication::setOverrideCursor(Qt::WaitCursor);// 鼠标指针变为等待状态
        QTextEdit *edit = new QTextEdit(this);//创建新的QTextEdit对象，并显示
        edit->setPlainText(in.readAll());
        QApplication::restoreOverrideCursor();// 鼠标指针恢复原来的状态
        //添加新的文档，并显示
        QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
        child->setWindowTitle(fileName);
        child->show();


    }
}

/*保存文件*/
void MainWindow::on_action_save_triggered()
{
    QMdiSubWindow *child = ui->mdiArea->currentSubWindow();
    QTextEdit *edit = (QTextEdit *)child->widget();
    QString fileName = child->windowTitle();//获取文件名
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        // %1和%2分别对应后面arg两个参数，/n起换行的作用
        QMessageBox::warning(this, tr("多文档编辑器"),tr("无法写入文件 %1：\n %2").arg(fileName).arg(file.errorString()));
        return;
    }
    QTextStream out(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);// 鼠标指针变为等待状态
    out << edit->toPlainText();
    QApplication::restoreOverrideCursor();// 鼠标指针恢复原来的状态
}
