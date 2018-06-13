#include "bzview.h"

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

m_Points[m_NbPoints++]=event->pos(); //on enregsitre le point
qDebug() << m_Points[m_NbPoints-1];

}
