
#include "Kana.h"


const QString Kana::HIRAGANA = QString("あいうえおかきくけこさしすせそたちつてとなにぬねのはひふへほまみむめもやゆよらりるれろわを");
const QString Kana::KATAKANA = QString("アイウエオカキクケコサシスセソタチツテトナニヌネノハヒフヘホマミムメモヤユヨラリルレロワヲ");
const QString Kana::HANGUL   = QString("아이우에오카키쿠케코사시스세소타치츠테토나니누네노하히후헤호마미무메모야유요라리루레로와오");

QChar Kana::kanaToHangul(QChar kana) {
    for(int i=0; i<HANGUL.size(); i++)
        if(HIRAGANA[i] == kana || KATAKANA[i] == kana)
            return HANGUL.at(i);
    return -1;
}

QChar Kana::getRandomKana() {
    int index = rand() % HANGUL.size();
    int type = rand() % 2;
    QString kanas = type ? HIRAGANA : KATAKANA;
    return kanas[index];
}


