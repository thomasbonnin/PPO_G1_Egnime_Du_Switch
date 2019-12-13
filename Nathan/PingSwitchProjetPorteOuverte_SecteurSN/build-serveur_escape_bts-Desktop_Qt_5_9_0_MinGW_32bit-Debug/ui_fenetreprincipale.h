/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipale
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *centralLayout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName(QStringLiteral("FenetrePrincipale"));
        FenetrePrincipale->resize(400, 300);
        centralWidget = new QWidget(FenetrePrincipale);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        centralLayout = new QVBoxLayout();
        centralLayout->setSpacing(6);
        centralLayout->setObjectName(QStringLiteral("centralLayout"));

        verticalLayout_2->addLayout(centralLayout);

        FenetrePrincipale->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FenetrePrincipale);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FenetrePrincipale->setStatusBar(statusBar);

        retranslateUi(FenetrePrincipale);

        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QApplication::translate("FenetrePrincipale", "FenetrePrincipale", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
