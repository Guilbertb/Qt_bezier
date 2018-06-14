#ifndef BZVIEW_H
#define BZVIEW_H

#include <QWidget>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QDebug>

#define NBPTS 4
#define PTSIZE 6
#define PTWITDH 2

class BzView : public QWidget
{
    Q_OBJECT
    void paintEvent(QPaintEvent *event);
public:
    explicit BzView(QWidget *parent = nullptr);

    int m_NbPoints=0;
    QPoint m_Points[NBPTS];

signals:

public slots:
    void OnEffacer();
    void OnConstruire(bool);
    void mousePressEvent(QMouseEvent *event);
    int m_CapturedPoint=-1;
};

#endif // BZVIEW_H
