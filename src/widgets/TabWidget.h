/*
Copyright (C) 2006 - 2023 Evan Teran
						  evan.teran@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TAB_WIDGET_H_20080118_
#define TAB_WIDGET_H_20080118_

#include <QTabWidget>

class TabWidget : public QTabWidget {
	Q_OBJECT

public:
	explicit TabWidget(QWidget *parent = nullptr);
	~TabWidget() override = default;

Q_SIGNALS:
	void customContextMenuRequested(int, const QPoint &);

public:
	void setData(int index, const QVariant &data);
	QVariant data(int index) const;

protected:
	void mousePressEvent(QMouseEvent *event) override;
};

#endif
