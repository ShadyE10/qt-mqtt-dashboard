#include "telemetry_sub.h"
#include <iostream>

Telemetry_sub::Telemetry_sub(const char *id,
                             const char *host,
                             int port,
                             const char *username,
                             const char *password,
                             QObject *parent)
    : QObject(parent), mosqpp::mosquittopp(id)
{
    mosqpp::lib_init();
    username_pw_set(username, password);
    tls_set("/etc/ssl/certs/ca-certificates.crt");
    tls_insecure_set(false);
    connect_async(host, port, 60);
    loop_start();
}

void Telemetry_sub::on_connect(int rc)
{
    if (rc == 0) {
        std::cout << "Connected to HiveMQ Cloud\n";
        subscribe(nullptr, "telemetry", 1);
    } else {
        std::cout << "Connection failed, code: " << rc << "\n";
    }
}

void Telemetry_sub::on_message(const struct mosquitto_message *message)
{
    std::string payload(static_cast<char *>(message->payload), message->payloadlen);
    Json::Value data;
    Json::Reader reader;

    if (reader.parse(payload, data)) {
        emit telemetryReceived(
            data.get("RPM", 0).asInt(),
            data.get("Speed", 0).asInt(),
            data.get("Gears", 0).asInt(),
            data.get("Battery", 0.0).asDouble(),
            data.get("OIl_pressure", 0.0).asDouble(),
            data.get("Water_pressure", 0.0).asDouble(),
            data.get("Engine_Temp", 0.0).asDouble(),
            data.get("Fuel", 0.0).asDouble(),
            data.get("FL_tire", 0).asInt(),
            data.get("FR_tire", 0).asInt(),
            data.get("BL_tire", 0).asInt(),
            data.get("BR_tire", 0).asInt(),
            data.get("FL_tire_Speed", 0).asInt(),
            data.get("FR_tire_Speed", 0).asInt(),
            data.get("BL_tire_Speed", 0).asInt(),
            data.get("BR_tire_Speed", 0).asInt()
            );
    } else {
        std::cout << "Failed to parse JSON payload\n";
    }
}
