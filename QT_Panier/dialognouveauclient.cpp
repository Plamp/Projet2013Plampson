#include "dialognouveauclient.h"
#include "ui_dialognouveauclient.h"

DialogNouveauClient::DialogNouveauClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNouveauClient)
{
    ui->setupUi(this);
}

DialogNouveauClient::~DialogNouveauClient()
{
    delete ui;
}

void DialogNouveauClient::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
