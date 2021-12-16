
#ifndef KANAPRACTICE_KANA_H
#define KANAPRACTICE_KANA_H

#include <string>
#include <QString>

using namespace std;

class Kana {
    const static QString HIRAGANA;
    const static QString KATAKANA;
    const static QString HANGUL;
public:
    static QChar kanaToHangul(QChar kana);
    static QChar getRandomKana();
};


#endif //KANAPRACTICE_KANA_H
