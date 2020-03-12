/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QPushButton *gerarfichaBotao;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *oralLinha;
    QLineEdit *atividadeLinha;
    QLabel *label_13;
    QLineEdit *frequenciaLinha;
    QLineEdit *socialLinha;
    QLabel *label_8;
    QLabel *label_3;
    QGridLayout *gridLayout_2;
    QLineEdit *educacaofisicaLinha;
    QLineEdit *arteLinha;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *matematicaLinha;
    QLabel *label_7;
    QLabel *label_12;
    QLineEdit *portuguesLinha;
    QGridLayout *gridLayout_3;
    QLineEdit *geografiaLinha;
    QLabel *label_11;
    QLineEdit *historiaLinha;
    QLabel *label_10;
    QLineEdit *cienciasLinha;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *inglesLinha;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *atualizarBotao;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(615, 345);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        gerarfichaBotao = new QPushButton(centralWidget);
        gerarfichaBotao->setObjectName(QStringLiteral("gerarfichaBotao"));

        gridLayout_4->addWidget(gerarfichaBotao, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1, Qt::AlignHCenter);

        oralLinha = new QLineEdit(centralWidget);
        oralLinha->setObjectName(QStringLiteral("oralLinha"));

        gridLayout->addWidget(oralLinha, 1, 3, 1, 1);

        atividadeLinha = new QLineEdit(centralWidget);
        atividadeLinha->setObjectName(QStringLiteral("atividadeLinha"));

        gridLayout->addWidget(atividadeLinha, 1, 2, 1, 1);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 0, 1, 1, 1, Qt::AlignHCenter);

        frequenciaLinha = new QLineEdit(centralWidget);
        frequenciaLinha->setObjectName(QStringLiteral("frequenciaLinha"));

        gridLayout->addWidget(frequenciaLinha, 1, 0, 1, 1, Qt::AlignHCenter);

        socialLinha = new QLineEdit(centralWidget);
        socialLinha->setObjectName(QStringLiteral("socialLinha"));

        gridLayout->addWidget(socialLinha, 1, 1, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 2, 1, 1, Qt::AlignHCenter);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1, Qt::AlignHCenter);


        verticalLayout_2->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        educacaofisicaLinha = new QLineEdit(centralWidget);
        educacaofisicaLinha->setObjectName(QStringLiteral("educacaofisicaLinha"));

        gridLayout_2->addWidget(educacaofisicaLinha, 1, 2, 1, 1);

        arteLinha = new QLineEdit(centralWidget);
        arteLinha->setObjectName(QStringLiteral("arteLinha"));

        gridLayout_2->addWidget(arteLinha, 1, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1, Qt::AlignHCenter);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1, Qt::AlignHCenter);

        matematicaLinha = new QLineEdit(centralWidget);
        matematicaLinha->setObjectName(QStringLiteral("matematicaLinha"));

        gridLayout_2->addWidget(matematicaLinha, 1, 3, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 1, 1, 1, Qt::AlignHCenter);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 0, 2, 1, 1, Qt::AlignHCenter);

        portuguesLinha = new QLineEdit(centralWidget);
        portuguesLinha->setObjectName(QStringLiteral("portuguesLinha"));

        gridLayout_2->addWidget(portuguesLinha, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        geografiaLinha = new QLineEdit(centralWidget);
        geografiaLinha->setObjectName(QStringLiteral("geografiaLinha"));

        gridLayout_3->addWidget(geografiaLinha, 1, 2, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        historiaLinha = new QLineEdit(centralWidget);
        historiaLinha->setObjectName(QStringLiteral("historiaLinha"));

        gridLayout_3->addWidget(historiaLinha, 1, 1, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1, Qt::AlignHCenter);

        cienciasLinha = new QLineEdit(centralWidget);
        cienciasLinha->setObjectName(QStringLiteral("cienciasLinha"));

        gridLayout_3->addWidget(cienciasLinha, 1, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1, Qt::AlignHCenter);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 0, 3, 1, 1, Qt::AlignHCenter);

        inglesLinha = new QLineEdit(centralWidget);
        inglesLinha->setObjectName(QStringLiteral("inglesLinha"));

        gridLayout_3->addWidget(inglesLinha, 1, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        gridLayout_4->addLayout(verticalLayout_2, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 2, 1, 1);

        atualizarBotao = new QPushButton(centralWidget);
        atualizarBotao->setObjectName(QStringLiteral("atualizarBotao"));

        gridLayout_4->addWidget(atualizarBotao, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 615, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(frequenciaLinha, socialLinha);
        QWidget::setTabOrder(socialLinha, atividadeLinha);
        QWidget::setTabOrder(atividadeLinha, oralLinha);
        QWidget::setTabOrder(oralLinha, portuguesLinha);
        QWidget::setTabOrder(portuguesLinha, arteLinha);
        QWidget::setTabOrder(arteLinha, educacaofisicaLinha);
        QWidget::setTabOrder(educacaofisicaLinha, matematicaLinha);
        QWidget::setTabOrder(matematicaLinha, cienciasLinha);
        QWidget::setTabOrder(cienciasLinha, historiaLinha);
        QWidget::setTabOrder(historiaLinha, geografiaLinha);
        QWidget::setTabOrder(geografiaLinha, inglesLinha);
        QWidget::setTabOrder(inglesLinha, gerarfichaBotao);
        QWidget::setTabOrder(gerarfichaBotao, atualizarBotao);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Insira o numero correspondente \303\240 avalia\303\247\303\243o do aluno!", Q_NULLPTR));
        gerarfichaBotao->setText(QApplication::translate("MainWindow", "Gerar ficha do aluno", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Oral", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Social", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Atividade", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Frequ\303\252ncia", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Matem\303\241tica", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Portugu\303\252s", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Arte", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Educa\303\247\303\243o F\303\255sica", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Hist\303\263ria", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Geografia", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Ci\303\252ncias", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Ingl\303\252s", Q_NULLPTR));
        atualizarBotao->setText(QApplication::translate("MainWindow", "Atualizar textos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
