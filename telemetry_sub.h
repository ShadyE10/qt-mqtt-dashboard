#ifndef TELEMETRY_SUB_H
#define TELEMETRY_SUB_H

#include <QObject>
#include <mosquittopp.h>
#include <jsoncpp/json/json.h>

class Telemetry_sub : public QObject, public mosqpp::mosquittopp
{
    Q_OBJECT

public:
    explicit Telemetry_sub(const char *id,
                           const char *host,
                           int port,
                           const char *username,
                           const char *password,
                           QObject *parent = nullptr);

signals:
    void telemetryReceived(int RPM,
                           int Speed,
                           int Gears,
                           double Battery,
                           double OIl_pressure,
                           double Water_pressure,
                           double Engine_Temp,
                           double Fuel,
                           int FL_tire, int FR_tire, int BL_tire, int BR_tire,
                           int FL_tire_Speed, int FR_tire_Speed, int BL_tire_Speed, int BR_tire_Speed);

protected:
    void on_connect(int rc) override;
    void on_message(const struct mosquitto_message *message) override;
};

#endif // TELEMETRY_SUB_H
