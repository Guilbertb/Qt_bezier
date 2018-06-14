#include "bzview.h"

#include <QPainter>

BzView::BzView(QWidget *parent) : QWidget(parent)
{

}

void BzView::OnEffacer()
{
}

void BzView::OnConstruire(bool)
{
}

void BzView::mousePressEvent(QMouseEvent *event) //surcharge de mousePressEvent
{
    //qDebug() << event->pos();
    //qDebug() <<event->globalX();


    if (event->button()== Qt::LeftButton)
    {
    if (m_NbPoints < NBPTS )
        m_Points[m_NbPoints++]=event->pos(); //on enregsitre le point
    qDebug() << m_Points[m_NbPoints-1];
    update();  // rafraichi l'affichage
    }
    else
    {
        // ici caluler si on est dans les cercles ...

    }



}

void BzView::paintEvent(QPaintEvent *event)// surcharge de QPaintEveent
{
    qDebug()<< "paintEvent";
    QPainter painter(this);
    QPen pen(Qt::red,PTWITDH);
    painter.setPen(pen);

    for (int i=0; i < m_NbPoints; i++)
        painter.drawEllipse(m_Points[i],PTSIZE,PTSIZE);

    // on place le bézier si on a les 4 points
    if (m_NbPoints>=4)
    {
        QPainterPath path;
        path.moveTo(m_Points[0]);
        path.cubicTo(m_Points[1],m_Points[2],m_Points[3]);
        painter.drawPath(path);
    }


}
