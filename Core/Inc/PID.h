/*
 * PID.h
 *
 *  Created on: Oct 3, 2023
 *      Author: User
 */


#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H
typedef struct {
/* Controller gains */
/* Derivative low-pass filter time constant */
float tau;
float Kp;
float Ki;
float Kd;
/* Output limits */
float limMin;
float limMax;
/* Integrator limits */
float limMinInt;
float limMaxInt;
/* Sample time (in seconds) */
float T;
/* Controller "memory" */
float integrator;
float prevError; /* Required for integrator */
float differentiator;
float prevMeasurement; /* Required for differentiator */
/* Controller output */
float out;
} PIDController;
void PIDController_Init(PIDController *pid);
float PIDController_Update(PIDController *pid, float setpoint, float
measurement,float Kp,float Ki,float Kd);


#endif /* INC_PID_H_ */
