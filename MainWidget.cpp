#include "MainWidget.h"
#include "Kana.h"
#include <ctime>

MainWidget::MainWidget() {
    srand((unsigned int)time(nullptr));
    kanaLabel->setText(QString(Kana::getRandomKana()));
    kanaLabel->setAlignment(Qt::AlignCenter);
    QFont font = kanaLabel->font();
    font.setPointSize(80);
    kanaLabel->setFont(font);
    setLayout(layout);


    layout->addWidget(kanaLabel);
    layout->addWidget(inputTxt);

    connect(inputTxt, SIGNAL(returnPressed()), this, SLOT(returnPressed()));
    connect(inputTxt, SIGNAL(textChanged(QString)), this, SLOT(change()));
}

void MainWidget::change() {
    QString text = inputTxt->text();
    if (text.size() > 1){
        inputTxt->setText(text.at(text.size()-1));
    }
}

void MainWidget::returnPressed() {
    if(Kana::kanaToHangul(kanaLabel->text().at(0)) == inputTxt->text().at(0)) {
        inputTxt->setText("");
        kanaLabel->setText(Kana::getRandomKana());
    }
}
