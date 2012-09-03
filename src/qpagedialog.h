/*
Copyright (C) 2012 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
*/

#ifndef QPAGEDIALOG_H
#define QPAGEDIALOG_H

#include "libklustersshared_export.h"
#include <QDialogButtonBox>
#include <QDialog>

class QPageDialogPrivate;


class KLUSTERSSHARED_EXPORT QPageDialog : public QDialog
{
public:
    explicit QPageDialog(QWidget *parent);
    ~QPageDialog();

    QDialogButtonBox *dialogButtonBox() const;
    void setButtons(QDialogButtonBox::StandardButtons standardButtons);
private:
    QPageDialogPrivate *d;
    Q_DISABLE_COPY(QPageDialog)
};

#endif // QPAGEDIALOG_H
