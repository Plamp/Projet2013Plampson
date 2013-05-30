#ifndef DIALOGNOUVEAUCLIENT_H
#define DIALOGNOUVEAUCLIENT_H

#include <QDialog>

namespace Ui {
    class DialogNouveauClient;
}

class DialogNouveauClient : public QDialog {
    Q_OBJECT
public:
    DialogNouveauClient(QWidget *parent = 0);
    ~DialogNouveauClient();
 Ui::DialogNouveauClient *ui;
protected:
    void changeEvent(QEvent *e);

private:

};

#endif // DIALOGNOUVEAUCLIENT_H
