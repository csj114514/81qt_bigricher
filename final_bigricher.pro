QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    begin.cpp \
    block_event/airport_event.cpp \
    block_event/bank_event.cpp \
    block_event/city_event.cpp \
    block_event/city_event_2.cpp \
    block_event/city_event_3.cpp \
    block_event/factory_event.cpp \
    block_event/factory_event_2.cpp \
    block_event/prison_event.cpp \
    block_event/prison_event_2.cpp \
    block_event/re100.cpp \
    block_event/re50.cpp \
    block_event/re_event.cpp \
    block_event/re_event_1.cpp \
    block_event/re_event_10.cpp \
    block_event/re_event_2.cpp \
    block_event/re_event_3.cpp \
    block_event/re_event_4.cpp \
    block_event/re_event_5.cpp \
    block_event/re_event_6.cpp \
    block_event/re_event_7.cpp \
    block_event/re_event_8.cpp \
    block_event/re_event_9.cpp \
    block_event/rr50.cpp \
    block_event/rr_event.cpp \
    block_event/rr_event_1.cpp \
    block_event/rr_event_10.cpp \
    block_event/rr_event_2.cpp \
    block_event/rr_event_3.cpp \
    block_event/rr_event_4.cpp \
    block_event/rr_event_5.cpp \
    block_event/rr_event_6.cpp \
    block_event/rr_event_7.cpp \
    block_event/rr_event_8.cpp \
    block_event/rr_event_9.cpp \
    end.cpp \
    information_show/airport_show.cpp \
    information_show/bank.cpp \
    information_show/begin_information.cpp \
    information_show/city_show.cpp \
    information_show/factory_show.cpp \
    information_show/player_information_show.cpp \
    information_show/prison_show.cpp \
    information_show/re_show.cpp \
    information_show/rr_show.cpp \
    main.cpp \
    bigricher.cpp \
    map.cpp \
    near_death_ui/get_money_from_bank.cpp \
    near_death_ui/near_death_choose.cpp \
    near_death_ui/sell_city.cpp \
    near_death_ui/sell_factory.cpp \
    near_death_ui/sell_out.cpp \
    player.cpp \
    rules.cpp \
    sign_ui/lack_of_money.cpp \
    sign_ui/show_dice_num.cpp \
    sign_ui/wrong_input_sign.cpp

HEADERS += \
    begin.h \
    bigricher.h \
    block_event/airport_event.h \
    block_event/bank_event.h \
    block_event/city_event.h \
    block_event/city_event_2.h \
    block_event/city_event_3.h \
    block_event/factory_event.h \
    block_event/factory_event_2.h \
    block_event/prison_event.h \
    block_event/prison_event_2.h \
    block_event/re100.h \
    block_event/re50.h \
    block_event/re_event.h \
    block_event/re_event_1.h \
    block_event/re_event_10.h \
    block_event/re_event_2.h \
    block_event/re_event_3.h \
    block_event/re_event_4.h \
    block_event/re_event_5.h \
    block_event/re_event_6.h \
    block_event/re_event_7.h \
    block_event/re_event_8.h \
    block_event/re_event_9.h \
    block_event/rr50.h \
    block_event/rr_event.h \
    block_event/rr_event_1.h \
    block_event/rr_event_10.h \
    block_event/rr_event_2.h \
    block_event/rr_event_3.h \
    block_event/rr_event_4.h \
    block_event/rr_event_5.h \
    block_event/rr_event_6.h \
    block_event/rr_event_7.h \
    block_event/rr_event_8.h \
    block_event/rr_event_9.h \
    end.h \
    information_show/airport_show.h \
    information_show/bank.h \
    information_show/begin_information.h \
    information_show/city_show.h \
    information_show/factory_show.h \
    information_show/player_information_show.h \
    information_show/prison_show.h \
    information_show/re_show.h \
    information_show/rr_show.h \
    map.h \
    near_death_ui/get_money_from_bank.h \
    near_death_ui/near_death_choose.h \
    near_death_ui/sell_city.h \
    near_death_ui/sell_factory.h \
    near_death_ui/sell_out.h \
    player.h \
    rules.h \
    sign_ui/lack_of_money.h \
    sign_ui/show_dice_num.h \
    sign_ui/wrong_input_sign.h

FORMS += \
    begin.ui \
    bigricher.ui \
    block_event/airport_event.ui \
    block_event/bank_event.ui \
    block_event/city_event.ui \
    block_event/city_event_2.ui \
    block_event/city_event_3.ui \
    block_event/factory_event.ui \
    block_event/factory_event_2.ui \
    block_event/prison_event.ui \
    block_event/prison_event_2.ui \
    block_event/re100.ui \
    block_event/re50.ui \
    block_event/re_event.ui \
    block_event/re_event_1.ui \
    block_event/re_event_10.ui \
    block_event/re_event_2.ui \
    block_event/re_event_3.ui \
    block_event/re_event_4.ui \
    block_event/re_event_5.ui \
    block_event/re_event_6.ui \
    block_event/re_event_7.ui \
    block_event/re_event_8.ui \
    block_event/re_event_9.ui \
    block_event/rr50.ui \
    block_event/rr_event.ui \
    block_event/rr_event_1.ui \
    block_event/rr_event_10.ui \
    block_event/rr_event_2.ui \
    block_event/rr_event_3.ui \
    block_event/rr_event_4.ui \
    block_event/rr_event_5.ui \
    block_event/rr_event_6.ui \
    block_event/rr_event_7.ui \
    block_event/rr_event_8.ui \
    block_event/rr_event_9.ui \
    end.ui \
    information_show/airport_show.ui \
    information_show/bank.ui \
    information_show/begin_information.ui \
    information_show/city_show.ui \
    information_show/factory_show.ui \
    information_show/player_information_show.ui \
    information_show/prison_show.ui \
    information_show/re_show.ui \
    information_show/rr_show.ui \
    near_death_ui/get_money_from_bank.ui \
    near_death_ui/near_death_choose.ui \
    near_death_ui/sell_city.ui \
    near_death_ui/sell_factory.ui \
    near_death_ui/sell_out.ui \
    rules.ui \
    sign_ui/lack_of_money.ui \
    sign_ui/show_dice_num.ui \
    sign_ui/wrong_input_sign.ui

TRANSLATIONS += \
    final_bigricher_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
