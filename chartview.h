#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include <QtCharts/QChartView>

class ChartView : public QtCharts::QChartView
{
    Q_OBJECT
public:
    ChartView()
    {
        m_lastMousePos.setX(0);
        m_lastMousePos.setY(0);
    }
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
private:
    QPointF m_lastMousePos;

signals:
    void mousePress();
    void mouseRelease();
};


#endif // CHARTVIEW_H
