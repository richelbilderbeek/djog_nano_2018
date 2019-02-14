#ifndef KAMER_JUDITH_H
#define KAMER_JUDITH_H

#include <QWidget>

namespace Ui {
  class kamer_judith;
}

class hoofd_scherm;

class kamer_judith : public QWidget
{
  Q_OBJECT

public:
  explicit kamer_judith(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_judith();

private slots:

private:
  Ui::kamer_judith *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_JUDITH_H