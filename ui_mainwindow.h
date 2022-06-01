/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdNumber;
    QDial *dial;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_Freq;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox_At1;
    QComboBox *comboBox_At2;
    QComboBox *comboBox_Fltr;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_set;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_get;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_IP;
    QPushButton *pushButton_connect;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(450, 180);
        MainWindow->setMinimumSize(QSize(450, 180));
        MainWindow->setMaximumSize(QSize(450, 180));
        MainWindow->setWindowOpacity(1);
        MainWindow->setIconSize(QSize(48, 48));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(88, 40));
        lcdNumber->setMaximumSize(QSize(999, 40));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        lcdNumber->setFont(font);
        lcdNumber->setAutoFillBackground(false);
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setLineWidth(5);
        lcdNumber->setMidLineWidth(4);
        lcdNumber->setNumDigits(4);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_2->addWidget(lcdNumber);

        dial = new QDial(centralWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimum(20);
        dial->setMaximum(7000);
        dial->setSingleStep(10);
        dial->setPageStep(50);
        dial->setSliderPosition(20);
        dial->setTracking(true);
        dial->setOrientation(Qt::Horizontal);
        dial->setInvertedAppearance(false);
        dial->setInvertedControls(false);
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        verticalLayout_2->addWidget(dial);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(317, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_Freq = new QSpinBox(groupBox);
        spinBox_Freq->setObjectName(QString::fromUtf8("spinBox_Freq"));
        spinBox_Freq->setFont(font);
        spinBox_Freq->setLayoutDirection(Qt::LeftToRight);
        spinBox_Freq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_Freq->setMinimum(20);
        spinBox_Freq->setMaximum(7000);
        spinBox_Freq->setSingleStep(20);

        horizontalLayout->addWidget(spinBox_Freq);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        comboBox_At1 = new QComboBox(groupBox);
        comboBox_At1->setObjectName(QString::fromUtf8("comboBox_At1"));

        horizontalLayout->addWidget(comboBox_At1);

        comboBox_At2 = new QComboBox(groupBox);
        comboBox_At2->setObjectName(QString::fromUtf8("comboBox_At2"));
        comboBox_At2->setMaxVisibleItems(16);

        horizontalLayout->addWidget(comboBox_At2);

        comboBox_Fltr = new QComboBox(groupBox);
        comboBox_Fltr->setObjectName(QString::fromUtf8("comboBox_Fltr"));

        horizontalLayout->addWidget(comboBox_Fltr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_set = new QPushButton(groupBox);
        pushButton_set->setObjectName(QString::fromUtf8("pushButton_set"));
        pushButton_set->setEnabled(false);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_set->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_set);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_get = new QPushButton(groupBox);
        pushButton_get->setObjectName(QString::fromUtf8("pushButton_get"));
        pushButton_get->setEnabled(false);
        pushButton_get->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_get);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lineEdit_IP = new QLineEdit(centralWidget);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));
        lineEdit_IP->setMinimumSize(QSize(101, 20));
        lineEdit_IP->setMaximumSize(QSize(101, 20));

        horizontalLayout_3->addWidget(lineEdit_IP);

        pushButton_connect = new QPushButton(centralWidget);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));
        pushButton_connect->setMinimumSize(QSize(91, 23));
        pushButton_connect->setMaximumSize(QSize(91, 23));

        horizontalLayout_3->addWidget(pushButton_connect);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 450, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        comboBox_Fltr->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\320\240\320\234-300 Ethernet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lcdNumber->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lcdNumber->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lcdNumber->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\277\321\200\320\270\320\265\320\274\320\275\320\270\320\272\320\260", 0, QApplication::UnicodeUTF8));
        spinBox_Freq->setSuffix(QApplication::translate("MainWindow", " \320\234\320\223\321\206", 0, QApplication::UnicodeUTF8));
        spinBox_Freq->setPrefix(QString());
        comboBox_At1->clear();
        comboBox_At1->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "10 \320\264\320\221", 0, QApplication::UnicodeUTF8)
        );
        comboBox_At2->clear();
        comboBox_At2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "4 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "5 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "6 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "9 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "10 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "11 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "12 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "13 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "14 \320\264\320\221", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "15 \320\264\320\221", 0, QApplication::UnicodeUTF8)
        );
        comboBox_Fltr->clear();
        comboBox_Fltr->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "140/70 \320\234\320\223\321\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "140/22 \320\234\320\223\321\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "140/20 \320\234\320\223\321\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "150/80 \320\234\320\223\321\206", 0, QApplication::UnicodeUTF8)
        );
        pushButton_set->setText(QApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton_get->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\200\320\276\321\201\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        lineEdit_IP->setInputMask(QApplication::translate("MainWindow", "000.000.000.000; ", 0, QApplication::UnicodeUTF8));
        lineEdit_IP->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_connect->setToolTip(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\277\321\200\320\270\320\265\320\274\320\275\320\270\320\272\321\203", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_connect->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_connect->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton_connect->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
