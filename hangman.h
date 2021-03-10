#ifndef HANGMAN_H
#define HANGMAN_H

#include <QPainter>
#include <QWidget>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <qgraphicsview.h>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Hangman; }
QT_END_NAMESPACE

class Hangman : public QWidget
{
    Q_OBJECT

public:
    Hangman(QWidget *parent = nullptr);
    ~Hangman();
    

private slots:
    void wrong_Button_clicked();

    void right_Button_clicked();

    void game_over();

    void victory();

    void on_A_clicked();

    void on_B_clicked();

    void on_C_clicked();

    void on_D_clicked();

    void on_E_clicked();

    void on_F_clicked();

    void on_G_clicked();

    void on_H_clicked();

    void on_I_clicked();

    void on_J_clicked();

    void on_K_clicked();

    void on_L_clicked();

    void on_M_clicked();

    void on_N_clicked();

    void on_O_clicked();

    void on_P_clicked();

    void on_Q_clicked();

    void on_R_clicked();

    void on_S_clicked();

    void on_T_clicked();

    void on_U_clicked();

    void on_V_clicked();

    void on_W_clicked();

    void on_X_clicked();

    void on_Y_clicked();

    void on_Z_clicked();

private:
    Ui::Hangman *ui;
    int numMistakes;
    int numRightButtons;
   
    QGraphicsScene* scene;
    
    QGraphicsLineItem* line;//line el ta7t
    QGraphicsLineItem* line2;//line el fo2
    QGraphicsLineItem* line3;//stand ta7t
    QGraphicsLineItem* line4;//el bta3a el maska el 7abl
    QGraphicsLineItem* line5;//el 7abl
    QGraphicsEllipseItem* ellipse;
    QGraphicsLineItem* body, *right_arm,*left_arm,*right_leg,*left_leg;


    /*
    QGraphicsEllipseItem* head;
    QGraphicsRectItem* body;
    QPainter right_arm;
    QPainter left_arm;
    QGraphicsRectItem* right_leg;
    QGraphicsRectItem* left_leg;
    */
};
#endif // HANGMAN_H
