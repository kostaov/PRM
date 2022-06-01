#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTextCodec *pCodec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForCStrings(pCodec);

    loadSettings();

    mPrmClient=NULL;

    setButtons(false);

    QTimer::singleShot(1000, this, SLOT(on_pushButton_connect_clicked()));

    aNumOfChanges=1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::saveSettings()
{
    QFile fileSettings("settings.txt");
    fileSettings.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream outSettings(&fileSettings);

    outSettings<<ui->lineEdit_IP->text();

    fileSettings.close();
    qDebug()<<"Файл настроек записан";
}

void MainWindow::loadSettings()
{
    QFile fileSettings("settings.txt");
    if (fileSettings.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream inSettings(&fileSettings);
        QString aIp;

        inSettings>>aIp;

        ui->lineEdit_IP->setText(aIp);

        fileSettings.close();
        qDebug()<<"Файл настроек прочитан";
    }
}

void MainWindow::getPrmFreq(quint16 aFreq, quint8 aAt1, quint8 aAt2, quint8 aFltr)
{
    ui->lcdNumber->display(aFreq);
    ui->dial->setValue(aFreq);

    if (aAt1 == 0) ui->comboBox_At1->setCurrentIndex(0);
    else if (aAt1 == 1) ui->comboBox_At1->setCurrentIndex(1);

    if ((aAt2>-1) && (aAt2<16)) ui->comboBox_At2->setCurrentIndex(aAt2);

    if ((aFltr>-1) && (aFltr<4)) ui->comboBox_Fltr->setCurrentIndex(aFltr);

    setLabelSucces(true);
}

void MainWindow::on_pushButton_connect_clicked()
{
    ui->statusBar->showMessage("Подключение к приемнику");
    setButtons(false);

    if (mPrmClient) delete mPrmClient;
    mPrmClient = new PrmClient(ui->lineEdit_IP->text(), 155, this);

    connect(mPrmClient, SIGNAL(sendText(QString)), this->ui->statusBar, SLOT(showMessage(QString)));
    connect(mPrmClient, SIGNAL(sendPrmFreq(quint16,quint8,quint8,quint8)), this, SLOT(getPrmFreq(quint16,quint8,quint8,quint8)));
    connect(mPrmClient, SIGNAL(freqChanged()), this, SLOT(reciveFlagSynth()));
    connect(mPrmClient, SIGNAL(attenuator1Changed()), this, SLOT(reciveFlagFltr()));
    connect(mPrmClient, SIGNAL(attenuator2Changed()), this, SLOT(reciveFlagFltr()));
    connect(mPrmClient, SIGNAL(filterChanged()), this, SLOT(reciveFlagFltr()));
    connect(mPrmClient, SIGNAL(deviceConnected(bool)), this, SLOT(setButtons(bool)));

    saveSettings();
    //on_pushButton_get_clicked();
}

void MainWindow::on_pushButton_get_clicked()
{
    aNumOfChanges=1;
    mPrmClient->getFreq();
    setLabelSucces(false);
}

void MainWindow::on_pushButton_set_clicked()
{
    aNumOfChanges=1;
    mPrmClient->setFreq((ui->spinBox_Freq->value()));
    setLabelSucces(false);
}

void MainWindow::setLabelSucces(bool aState)
{

    if (!aState) mTimeStart=QTime::currentTime();
    if (aState) aNumOfChanges--;
    if (aState && (aNumOfChanges<=0))
    {
        mTimeStop=QTime::currentTime();
        ui->label->setText(QString("Успешно, за %1 мсек").arg(qAbs(mTimeStart.msecsTo(mTimeStop))));
    }
    else ui->label->setText("Неудачно");
}

void MainWindow::reciveFlagSynth()
{

    ui->lcdNumber->display(ui->spinBox_Freq->value());
    ui->dial->setValue(ui->spinBox_Freq->value());
    setLabelSucces(true);
}

void MainWindow::reciveFlagFltr()
{
    setLabelSucces(true);
}

void MainWindow::setButtons(bool aState)
{
    ui->pushButton_get->setEnabled(aState);
    ui->pushButton_set->setEnabled(aState);
    ui->dial->setEnabled(aState);
    ui->lcdNumber->setEnabled(aState);
    ui->spinBox_Freq->setEnabled(aState);
    ui->comboBox_At1->setEnabled(aState);
    ui->comboBox_At2->setEnabled(aState);
    ui->comboBox_Fltr->setEnabled(aState);
    setLabelSucces(aState);
}

void MainWindow::on_comboBox_At1_currentIndexChanged(int index)
{
    aNumOfChanges=1;
    mPrmClient->setAttenuator1(index);
    setLabelSucces(false);
}

void MainWindow::on_comboBox_At2_currentIndexChanged(int index)
{
    aNumOfChanges=1;
    mPrmClient->setAttenuator2(index);
    setLabelSucces(false);
}

void MainWindow::on_comboBox_Fltr_currentIndexChanged(int index)
{
    aNumOfChanges=1;
    mPrmClient->setFiltr(index);
    setLabelSucces(false);
}

void MainWindow::on_dial_valueChanged(int value)
{
    ui->spinBox_Freq->setValue(value);

    if (aNumOfChanges!=1) on_pushButton_set_clicked();
}
