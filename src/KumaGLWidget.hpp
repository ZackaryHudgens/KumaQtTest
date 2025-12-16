#ifndef KUMAGLWIDGET_HPP
#define KUMAGLWIDGET_HPP

#include <QOpenGLWidget>

namespace KumaQtTest
{
    class KumaGLWidget : public QOpenGLWidget
    {
        Q_OBJECT

    private:
    public:
        KumaGLWidget(QWidget *parent = nullptr);
        ~KumaGLWidget() = default;

        void initializeGL() override;
        void paintGL() override;
    };
}

#endif