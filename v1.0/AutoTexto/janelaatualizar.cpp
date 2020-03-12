#include "janelaatualizar.h"
#include "ui_janelaatualizar.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QtSql>

JanelaAtualizar::JanelaAtualizar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaAtualizar)
{
    ui->setupUi(this);
    ui->numeroLinha->setFocus();
}

JanelaAtualizar::~JanelaAtualizar()
{
    delete ui;
}

void JanelaAtualizar::on_pushButton_clicked()
{
    QString nome = ui->selecionarBox->currentText();

    QString tipo = ui->numeroLinha->text();

    QString atualizado = ui->atualText->toPlainText();

    if(nome == QString("Frequência")) nome = "frequencia";
    else if(nome == QString("Social")) nome = "social";
    else if(nome == QString("Atividade")) nome = "atividade";
    else if(nome == QString("Oral")) nome = "oral";
    else if(nome == QString("Português")) nome = "portugues";
    else if(nome == QString("Educação Física")) nome = "edfisica";
    else if(nome == QString("Matemática")) nome = "matematica";
    else if(nome == QString("Ciências")) nome = "ciencias";
    else if(nome == QString("História")) nome = "historia";
    else if(nome == QString("Geografia")) nome = "geografia";
    else if(nome == QString("Inglês")) nome = "ingles";
    qDebug() << nome;

    if (!textoExiste(tipo, nome)) {
        insereTexto(nome, tipo, atualizado);
    }
    else {
       atualizaTexto(nome, tipo, atualizado);
    }

    QMessageBox::about(this, "Atualizado", "Texto atualizado!");

    ui->atualText->clear();
}

void JanelaAtualizar::on_pushButton_2_clicked()
{
    QString nome = ui->selecionarBox->currentText();
    QString tipo = ui->numeroLinha->text();

    if(nome == QString("Frequência")) nome = "frequencia";
    else if(nome == QString("Social")) nome = "social";
    else if(nome == QString("Atividade")) nome = "atividade";
    else if(nome == QString("Oral")) nome = "oral";
    else if(nome == QString("Português")) nome = "portugues";
    else if(nome == QString("Educação Física")) nome = "edfisica";
    else if(nome == QString("Matemática")) nome = "matematica";
    else if(nome == QString("Ciências")) nome = "ciencias";
    else if(nome == QString("História")) nome = "historia";
    else if(nome == QString("Geografia")) nome = "geografia";
    else if(nome == QString("Inglês")) nome = "ingles";

    if(nome == QString("Frequência")) nome = "frequencia";

    if(tipo == QString ("")) {
        QMessageBox::about(this, "", "Digite um número.");
        ui->numeroLinha->setFocus();
        return;
    }

    if (!textoExiste(tipo, nome)) {
        QMessageBox::about(this, "", "Esse número ainda não possui texto.\nPara criar um texto para esse número escreva e salve!");
        ui->atualText->setFocus();
        ui->atualText->clear();
        return;
    }

    QString temp = pegaTexto(tipo, nome);

    ui->atualText->setText(temp);

}
