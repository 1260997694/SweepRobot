/********************************************************************************
 * This code is used for robot control
*********************************************************************************
 * Author        Data            Version
 * Liren         2018/12/15      1.0
********************************************************************************/
#ifndef __ROC_SERVO_H
#define __ROC_SERVO_H


#define ROC_SERVO_SPEED_DIV_STP         3

#define ROC_SERVO_MAX_SUPPORT_NUM       18U

#define ROC_SERVO_MAX_PWM_VAL           512
#define ROC_SERVO_MIN_PWM_VAL           102
#define ROC_SERVO_CENTER_VAL            256

#define ROC_SERVO_MAX_ROTATE_ANGLE      180


void RocServoControl(void);
void RocServoSpeedSet(uint16_t ServoRunTimeMs);
ROC_RESULT RocServoInit(void);
ROC_RESULT RocServoTimerStop(void);
ROC_RESULT RocServoTimerStart(void);
ROC_RESULT RocServoInputUpdate(uint16_t *pServoInputVal);


extern int16_t          g_PwmExpetVal[ROC_SERVO_MAX_SUPPORT_NUM];


#endif
