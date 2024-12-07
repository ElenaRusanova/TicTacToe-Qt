#ifndef STYLEHELPER_H
#define STYLEHELPER_H

#include <QString>

class StyleHelper
{
public:
    static QString getMainWidgetStyle();// Основной стиль виджета
    static QString getStartButtonsStyle();// Стиль кнопки Начать
    static QString getLeftButtonStyle();// Стиль левой кнопки
    static QString getRightButtonStyle();// Стиль правой кнопки
    static QString getLeftButtonActiveStyle();// Стиль левой активной кнопки
    static QString getRightButtonActiveStyle();// Стиль правой активной кнопки
    static QString getTabWidgetStyle();// Стиль вкладки с игрой
    static QString getTabStyle();// Стиль вкладки
    static QString getStartButtonGameStyle();// Стиль кнопки играть во время игры

    static QString getBlankButtonStyle();// Стиль пустой кнопки
    static QString getCrossNormalStyle();// Нормальный крестик
    static QString getCrossVictoryStyle();// Крестики победили
    static QString getCrossLostStyle();// Крестики проиграли
    static QString getZeroNormalStyle();// Нормальный нолик
    static QString getZeroVictoryStyle();// Нолики победили
    static QString getZeroLostStyle();// Нолики проиграли

    static QString getNormalMessageStyle();// Нормальное сообщение
    static QString getVictoryMessageStyle();// Сообщение о победе
    static QString getLostMessageStyle();// Сообщение о проигрыше

    static QString getAboutTextStyle();// Сообщение об игре

};

#endif // STYLEHELPER_H
