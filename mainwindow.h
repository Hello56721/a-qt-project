#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_setButton_clicked();

    void on_textToSet_returnPressed();

    void on_pushButton_2_clicked();

    void on_warningButton_clicked();
    
    void on_errorButton_clicked();
    
    void on_checkCheckBox_clicked();
    
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
