#ifndef PRESENTERWIDGET_H
#define PRESENTERWIDGET_H

#include <QWidget>
#include "ui_PresenterWidget.h"
#include "Controller.h"
#include "Observer.h"

class PresenterWidget : public QWidget, public Observer
{
	Q_OBJECT

public:
	Controller* ctrl;
	PresenterWidget(Controller* c , QWidget *parent = 0);
	~PresenterWidget();

	void init();
	void connectAll();
	void update() override { this->init(); }

private slots:
	void addButtonHandler();
private:
	Ui::PresenterWidget ui;
};

#endif // PRESENTERWIDGET_H
