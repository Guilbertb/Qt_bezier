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
}

void BzView::paintEvent(QPaintEvent *event)// surcharge de QPaintEveent
{
    qDebug()<< "paintEvent";
    QPainter painter(this);
    QPen pen(Qt::red,2);
    painter.setPen(pen);

    for (int i=0; i < m_NbPoints; i++)
        painter.drawEllipse(m_Points[i],6,6);


}
