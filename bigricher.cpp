#include "bigricher.h"
#include "ui_bigricher.h"
#include"sign_ui/show_dice_num.h"
#include<cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_throw_dice_clicked()
{
    if(last_round_num==round_num-1){
        last_round_num=round_num;
    }
    if(last_round_num==round_num){
        if(round_num > 80){
            int max0=0;
            for(int i=0;i<4;i++){
                if(Map.man[i].coins > max0){
                    max0=Map.man[i].coins;
                }
            }
            int cnt=0;
            int t;
            for(int i=0;i<4;i++){
                if(Map.man[i].coins==max0){
                    cnt++;
                    t=i;
                }
            }
            if(cnt==1){
                winner=t;
            }
        }
        else{
            int cnt=0;
            for(int i=0;i<4;i++){
                if(Map.man[i].if_play==false){
                    cnt++;
                }
            }
            if(cnt==3){
                for(int i=0;i<4;i++){
                    if(Map.man[i].if_play==true){
                        winner=i;
                    }
                }
            }
        }
        if(winner!=-1){
            ed.ui->lineEdit->setText(QString::number(winner));
            ed.show();
            this->close();
        }
    }
    cur_player=next_player;
    Map.man[cur_player].if_airport=false;
    Map.man[cur_player].coins_inbank *= (1+Map.bank_rate);
    //掷骰子*************
    srand((unsigned int)time(NULL));
    DICE=rand()%6+1;//生成随机数
    DICENUM.dice_num=DICE;
    DICENUM.fresh();
    if(winner==-1){
        DICENUM.show();
    }
    //******************

    //player位置移动******
    Map.move(cur_player,DICE);
    fresh();
    //******************

    if(winner==-1){
        take_event();
    }
    //处理next_player和round,切记要在执行完格子的事件后再来处理这些事情*******
    if(Map.man[cur_player].if_extra_round==false){
        for(int i=cur_player+1;i<4;i++){
            if(Map.man[i].if_play and Map.man[i].if_skip_round==false){
                next_player=i;break;
            }
            else if(Map.man[i].if_play and Map.man[i].if_skip_round==true){
                //pe2.show();
                Map.man[i].if_skip_round=false;
            }
        }
        if(cur_player==next_player){
            for(int i=0;i<cur_player;i++){
                if(Map.man[i].if_play and Map.man[i].if_skip_round==false){
                    next_player=i;break;
                }
                else if(Map.man[i].if_play and Map.man[i].if_skip_round==true){
                    //pe2.show();
                    Map.man[i].if_skip_round=false;
                }
            }
        }
    }
    else if(Map.man[cur_player].if_extra_round==true){
        next_player=cur_player;
        Map.man[cur_player].if_extra_round=false;
    }
    if(next_player<=cur_player){//有改动
        round_num++;
    }
    fresh();
    //***************************************************************
}


void Dialog::on_player0information_clicked()
{
    s.Map=&Map;
    s.fresh_information(0);
    s.show();
}


void Dialog::on_player1information_clicked()
{
    s.Map=&Map;
    s.fresh_information(1);
    s.show();
}


void Dialog::on_player2information_clicked()
{
    s.Map=&Map;
    s.fresh_information(2);
    s.show();
}


void Dialog::on_player3information_clicked()
{
    s.Map=&Map;
    s.fresh_information(3);
    s.show();
}


void Dialog::on_pushButton_2_clicked()
{
    cs.Map=&Map;
    cs.fresh(1);
    cs.show();
}


void Dialog::on_pushButton_4_clicked()
{
    cs.Map=&Map;
    cs.fresh(3);
    cs.show();
}


void Dialog::on_pushButton_5_clicked()
{
    cs.Map=&Map;
    cs.fresh(4);
    cs.show();
}


void Dialog::on_pushButton_7_clicked()
{
    cs.Map=&Map;
    cs.fresh(6);
    cs.show();
}


void Dialog::on_pushButton_10_clicked()
{
    cs.Map=&Map;
    cs.fresh(9);
    cs.show();
}


