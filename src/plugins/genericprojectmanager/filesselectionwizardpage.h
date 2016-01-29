/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#ifndef FILESSELECTIONWIZARDPAGE_H
#define FILESSELECTIONWIZARDPAGE_H

#include <QWizardPage>

#include <utils/fileutils.h>

QT_BEGIN_NAMESPACE
class QVBoxLayout;
class QLabel;
class QTreeView;
class QLineEdit;
QT_END_NAMESPACE

namespace ProjectExplorer { class SelectableFilesWidget; }

namespace GenericProjectManager {
namespace Internal {

class GenericProjectWizardDialog;

class FilesSelectionWizardPage : public QWizardPage
{
    Q_OBJECT

public:
    FilesSelectionWizardPage(GenericProjectWizardDialog *genericProjectWizard, QWidget *parent = 0);
    bool isComplete() const;
    void initializePage();
    void cleanupPage();
    Utils::FileNameList selectedFiles() const;
    Utils::FileNameList selectedPaths() const;

private:
    GenericProjectWizardDialog *m_genericProjectWizardDialog;
    ProjectExplorer::SelectableFilesWidget *m_filesWidget;
};

} // namespace Internal
} // namespace GenericProjectManager

#endif // FILESSELECTIONWIZARDPAGE_H