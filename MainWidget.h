#ifndef KANAPRACTICE_MAINWIDGET_H
#define KANAPRACTICE_MAINWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include "Kana.h"

class MainWidget : public QWidget {
    Q_OBJECT
    QLabel *kanaLabel = new QLabel();
    QLineEdit *inputTxt = new QLineEdit();
    QVBoxLayout *layout = new QVBoxLayout();
private slots:

    void returnPressed();

    void change();

public:
    MainWidget();
};


#endif //KANAPRACTICE_MAINWIDGET_H
