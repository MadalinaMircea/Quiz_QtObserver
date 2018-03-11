/********************************************************************************
** Form generated from reading UI file 'ParticipantWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICIPANTWIDGET_H
#define UI_PARTICIPANTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParticipantWidget
{
public:
    QListWidget *questions;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *answerLabel;
    QTextEdit *answerTextBox;
    QPushButton *answerButton;
    QLabel *scoreLabel;
    QLabel *score;

    void setupUi(QWidget *ParticipantWidget)
    {
        if (ParticipantWidget->objectName().isEmpty())
            ParticipantWidget->setObjectName(QStringLiteral("ParticipantWidget"));
        ParticipantWidget->resize(597, 421);
        questions = new QListWidget(ParticipantWidget);
        questions->setObjectName(QStringLiteral("questions"));
        questions->setGeometry(QRect(0, 0, 391, 421));
        widget = new QWidget(ParticipantWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(400, 20, 191, 345));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        answerLabel = new QLabel(widget);
        answerLabel->setObjectName(QStringLiteral("answerLabel"));

        verticalLayout->addWidget(answerLabel);

        answerTextBox = new QTextEdit(widget);
        answerTextBox->setObjectName(QStringLiteral("answerTextBox"));

        verticalLayout->addWidget(answerTextBox);

        answerButton = new QPushButton(widget);
        answerButton->setObjectName(QStringLiteral("answerButton"));

        verticalLayout->addWidget(answerButton);

        scoreLabel = new QLabel(widget);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));

        verticalLayout->addWidget(scoreLabel);

        score = new QLabel(widget);
        score->setObjectName(QStringLiteral("score"));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        score->setFont(font);

        verticalLayout->addWidget(score);


        retranslateUi(ParticipantWidget);

        QMetaObject::connectSlotsByName(ParticipantWidget);
    } // setupUi

    void retranslateUi(QWidget *ParticipantWidget)
    {
        ParticipantWidget->setWindowTitle(QApplication::translate("ParticipantWidget", "ParticipantWidget", 0));
        answerLabel->setText(QApplication::translate("ParticipantWidget", "Answer", 0));
        answerButton->setText(QApplication::translate("ParticipantWidget", "Answer", 0));
        scoreLabel->setText(QApplication::translate("ParticipantWidget", "Score", 0));
        score->setText(QApplication::translate("ParticipantWidget", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class ParticipantWidget: public Ui_ParticipantWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICIPANTWIDGET_H
