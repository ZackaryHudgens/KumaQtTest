#include "MainWindow.hpp"

namespace KumaQtTest
{
    MainWindow::MainWindow() : m_ui(new Ui::MainWindow())
    {
        m_ui->setupUi(this);
    }
}