#ifndef EXEC_TEST_DIGITAL_PIN_QLIB
#define EXEC_TEST_DIGITAL_PIN_QLIB

/**
 * 这里定义了所有有关数字输入输出针脚的常数
 * 此文件只适用于Arduino Uno型号，因为其他型号的Arduino有不同的针脚识别数字
 */

#define C_DAC_DB0 23,OUTPUT
#define C_DAC_DB1 24,OUTPUT
#define C_DAC_DB2 25,OUTPUT
#define C_DAC_DB3 26,OUTPUT
#define C_DAC_RLDAC 5,OUTPUT
#define C_DAC_DB4 6,OUTPUT
#define C_DAC_DB5 11,OUTPUT
#define C_DAC_DB6 12,OUTPUT
#define C_DAC_DB7 13,OUTPUT
#define C_DAC_RAB 14,OUTPUT
#define C_DAC_RWR 16,OUTPUT

#define INIT_DIGITAL_PINS \
pinMode(C_DAC_DB0);\
pinMode(C_DAC_DB1);\
pinMode(C_DAC_DB2);\
pinMode(C_DAC_DB3);\
pinMode(C_DAC_DB4);\
pinMode(C_DAC_DB5);\
pinMode(C_DAC_DB6);\
pinMode(C_DAC_DB7);\
pinMode(C_DAC_RLDAC);\
pinMode(C_DAC_RAB);\
pinMode(C_DAC_RWR);\

#endif //EXEC_TEST_DIGITAL_PIN_QLIB
