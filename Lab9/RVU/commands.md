Terminal 1 : 

```plaintext
mosquitto_sub -h 5f510d129bb44399a730b3cee9e21d2d.s1.eu.hivemq.cloud -u hidden_machine -P hivemq_splash --cafile D:\ProjectDdrive\iot_and_ec_files\Lab9\isrgrootx1.pem -t sns2_cntrl
```

Terminal 2:

```plaintext
mosquitto_sub -h 5f510d129bb44399a730b3cee9e21d2d.s1.eu.hivemq.cloud -u hidden_machine -P hivemq_splash --cafile D:\ProjectDdrive\iot_and_ec_files\Lab9\isrgrootx1.pem -t sns1_cntrl -m <command : off|blinkFast|blinkSlow|on>
```
