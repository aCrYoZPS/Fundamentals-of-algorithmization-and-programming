#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bst.h"

QT_BEGIN_NAMESPACE
namespace Ui {
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
    void on_On_insert_clicked();

    void on_On_find_clicked();

    void on_On_delete_clicked();

    void on_On_MaxDepth_clicked();

    void on_On_clear_clicked();

    void on_On_print_forward_clicked();

    void on_inBox_3_textChanged(const QString &arg1);

    void on_inBox_4_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    BST<int> bst;
    QGraphicsScene* scene;

};
#endif // MAINWINDOW_H
