//**********************************************************************************************************
// Author: Mouli Sankaran (mouli.sankaran@yahoo.com)
// Date: Oct 2024
// The link of HiveMQ where login was created to run my instance of MQTT Broker
// This MQTT Broker is running on Azure cloud (it has option to run it on AWS too) for free
// This allows IoT devices running on private network having access to Internet to access this Broker
// To either Publish and Subscribe to control and to be controlled by other devices and controllers
//**********************************************************************************************************

#ifndef MYMQTTBROKERDETAILS_H
#define MYMQTTBROKERDETAILS_H

// This is to be replaced with the Domain name of the your instance 
// of the MQTT TLS Broker running on HiveMQ
const char* domain = "5f510d129bb44399a730b3cee9e21d2d.s1.eu.hivemq.cloud";

// My IoT device credentials created on HiveMQ to log into the MQTT Broker running there.
const char* MQTTUsername = "hidden_machine";
const char* MQTTPassword = "hivemq_splash";

#endif //MYMQTTBROKERDETAILS_H
