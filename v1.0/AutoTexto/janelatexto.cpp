#include "janelatexto.h"
#include "ui_janelatexto.h"
#include <QClipboard>
#include <QMessageBox>
#include <QDebug>

janelatexto::janelatexto(QWidget *parent, QString texto) :
    QDialog(parent),
    ui(new Ui::janelatexto)
{
    ui->setupUi(this);
    ui->textEdit->setText(texto);
}

janelatexto::~janelatexto()
{
    delete ui;
}

void janelatexto::on_copiarBotao_clicked()
{
    QString texto = ui->textEdit->toPlainText();
    QClipboard *paste = QApplication::clipboard();
    paste->setText(texto);

    QMessageBox::about(this, "", "Ficha copiada para o clipboard.\nAgora basta colar em seu arquivo!");
}
