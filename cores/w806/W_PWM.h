
#ifndef W_PWM_h
#define W_PWM_h


#include "Common.h"
#include "variant.h"

/** pwm interrupt callback type **/
typedef void (*pwm_irq_callback)();

void PWM_Init(PWM_HandleTypeDef* hpwm, uint32_t channel);
uint32_t setPWMFreq(PWM_HandleTypeDef* hpwm, uint32_t pwmFreq);
void setPWM_Inverse(PWM_HandleTypeDef* hpwm, bool pwm_inverse, bool start);
void enablePWM_Train(PWM_HandleTypeDef *hpwm, uint8_t num_cnt, pwm_irq_callback callback, bool start);
void disablePWM_Train(PWM_HandleTypeDef *hpwm, bool start);
void setPWM_OneShotMode(PWM_HandleTypeDef* hpwm, bool os_mode, uint8_t pnum_cnt, bool start);
void startPWM(PWM_HandleTypeDef* hpwm);
void stopPWM(PWM_HandleTypeDef* hpwm);

void HAL_PWM_IRQHandler(void);

#endif