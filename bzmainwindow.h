#ifndef BZMAINWINDOW_H
#define BZMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class BzMainWindow;
}

class BzMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BzMainWindow(QWidget *parent = 0);
    ~BzMainWindow();

private slots:
    void on_action_Nouveau_triggered();

    void on_action_Quitter_triggered();

private:
    Ui::BzMainWindow *ui;
};

#endif // BZMAINWINDOW_H
