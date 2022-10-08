#ifndef EXEC_TEST_ANALOG_PIN_QLIB
#define EXEC_TEST_ANALOG_PIN_QLIB
/**
 * 这里定义了所有有关模拟输入输出针脚的常数
 * 此文件只适用于Arduino Uno型号，因为其他型号的Arduino有不同的针脚识别数字
 */

#define C_IN_STICKX 27
#define C_IN_STICKY 28

#define INIT_ANALOG_PINS \
Serial.begin(9600);

#define getStickXVoltage() analogRead(C_IN_STICKX) * (5.0 / 1023.0)
#define getStickYVoltage() analogRead(C_IN_STICKY) * (5.0 / 1023.0)

#endif //EXEC_TEST_ANALOG_PIN_QLIB
