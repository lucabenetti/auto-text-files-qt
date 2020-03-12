/********************************************************************************
** Form generated from reading UI file 'janelaatualizar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAATUALIZAR_H
#define UI_JANELAATUALIZAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JanelaAtualizar
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLineEdit *numeroLinha;
    QTextEdit *atualText;
    QLabel *label_2;
    QComboBox *selecionarBox;
    QLabel *label;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *JanelaAtualizar)
    {
        if (JanelaAtualizar->objectName().isEmpty())
            JanelaAtualizar->setObjectName(QStringLiteral("JanelaAtualizar"));
        JanelaAtualizar->resize(653, 333);
        gridLayout = new QGridLayout(JanelaAtualizar);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_2 = new QPushButton(JanelaAtualizar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton = new QPushButton(JanelaAtualizar);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        gridLayout->addLayout(verticalLayout, 6, 1, 1, 1);

        numeroLinha = new QLineEdit(JanelaAtualizar);
        numeroLinha->setObjectName(QStringLiteral("numeroLinha"));

        gridLayout->addWidget(numeroLinha, 1, 1, 1, 1);

        atualText = new QTextEdit(JanelaAtualizar);
        atualText->setObjectName(QStringLiteral("atualText"));

        gridLayout->addWidget(atualText, 3, 1, 1, 1);

        label_2 = new QLabel(JanelaAtualizar);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        selecionarBox = new QComboBox(JanelaAtualizar);
        selecionarBox->setObjectName(QStringLiteral("selecionarBox"));

        gridLayout->addWidget(selecionarBox, 1, 0, 1, 1);

        label = new QLabel(JanelaAtualizar);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(JanelaAtualizar);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);


        retranslateUi(JanelaAtualizar);

        QMetaObject::connectSlotsByName(JanelaAtualizar);
    } // setupUi

    void retranslateUi(QDialog *JanelaAtualizar)
    {
        JanelaAtualizar->setWindowTitle(QApplication::translate("JanelaAtualizar", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("JanelaAtualizar", "Pesquisar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("JanelaAtualizar", "Salvar", Q_NULLPTR));
        label_2->setText(QApplication::translate("JanelaAtualizar", "Texto", Q_NULLPTR));
        selecionarBox->clear();
        selecionarBox->insertItems(0, QStringList()
         << QApplication::translate("JanelaAtualizar", "Frequ\303\252ncia", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Social", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Atividade", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Oral", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Portugu\303\252s", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Arte", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Educa\303\247\303\243o F\303\255sica", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Matem\303\241tica", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Ci\303\252ncias", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Hist\303\263ria", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Geografia", Q_NULLPTR)
         << QApplication::translate("JanelaAtualizar", "Ingl\303\252s", Q_NULLPTR)
        );
        label->setText(QApplication::translate("JanelaAtualizar", "N\303\272mero", Q_NULLPTR));
        label_3->setText(QApplication::translate("JanelaAtualizar", "Disciplina", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class JanelaAtualizar: public Ui_JanelaAtualizar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAATUALIZAR_H
