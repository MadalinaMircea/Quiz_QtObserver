/********************************************************************************
** Form generated from reading UI file 'PresenterWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTERWIDGET_H
#define UI_PRESENTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PresenterWidget
{
public:
    QListWidget *questionList;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *idLabel;
    QLineEdit *idTextBox;
    QLabel *questionLabel;
    QLineEdit *questionTextBox;
    QLabel *answerLabel;
    QTextEdit *answerTextBox;
    QLabel *scoreLabel;
    QLineEdit *scoreTextBox;
    QPushButton *pushButton;

    void setupUi(QWidget *PresenterWidget)
    {
        if (PresenterWidget->objectName().isEmpty())
            PresenterWidget->setObjectName(QStringLiteral("PresenterWidget"));
        PresenterWidget->resize(597, 390);
        questionList = new QListWidget(PresenterWidget);
        questionList->setObjectName(QStringLiteral("questionList"));
        questionList->setGeometry(QRect(0, 0, 291, 391));
        widget = new QWidget(PresenterWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(320, 10, 260, 379));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        idLabel = new QLabel(widget);
        idLabel->setObjectName(QStringLiteral("idLabel"));

        verticalLayout->addWidget(idLabel);

        idTextBox = new QLineEdit(widget);
        idTextBox->setObjectName(QStringLiteral("idTextBox"));

        verticalLayout->addWidget(idTextBox);

        questionLabel = new QLabel(widget);
        questionLabel->setObjectName(QStringLiteral("questionLabel"));

        verticalLayout->addWidget(questionLabel);

        questionTextBox = new QLineEdit(widget);
        questionTextBox->setObjectName(QStringLiteral("questionTextBox"));

        verticalLayout->addWidget(questionTextBox);

        answerLabel = new QLabel(widget);
        answerLabel->setObjectName(QStringLiteral("answerLabel"));

        verticalLayout->addWidget(answerLabel);

        answerTextBox = new QTextEdit(widget);
        answerTextBox->setObjectName(QStringLiteral("answerTextBox"));

        verticalLayout->addWidget(answerTextBox);

        scoreLabel = new QLabel(widget);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));

        verticalLayout->addWidget(scoreLabel);

        scoreTextBox = new QLineEdit(widget);
        scoreTextBox->setObjectName(QStringLiteral("scoreTextBox"));

        verticalLayout->addWidget(scoreTextBox);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        questionList->raise();
        answerLabel->raise();
        scoreTextBox->raise();
        questionLabel->raise();
        answerTextBox->raise();
        scoreLabel->raise();
        idTextBox->raise();
        idLabel->raise();
        questionTextBox->raise();
        idLabel->raise();
        idLabel->raise();
        idLabel->raise();
        pushButton->raise();

        retranslateUi(PresenterWidget);

        QMetaObject::connectSlotsByName(PresenterWidget);
    } // setupUi

    void retranslateUi(QWidget *PresenterWidget)
    {
        PresenterWidget->setWindowTitle(QApplication::translate("PresenterWidget", "PresenterWidget", 0));
        idLabel->setText(QApplication::translate("PresenterWidget", "ID", 0));
        questionLabel->setText(QApplication::translate("PresenterWidget", "Question", 0));
        answerLabel->setText(QApplication::translate("PresenterWidget", "Answer", 0));
        answerTextBox->setHtml(QApplication::translate("PresenterWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        scoreLabel->setText(QApplication::translate("PresenterWidget", "Score", 0));
        pushButton->setText(QApplication::translate("PresenterWidget", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class PresenterWidget: public Ui_PresenterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTERWIDGET_H