void Dialog::on_pushButton_11_clicked()
{
    cs.Map=&Map;
    cs.fresh(10);
    cs.show();
}


void Dialog::on_pushButton_12_clicked()
{
    cs.Map=&Map;
    cs.fresh(11);
    cs.show();
}


void Dialog::on_pushButton_14_clicked()
{
    cs.Map=&Map;
    cs.fresh(13);
    cs.show();
}


void Dialog::on_pushButton_16_clicked()
{
    cs.Map=&Map;
    cs.fresh(15);
    cs.show();
}


void Dialog::on_pushButton_18_clicked()
{
    cs.Map=&Map;
    cs.fresh(17);
    cs.show();
}


void Dialog::on_pushButton_19_clicked()
{
    cs.Map=&Map;
    cs.fresh(18);
    cs.show();
}


void Dialog::on_pushButton_21_clicked()
{
    cs.Map=&Map;
    cs.fresh(20);
    cs.show();
}


void Dialog::on_pushButton_22_clicked()
{
    cs.Map=&Map;
    cs.fresh(21);
    cs.show();
}


void Dialog::on_pushButton_24_clicked()
{
    cs.Map=&Map;
    cs.fresh(23);
    cs.show();
}


void Dialog::on_pushButton_27_clicked()
{
    cs.Map=&Map;
    cs.fresh(26);
    cs.show();
}


void Dialog::on_pushButton_28_clicked()
{
    cs.Map=&Map;
    cs.fresh(27);
    cs.show();
}


void Dialog::on_pushButton_29_clicked()
{
    cs.Map=&Map;
    cs.fresh(28);
    cs.show();
}


void Dialog::on_pushButton_31_clicked()
{
    cs.Map=&Map;
    cs.fresh(30);
    cs.show();
}


void Dialog::on_pushButton_32_clicked()
{
    cs.Map=&Map;
    cs.fresh(31);
    cs.show();
}


void Dialog::on_pushButton_6_clicked()
{
    b.Map=&Map;
    b.fresh();
    b.show();
}


void Dialog::on_pushButton_15_clicked()
{
    b.Map=&Map;
    b.fresh();
    b.show();
}


void Dialog::on_pushButton_25_clicked()
{
    b.Map=&Map;
    b.fresh();
    b.show();
}


void Dialog::on_pushButton_8_clicked()
{
    fs.Map=&Map;
    fs.fresh(0);
    fs.show();
}


void Dialog::on_pushButton_23_clicked()
{
    fs.Map=&Map;
    fs.fresh(1);
    fs.show();
}


void Dialog::on_pushButton_30_clicked()
{
    fs.Map=&Map;
    fs.fresh(2);
    fs.show();
}


void Dialog::on_pushButton_3_clicked()
{
    rrs.show();
}


void Dialog::on_pushButton_20_clicked()
{
    rrs.show();
}


void Dialog::on_pushButton_13_clicked()
{
    res.show();
}


void Dialog::on_pushButton_26_clicked()
{
    res.show();
}


void Dialog::on_pushButton_clicked()
{
    if(Map.man[0].if_airport){
        fresh();
        Map.man[0].if_airport=false;
        take_event();
    }
}


void Dialog::on_pushButton_9_clicked()
{
    if(Map.man[1].if_airport){
        fresh();
        Map.man[1].if_airport=false;
        take_event();
    }
}


void Dialog::on_pushButton_17_clicked()
{
    if(Map.man[2].if_airport){
        fresh();
        Map.man[2].if_airport=false;
        take_event();
    }
}


void Dialog::on_pushButton_33_clicked()
{
    if(Map.man[3].if_airport){
        fresh();
        Map.man[3].if_airport=false;
        take_event();
    }
}


void Dialog::on_pushButton_34_clicked()
{
    rls.show();
}


void Dialog::on_pushButton_35_clicked()
{
    bi.show();
}


void Dialog::on_pushButton_36_clicked()
{
    ps.show();
}


void Dialog::on_pushButton_37_clicked()
{
    as.show();
}

