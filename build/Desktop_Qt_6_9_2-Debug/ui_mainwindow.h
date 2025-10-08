/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLCDNumber *FR_tire;
    QFrame *line_2;
    QLabel *label_4;
    QLCDNumber *FR_tire_Speed;
    QLCDNumber *FL_tire;
    QLabel *label_8;
    QLCDNumber *Engine_Temp;
    QLabel *label;
    QProgressBar *rpm_bar;
    QLabel *label_2;
    QLCDNumber *OIl_pressure;
    QLabel *label_9;
    QLCDNumber *FL_tire_Speed;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_15;
    QLCDNumber *Water_pressure;
    QLCDNumber *Gears;
    QLCDNumber *BL_tire;
    QProgressBar *fuel;
    QLCDNumber *BL_tire_Speed;
    QLabel *label_13;
    QLCDNumber *RPM;
    QLabel *label_6;
    QLabel *label_5;
    QFrame *line;
    QLCDNumber *BR_tire_speed;
    QLabel *label_3;
    QLCDNumber *Speed;
    QLCDNumber *BR_tire;
    QLabel *label_12;
    QLCDNumber *Battery;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *line_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(816, 460);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        FR_tire = new QLCDNumber(centralwidget);
        FR_tire->setObjectName("FR_tire");
        FR_tire->setGeometry(QRect(140, 230, 81, 61));
        FR_tire->setFrameShadow(QFrame::Shadow::Plain);
        FR_tire->setDigitCount(2);
        FR_tire->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(260, 210, 20, 191));
        line_2->setFrameShadow(QFrame::Shadow::Plain);
        line_2->setFrameShape(QFrame::Shape::VLine);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 380, 91, 18));
        FR_tire_Speed = new QLCDNumber(centralwidget);
        FR_tire_Speed->setObjectName("FR_tire_Speed");
        FR_tire_Speed->setGeometry(QRect(410, 230, 81, 61));
        FR_tire_Speed->setFrameShadow(QFrame::Shadow::Plain);
        FR_tire_Speed->setDigitCount(3);
        FR_tire_Speed->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        FL_tire = new QLCDNumber(centralwidget);
        FL_tire->setObjectName("FL_tire");
        FL_tire->setGeometry(QRect(30, 230, 81, 61));
        FL_tire->setFrameShadow(QFrame::Shadow::Plain);
        FL_tire->setDigitCount(2);
        FL_tire->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(690, 380, 101, 18));
        Engine_Temp = new QLCDNumber(centralwidget);
        Engine_Temp->setObjectName("Engine_Temp");
        Engine_Temp->setGeometry(QRect(590, 230, 81, 61));
        Engine_Temp->setFrameShadow(QFrame::Shadow::Plain);
        Engine_Temp->setDigitCount(2);
        Engine_Temp->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 180, 66, 18));
        rpm_bar = new QProgressBar(centralwidget);
        rpm_bar->setObjectName("rpm_bar");
        rpm_bar->setGeometry(QRect(10, 10, 311, 23));
        rpm_bar->setMaximum(16);
        rpm_bar->setValue(-1);
        rpm_bar->setTextVisible(true);
        rpm_bar->setOrientation(Qt::Orientation::Horizontal);
        rpm_bar->setInvertedAppearance(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(640, 180, 66, 18));
        OIl_pressure = new QLCDNumber(centralwidget);
        OIl_pressure->setObjectName("OIl_pressure");
        OIl_pressure->setGeometry(QRect(590, 320, 81, 61));
        OIl_pressure->setFrameShadow(QFrame::Shadow::Plain);
        OIl_pressure->setDigitCount(2);
        OIl_pressure->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(700, 290, 91, 18));
        FL_tire_Speed = new QLCDNumber(centralwidget);
        FL_tire_Speed->setObjectName("FL_tire_Speed");
        FL_tire_Speed->setGeometry(QRect(300, 230, 81, 61));
        FL_tire_Speed->setFrameShadow(QFrame::Shadow::Plain);
        FL_tire_Speed->setDigitCount(3);
        FL_tire_Speed->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(300, 290, 91, 18));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 180, 51, 18));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(300, 380, 91, 18));
        Water_pressure = new QLCDNumber(centralwidget);
        Water_pressure->setObjectName("Water_pressure");
        Water_pressure->setGeometry(QRect(700, 320, 81, 61));
        Water_pressure->setFrameShadow(QFrame::Shadow::Plain);
        Water_pressure->setDigitCount(2);
        Water_pressure->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        Gears = new QLCDNumber(centralwidget);
        Gears->setObjectName("Gears");
        Gears->setGeometry(QRect(350, -10, 121, 201));
        Gears->setFrameShape(QFrame::Shape::NoFrame);
        Gears->setFrameShadow(QFrame::Shadow::Plain);
        Gears->setDigitCount(1);
        BL_tire = new QLCDNumber(centralwidget);
        BL_tire->setObjectName("BL_tire");
        BL_tire->setGeometry(QRect(30, 320, 81, 61));
        BL_tire->setFrameShadow(QFrame::Shadow::Plain);
        BL_tire->setDigitCount(2);
        BL_tire->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        fuel = new QProgressBar(centralwidget);
        fuel->setObjectName("fuel");
        fuel->setGeometry(QRect(540, 10, 261, 23));
        fuel->setMaximum(60);
        fuel->setValue(30);
        BL_tire_Speed = new QLCDNumber(centralwidget);
        BL_tire_Speed->setObjectName("BL_tire_Speed");
        BL_tire_Speed->setGeometry(QRect(300, 320, 81, 61));
        BL_tire_Speed->setFrameShadow(QFrame::Shadow::Plain);
        BL_tire_Speed->setDigitCount(3);
        BL_tire_Speed->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(410, 290, 91, 18));
        RPM = new QLCDNumber(centralwidget);
        RPM->setObjectName("RPM");
        RPM->setGeometry(QRect(90, 40, 151, 131));
        RPM->setFrameShape(QFrame::Shape::Panel);
        RPM->setFrameShadow(QFrame::Shadow::Plain);
        RPM->setDigitCount(2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 290, 91, 18));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 290, 91, 18));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(-10, 190, 891, 31));
        line->setFrameShadow(QFrame::Shadow::Plain);
        line->setFrameShape(QFrame::Shape::HLine);
        BR_tire_speed = new QLCDNumber(centralwidget);
        BR_tire_speed->setObjectName("BR_tire_speed");
        BR_tire_speed->setGeometry(QRect(410, 320, 81, 61));
        BR_tire_speed->setFrameShadow(QFrame::Shadow::Plain);
        BR_tire_speed->setDigitCount(3);
        BR_tire_speed->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 380, 91, 18));
        Speed = new QLCDNumber(centralwidget);
        Speed->setObjectName("Speed");
        Speed->setGeometry(QRect(540, 50, 261, 121));
        Speed->setFrameShape(QFrame::Shape::Panel);
        Speed->setFrameShadow(QFrame::Shadow::Plain);
        Speed->setLineWidth(2);
        Speed->setMidLineWidth(0);
        Speed->setSmallDecimalPoint(false);
        Speed->setDigitCount(3);
        Speed->setSegmentStyle(QLCDNumber::SegmentStyle::Filled);
        BR_tire = new QLCDNumber(centralwidget);
        BR_tire->setObjectName("BR_tire");
        BR_tire->setGeometry(QRect(140, 320, 81, 61));
        BR_tire->setFrameShadow(QFrame::Shadow::Plain);
        BR_tire->setDigitCount(2);
        BR_tire->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(410, 380, 101, 18));
        Battery = new QLCDNumber(centralwidget);
        Battery->setObjectName("Battery");
        Battery->setGeometry(QRect(700, 230, 81, 61));
        Battery->setFrameShadow(QFrame::Shadow::Plain);
        Battery->setDigitCount(3);
        Battery->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(590, 290, 91, 18));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(590, 380, 91, 18));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(530, 210, 20, 191));
        line_3->setFrameShadow(QFrame::Shadow::Plain);
        line_3->setFrameShape(QFrame::Shape::VLine);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 816, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "BR Tire Temp", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Water Pressure", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "RPM", nullptr));
        rpm_bar->setFormat(QCoreApplication::translate("MainWindow", "RPM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "SPEED", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "battery %", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "FL Tire Speed", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "GEARS", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "BL Tire Speed", nullptr));
        fuel->setFormat(QCoreApplication::translate("MainWindow", "Fuel", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "FR Tire Speed", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "FR Tire Temp", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "FL Tire Temp", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "BL Tire Temp", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "BR Tire Speed", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Engine Temp", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Oil Pressure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
