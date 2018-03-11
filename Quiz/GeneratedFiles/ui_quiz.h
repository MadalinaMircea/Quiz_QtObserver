/********************************************************************************
** Form generated from reading UI file 'quiz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZ_H
#define UI_QUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QuizClass)
    {
        if (QuizClass->objectName().isEmpty())
            QuizClass->setObjectName(QStringLiteral("QuizClass"));
        QuizClass->resize(600, 400);
        menuBar = new QMenuBar(QuizClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QuizClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QuizClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QuizClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QuizClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QuizClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QuizClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QuizClass->setStatusBar(statusBar);

        retranslateUi(QuizClass);

        QMetaObject::connectSlotsByName(QuizClass);
    } // setupUi

    void retranslateUi(QMainWindow *QuizClass)
    {
        QuizClass->setWindowTitle(QApplication::translate("QuizClass", "Quiz", 0));
    } // retranslateUi

};

namespace Ui {
    class QuizClass: public Ui_QuizClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZ_H
