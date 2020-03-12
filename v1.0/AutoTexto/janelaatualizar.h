#ifndef JANELAATUALIZAR_H
#define JANELAATUALIZAR_H

#include <QDialog>
#include <QtSql>
#include <QFileInfo>

namespace Ui {
class JanelaAtualizar;
}

class JanelaAtualizar : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaAtualizar(QWidget *parent = 0);
    ~JanelaAtualizar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::JanelaAtualizar *ui;
};

#endif // JANELAATUALIZAR_H
