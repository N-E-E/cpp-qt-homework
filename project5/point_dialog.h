#pragma once

#include <QDialog>
#include "ui_point_dialog.h"

class point_dialog : public QDialog
{
	Q_OBJECT

public:
	point_dialog(QWidget *parent = nullptr);

	// û��ֻ������Զ�����
	~point_dialog() = default;  

	// չʾ�Ի���2s���Զ��ر�
	void disp_dialog(int x, int y, QPoint point);

private:
	Ui::point_dialogClass ui;
};
