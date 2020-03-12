#ifndef JANELATEXTO_H
#define JANELATEXTO_H

#include <QDialog>

namespace Ui {
class janelatexto;
}

class janelatexto : public QDialog
{
    Q_OBJECT

public:
    explicit janelatexto(QWidget *parent = 0, QString texto = 0);
    ~janelatexto();

private slots:
    void on_copiarBotao_clicked();

private:
    Ui::janelatexto *ui;
};

#endif // JANELATEXTO_H
