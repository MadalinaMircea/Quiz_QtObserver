#ifndef QUIZ_H
#define QUIZ_H

#include <QtWidgets/QMainWindow>
#include "ui_quiz.h"

class Quiz : public QMainWindow
{
	Q_OBJECT

public:
	Quiz(QWidget *parent = 0);
	~Quiz();

private:
	Ui::QuizClass ui;
};

#endif // QUIZ_H
