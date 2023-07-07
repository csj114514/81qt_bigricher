#ifndef PLAYER_H
#define PLAYER_H


//玩家信息文件
class player//切记用player时先看if_play！！！！！！
{
public:
    player(){
    };// 在map中初始化
    int num;//序号
    int position;
    int coins;
    int coins_inbank;
    //bool if_owned_city[32];//仅标号代表的block是城市时有意义,均初始化为false
    //int owned_factory[32];//仅标号代表的block是factory时有意义,表示在该工厂的股份数，均初始化为0
    bool if_extra_round;//初始化为false
    bool if_skip_round;//初始化为false
    bool if_play;//判断玩家是否在游戏中，初始化为true,
    bool if_airport;
};

#endif // PLAYER_H
