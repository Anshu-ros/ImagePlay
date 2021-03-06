//#############################################################################
//
//  This file is part of ImagePlay.
//
//  ImagePlay is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ImagePlay is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with ImagePlay.  If not, see <http://www.gnu.org/licenses/>.
//
//#############################################################################

#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class SettingsWindow;
}

class MainWindow;

//-----------------------------------------------------------------------------
//!SettingsWindow
/*!
 *
 */
class SettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit            SettingsWindow                  (MainWindow *parent = 0);
                        ~SettingsWindow                 ();
private slots:
    void                on_buttonBox_accepted           ();
    void                on_buttonBox_rejected           ();
    void                on_btnDefaultImagePath_clicked  ();
    void                on_btnReloadPlugins_clicked     ();
    void                on_btnUnloadPlugins_clicked     ();
    void                on_btnDevPath_clicked           ();
    void                on_btnPluginPath_clicked        ();

private:
    Ui::SettingsWindow* ui;
    MainWindow*         _mainWindow;
    void                updatePluginList                ();

    // QWidget interface
protected:
    void                showEvent                       (QShowEvent *);
};

#endif // propertiesWINDOW_H
