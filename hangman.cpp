#include "hangman.h"
#include "ui_hangman.h"

Hangman::Hangman(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Hangman)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->gView->setScene(scene);

// draw stand for hangman to be initialized since opening game

    numMistakes = 0;
    numRightButtons = 0;
}

Hangman::~Hangman()
{
    delete ui;
}

void Hangman::wrong_Button_clicked()
{
    numMistakes++;
    if (numMistakes == 1)
    {

    }
    else if (numMistakes == 2)
    {

    }
    else if (numMistakes == 3)
    {

    }
    else if (numMistakes == 4)
    {

    }
    else if (numMistakes == 5)
    {

    }
    else if (numMistakes == 6)
    {
        game_over();
    }
}

void Hangman::right_Button_clicked()
{
    numRightButtons++;
    if (numRightButtons == 5)
        victory();
}

void Hangman::game_over()
{
    /*
    QPainter mytext(this);
    mytext.setFont(QFont("Times New Roman", 48, QFont::Bold));
    mytext.drawText(20, 30, "GAME OVER");
    */
}

void Hangman::victory()
{

}

void Hangman::on_A_clicked()
{
    //draw 'a' in slots decided for a in hangman (nada)
    right_Button_clicked();
}

void Hangman::on_B_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_C_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_D_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_E_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_F_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_G_clicked()
{

}

void Hangman::on_H_clicked()
{

}

void Hangman::on_I_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_J_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_K_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_L_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_M_clicked()
{

}

void Hangman::on_N_clicked()
{

}

void Hangman::on_O_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_P_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_Q_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_R_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_S_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_T_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_U_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_V_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_W_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_X_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_Y_clicked()
{
    wrong_Button_clicked();
}

void Hangman::on_Z_clicked()
{
    wrong_Button_clicked();
}
