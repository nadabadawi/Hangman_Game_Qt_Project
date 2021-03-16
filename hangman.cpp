#include "hangman.h"
#include "ui_hangman.h"

Hangman::Hangman(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Hangman)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->gameover->setVisible(false);
    ui->victory->setVisible(false);



// draw stand for hangman to be initialized since opening game
    QPen Blackpen(Qt::black);
    Blackpen.setWidth(5);
    line = scene->addLine(-100,5,-100,150,Blackpen);//line el ta7t
    line2 = scene->addLine(-100,175,-100,325,Blackpen);//line el fo2
    line3 = scene->addLine(-175,340,-25,340,Blackpen);//stand ta7t
    line4 = scene->addLine(-100,-10,-25,-10,Blackpen);//el bta3a el maska el 7abl
    line5 = scene->addLine(-25,0,-25,25,Blackpen);//el 7abl

    numMistakes = 0;
    numRightButtons = 0;
}

Hangman::~Hangman()
{
    delete ui;
}

void Hangman::wrong_Button_clicked()
{
    QPen Redpen(Qt::red);
    Redpen.setWidth(5);
    numMistakes++;
    if (numMistakes == 1)
    {
        QBrush WhiteBrush(Qt::white);
        ellipse=scene->addEllipse(-55,25,70,70,Redpen,WhiteBrush);
    }
    else if (numMistakes == 2)
    {
        body=scene->addLine(-20,95,-20,250,Redpen);
    }
    else if (numMistakes == 3)
    {
        right_arm=scene->addLine(-20,135,-75,90,Redpen);
    }
    else if (numMistakes == 4)
    {
        left_arm=scene->addLine(-20,135,35,90,Redpen);
    }
    else if (numMistakes == 5)
    {
        right_leg=scene->addLine(-20,200,-75,250,Redpen);
    }
    else if (numMistakes == 6)
    {
        left_leg=scene->addLine(-20,200,35,250,Redpen);
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
    ui->gameover->setVisible(true);
}

void Hangman::victory()
{
    ui->victory->setVisible(true);

}

void Hangman::on_A_clicked()
{
    ui->A1AnswerBox->setText("A");
    ui->A2AnswerBox->setText("A");
    right_Button_clicked();
    ui->A->setVisible(false);
}

void Hangman::on_B_clicked()
{
    wrong_Button_clicked();
    ui->B->setVisible(false);
}

void Hangman::on_C_clicked()
{
    wrong_Button_clicked();
    ui->C->setVisible(false);

}

void Hangman::on_D_clicked()
{
    wrong_Button_clicked();
    ui->D->setVisible(false);

}

void Hangman::on_E_clicked()
{
    wrong_Button_clicked();
    ui->E->setVisible(false);

}

void Hangman::on_F_clicked()
{
    wrong_Button_clicked();
    ui->F->setVisible(false);

}

void Hangman::on_G_clicked()
{
    ui->GAnswerBox->setText("G");
    right_Button_clicked();
    ui->G->setVisible(false);

}

void Hangman::on_H_clicked()
{
    ui->HAnswerBox->setText("H");
    right_Button_clicked();
    ui->H->setVisible(false);

}

void Hangman::on_I_clicked()
{
    wrong_Button_clicked();
    ui->I->setVisible(false);


}

void Hangman::on_J_clicked()
{
    wrong_Button_clicked();
    ui->J->setVisible(false);

}

void Hangman::on_K_clicked()
{
    wrong_Button_clicked();
    ui->K->setVisible(false);

}

void Hangman::on_L_clicked()
{
    wrong_Button_clicked();
    ui->L->setVisible(false);

}

void Hangman::on_M_clicked()
{
    ui->MAnswerBox->setText("M");
    right_Button_clicked();
    ui->M->setVisible(false);

}

void Hangman::on_N_clicked()
{
    ui->N1AnswerBox->setText("N");
    ui->N2AnswerBox->setText("N");
    right_Button_clicked();
    ui->N->setVisible(false);

}

void Hangman::on_O_clicked()
{
    wrong_Button_clicked();
    ui->O->setVisible(false);

}

void Hangman::on_P_clicked()
{
    wrong_Button_clicked();
    ui->P->setVisible(false);

}

void Hangman::on_Q_clicked()
{
    wrong_Button_clicked();
    ui->Q->setVisible(false);

}

void Hangman::on_R_clicked()
{
    wrong_Button_clicked();
    ui->R->setVisible(false);

}

void Hangman::on_S_clicked()
{
    wrong_Button_clicked();
    ui->S->setVisible(false);

}

void Hangman::on_T_clicked()
{
    wrong_Button_clicked();
    ui->T->setVisible(false);

}

void Hangman::on_U_clicked()
{
    wrong_Button_clicked();
    ui->U->setVisible(false);

}

void Hangman::on_V_clicked()
{
    wrong_Button_clicked();
    ui->V->setVisible(false);

}

void Hangman::on_W_clicked()
{
    wrong_Button_clicked();
    ui->W->setVisible(false);

}

void Hangman::on_X_clicked()
{
    wrong_Button_clicked();
    ui->X->setVisible(false);

}

void Hangman::on_Y_clicked()
{
    wrong_Button_clicked();
    ui->Y->setVisible(false);

}

void Hangman::on_Z_clicked()
{
    wrong_Button_clicked();
    ui->Z->setVisible(false);

}
