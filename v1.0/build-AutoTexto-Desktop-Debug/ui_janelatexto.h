/********************************************************************************
** Form generated from reading UI file 'janelatexto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELATEXTO_H
#define UI_JANELATEXTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_janelatexto
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *copiarBotao;
    QTextEdit *textEdit;

    void setupUi(QDialog *janelatexto)
    {
        if (janelatexto->objectName().isEmpty())
            janelatexto->setObjectName(QStringLiteral("janelatexto"));
        janelatexto->resize(590, 411);
        gridLayout = new QGridLayout(janelatexto);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(janelatexto);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        copiarBotao = new QPushButton(janelatexto);
        copiarBotao->setObjectName(QStringLiteral("copiarBotao"));

        gridLayout->addWidget(copiarBotao, 3, 0, 1, 1);

        textEdit = new QTextEdit(janelatexto);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        retranslateUi(janelatexto);

        QMetaObject::connectSlotsByName(janelatexto);
    } // setupUi

    void retranslateUi(QDialog *janelatexto)
    {
        janelatexto->setWindowTitle(QApplication::translate("janelatexto", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("janelatexto", "Ficha gerada!", Q_NULLPTR));
        copiarBotao->setText(QApplication::translate("janelatexto", "Copiar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class janelatexto: public Ui_janelatexto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELATEXTO_H
