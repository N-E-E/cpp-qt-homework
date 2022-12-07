#pragma once

#include <QDialog>
#include "ui_point_dialog.h"

class point_dialog : public QDialog
{
	Q_OBJECT

public:
	point_dialog(QWidget *parent = nullptr);

	// 没有只针对象，自动析构
	~point_dialog() = default;  

	// 展示对话框，2s后自动关闭
	void disp_dialog(int x, int y, QPoint point);

private:
	Ui::point_dialogClass ui;
};
