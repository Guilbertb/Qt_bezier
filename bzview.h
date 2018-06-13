#ifndef BZVIEW_H
#define BZVIEW_H

#include <QWidget>
#include <QMouseEvent>
#include <QDebug>

#define NBPTS 4

class BzView : public QWidget
{
    Q_OBJECT
public:
    explicit BzView(QWidget *parent = nullptr);

    int m_NbPoints=0;
    QPoint m_Points[NBPTS];

signals:

public slots:
    void OnEffacer();
    void OnConstruire(bool);
    void mousePressEvent(QMouseEvent *event);
};

#endif // BZVIEW_H
