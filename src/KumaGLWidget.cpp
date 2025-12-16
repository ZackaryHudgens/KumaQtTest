#include "KumaGLWidget.hpp"

#include <memory>

namespace KumaQtTest
{
    KumaGLWidget::KumaGLWidget(QWidget *parent) : QOpenGLWidget(parent)
    {
    }

    void KumaGLWidget::initializeGL()
    {
        glClearColor(1.0, 0.0, 0.0, 1.0);
    }

    void KumaGLWidget::paintGL()
    {
        glClear(GL_COLOR_BUFFER_BIT);
    }
}