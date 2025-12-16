#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

#include "ui_MainWindow.h"

namespace KumaQtTest
{
    class MainWindow : public QMainWindow
    {
        Q_OBJECT

    private:
        Ui::MainWindow *m_ui;

    public:
        MainWindow();
        ~MainWindow() = default;
    };
}

#endif