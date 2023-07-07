#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ui_bigricher.h"
#include"map.h"
#include"sign_ui/show_dice_num.h"
#include"ui_show_dice_num.h"
#include"ui_player_information_show.h"
#include"information_show/player_information_show.h"
#include "ui_city_show.h"
#include "information_show/city_show.h"
#include "ui_bank.h"
#include "information_show/bank.h"
#include "ui_factory_show.h"
#include "information_show/factory_show.h"
#include "ui_re_show.h"
#include "information_show/re_show.h"
#include "ui_rr_show.h"
#include "information_show/rr_show.h"
#include "ui_bank_event.h"
#include "block_event/bank_event.h"
#include "ui_city_event.h"
#include "block_event/city_event.h"
#include "ui_city_event_2.h"
#include "block_event/city_event_2.h"
#include "ui_city_event_3.h"
#include "block_event/city_event_3.h"
#include "ui_factory_event.h"
#include "block_event/factory_event.h"
#include "ui_factory_event_2.h"
#include "block_event/factory_event_2.h"
#include "ui_prison_event.h"
#include "block_event/prison_event.h"
#include "ui_prison_event_2.h"
#include "block_event/prison_event_2.h"
#include "ui_wrong_input_sign.h"
#include "sign_ui/wrong_input_sign.h"
#include "ui_airport_event.h"
#include "block_event/airport_event.h"
#include "ui_re_event.h"
#include "block_event/re_event.h"
#include "ui_rr_event.h"
#include "block_event/rr_event.h"
#include "ui_near_death_choose.h"
#include "near_death_ui/near_death_choose.h"
#include "ui_sell_out.h"
#include "near_death_ui/sell_out.h"
#include "ui_end.h"
#include "end.h"
#include "ui_rules.h"
#include "rules.h"
#include "ui_begin_information.h"
#include "information_show/begin_information.h"
#include "ui_prison_show.h"
#include "information_show/prison_show.h"
#include "ui_airport_show.h"
#include "information_show/airport_show.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    player_information_show s;
    city_show cs;
    bank b;
    factory_show fs;
    re_show res;
    rr_show rrs;
    begin_information bi;
    prison_show ps;
    airport_show as;
    bank_event be;
    city_event ce;
    city_event_2 ce2;
    city_event_3 ce3;
    factory_event fe;
    factory_event_2 fe2;
    prison_event pe;
    prison_event_2 pe2;
    airport_event ae;
    re_event ree;
    rr_event rre;
    wrong_input_sign wis;
    void fresh(){
        ui->player0alive->clear();
        ui->player0place->clear();
        if(Map.man[0].if_play){
            ui->player0alive->setText("是");
            ui->player0place->setText(QString::number(Map.man[0].position));
        }
        else ui->player0alive->setText("否");

        ui->player1alive->clear();
        ui->player1place->clear();
        if(Map.man[1].if_play){
            ui->player1alive->setText("是");
            ui->player1place->setText(QString::number(Map.man[1].position));
        }
        else ui->player1alive->setText("否");

        ui->player2alive->clear();
        ui->player2place->clear();
        if(Map.man[2].if_play){
            ui->player2alive->setText("是");
            ui->player2place->setText(QString::number(Map.man[2].position));
        }
        else ui->player2alive->setText("否");

        ui->player3alive->clear();
        ui->player3place->clear();
        if(Map.man[3].if_play){
            ui->player3alive->setText("是");
            ui->player3place->setText(QString::number(Map.man[3].position));
        }
        else ui->player3alive->setText("否");

        ui->round_number->setText(QString::number(round_num));
        ui->next_player_num->setText(QString::number(next_player));
    }
    //基本地图设置***************
    map Map;
    int max_round_num;
    int round_num=1;
    int last_round_num=0;
    int cur_player=-1;
    int next_player=0;
    int winner=-1;
    rules rls;
    //*************************

    //投掷筛子过程***************
    show_dice_num DICENUM;
    int DICE;
    //*************************
    void take_event(){
        if(Map.man[cur_player].if_play){
            if(Map.blocks_type[Map.man[cur_player].position]==6){
                ae.fresh(cur_player);
                ae.Map=&Map;
                ae.show();
            }
            else if(Map.blocks_type[Map.man[cur_player].position]==3){
                be.Map=&Map;
                be.fresh(cur_player);
                be.show();
            }
            else if(Map.blocks_type[Map.man[cur_player].position]==1){
                ce.Map=&Map;
                ce2.Map=&Map;
                ce3.Map=&Map;
                if(Map.city_owner[Map.man[cur_player].position]==-1){
                    ce2.fresh(Map.man[cur_player].position,cur_player);
                    ce2.show();
                }
                else if(Map.city_owner[Map.man[cur_player].position]==cur_player){
                    ce.fresh(Map.man[cur_player].position,cur_player);
                    ce.show();
                }
                else{
                    ce3.fresh(Map.man[cur_player].position,cur_player);
                    Map.man[cur_player].coins-=Map.city_pass_tax[Map.man[cur_player].position][Map.level_of_city[Map.man[cur_player].position]];
                    Map.man[Map.city_owner[Map.man[cur_player].position]].coins+=Map.city_pass_tax[Map.man[cur_player].position][Map.level_of_city[Map.man[cur_player].position]];
                    ce3.show();
                }

            }
            else if(Map.blocks_type[Map.man[cur_player].position]==2){
                fe.Map=&Map;
                fe2.Map=&Map;
                bool flag=false;
                for(int i=0;i<3;i++){
                    if(Map.factory_owner[Map.blocks_num[Map.man[cur_player].position]][i]==cur_player){
                        flag=true;
                    }
                }
                if(!flag){
                    int cnt=0;
                    for (int i = 0; i < 3; ++i) {
                        if(Map.factory_owner[Map.blocks_num[Map.man[cur_player].position]][i]!=-1){
                            cnt++;
                        }
                    }
                    Map.man[cur_player].coins-=(Map.factory_pass_tax)*cnt;
                    for (int i = 0; i < 3; ++i) {
                        if(Map.factory_owner[Map.blocks_num[Map.man[cur_player].position]][i]!=-1){
                            Map.man[Map.factory_owner[Map.blocks_num[Map.man[cur_player].position]][i]].coins+=Map.factory_pass_tax;
                        }
                    }
                    fe2.fresh(Map.man[cur_player].position,cur_player);
                    if(cnt!=0){
                        fe2.show();
                    }
                    fe.fresh(Map.man[cur_player].position,cur_player);
                    if(cnt!=3){
                        fe.show();
                    }
                }

            }
            else if(Map.blocks_type[Map.man[cur_player].position]==5){
                Map.man[cur_player].if_skip_round=true;
                pe.Map=&Map;
                pe.fresh(cur_player);
                pe.show();
            }
            else if(Map.blocks_type[Map.man[cur_player].position]==8){
                ree.re1.Map=&Map;
                ree.re1.fresh(cur_player);
                ree.re2.Map=&Map;
                ree.re2.fresh(cur_player);
                ree.re3.fresh(cur_player);
                ree.re3.be.Map=&Map;
                ree.re3.be.fresh(cur_player);
                ree.re4.Map=&Map;
                ree.re4.fresh(cur_player);
                ree.re5.fresh(cur_player);
                ree.re5.ae.Map=&Map;
                ree.re5.ae.fresh(cur_player);
                ree.re6.fresh(cur_player);
                ree.re6.be.Map=&Map;
                ree.re6.be.fresh(cur_player);
                ree.re7.r5.Map=&Map;
                ree.re7.r5.fresh(cur_player);
                ree.re8.r5.Map=&Map;
                ree.re8.r5.fresh(cur_player);
                ree.re9.Map=&Map;
                ree.re9.fresh(cur_player);
                ree.re10.r10.Map=&Map;
                ree.re10.r10.fresh(cur_player);
                ree.show();
            }
            else if(Map.blocks_type[Map.man[cur_player].position]==7){
                rre.rr1.Map=&Map;
                rre.rr1.fresh(cur_player);
                rre.rr2.Map=&Map;
                rre.rr2.fresh(cur_player);
                rre.rr3.Map=&Map;
                rre.rr3.fresh(cur_player);
                rre.rr4.Map=&Map;
                rre.rr4.fresh(cur_player);
                rre.rr5.fresh(cur_player);
                rre.rr5.ae.Map=&Map;
                rre.rr5.ae.fresh(cur_player);
                rre.rr6.fresh(cur_player);
                rre.rr6.be.Map=&Map;
                rre.rr6.be.fresh(cur_player);
                rre.rr7.Map=&Map;
                rre.rr7.fresh(cur_player);
                rre.rr8.Map=&Map;
                rre.rr8.fresh(cur_player);
                rre.rr9.r5.Map=&Map;
                rre.rr9.r5.fresh(cur_player);
                rre.rr10.fresh(cur_player);
                rre.rr10.be.Map=&Map;
                rre.rr10.be.fresh(cur_player);
                rre.show();
            }
        }

    }
    end ed;
    Ui::Dialog *ui;

private slots:
    void on_throw_dice_clicked();

    void on_player0information_clicked();

    void on_player1information_clicked();

    void on_player2information_clicked();

    void on_player3information_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

private:

};
#endif // DIALOG_H
