#include "quiz.h"
#include <QtWidgets/QApplication>
#include "GUI.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository* repo = new Repository{};
	Controller* ctrl = new Controller{ repo };
	GUI* ui = new GUI{ ctrl };
	return a.exec();
}
