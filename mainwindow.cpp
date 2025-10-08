#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupTelemetry();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupTelemetry()
{

    const char *BROKER_ADDRESS = "3e1fe3fd956c47719dd06b486b22adb1.s1.eu.hivemq.cloud";
    int BROKER_PORT = 8883;
    const char *USERNAME = "7osso";
    const char *PASSWORD = "11082001Mm";

    subscriber = new Telemetry_sub("QtDashboard", BROKER_ADDRESS, BROKER_PORT, USERNAME, PASSWORD, this);


    connect(subscriber, &Telemetry_sub::telemetryReceived, this,
            [=](int RPM, int Speed, int Gears, double Battery, double OIl_pressure, double Water_pressure,
                double Engine_Temp, double Fuel, int FL_tire, int FR_tire, int BL_tire, int BR_tire,
                int FL_tire_Speed, int FR_tire_Speed, int BL_tire_Speed, int BR_tire_Speed)
            {

                ui->RPM->display(RPM);
                ui->Speed->display(Speed);
                ui->Gears->display(Gears);
                ui->Battery->display(Battery);
                ui->OIl_pressure->display(OIl_pressure);
                ui->Water_pressure->display(Water_pressure);
                ui->Engine_Temp->display(Engine_Temp);
                ui->fuel->setValue(static_cast<int>(Fuel));

                ui->FL_tire->display(FL_tire);
                ui->FR_tire->display(FR_tire);
                ui->BL_tire->display(BL_tire);
                ui->BR_tire->display(BR_tire);

                ui->FL_tire_Speed->display(FL_tire_Speed);
                ui->FR_tire_Speed->display(FR_tire_Speed);
                ui->BL_tire_Speed->display(BL_tire_Speed);
                ui->BR_tire_speed->display(BR_tire_Speed);

                ui->rpm_bar->setValue(RPM);


                std::cout << " Received RPM: " << RPM << " | Speed: " << Speed << " | Gear: " << Gears << std::endl;
            });
}
