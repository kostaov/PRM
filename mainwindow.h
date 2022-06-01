#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTextCodec>
#include <QDebug>
#include <qmath.h>


#include "PrmClient.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:


private slots:

    //! Кнопка присоединения к приемнику
    void on_pushButton_connect_clicked();

    //! Слот на получения данных от приемника
    void getPrmFreq(quint16 aFreq, quint8 aAt1, quint8 aAt2, quint8 aFltr);

    //! Cлот на получение сигнала о захвате частоты синтезатора
    void reciveFlagSynth();

    //! Cлот на получение сигнала о перестройке фильтра или аттенюаторов
    void reciveFlagFltr();

    //! Установка надписи
    void setLabelSucces(bool aState);

    //! Установка enabled кнопок
    void setButtons(bool aState);

    //! Запись настроек IP в файл
    void saveSettings();

    //! Запись чтение настроек IP из файла
    void loadSettings();

    void on_pushButton_get_clicked();

    void on_pushButton_set_clicked();

    void on_comboBox_At1_currentIndexChanged(int index);

    void on_comboBox_At2_currentIndexChanged(int index);

    void on_comboBox_Fltr_currentIndexChanged(int index);

    void on_dial_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    PrmClient *mPrmClient;

    int aNumOfChanges;

    QTime mTimeStart, mTimeStop;
};

#endif // MAINWINDOW_H
