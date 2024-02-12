/*
 * DIFF.h
 *
 *  Created on: Oct 3, 2023
 *      Author: User
 */

#ifndef DIFFERENTIATOR_H
#define DIFFERENTIATOR_H
typedef struct {
/* Derivative low-pass filter time constant */
float tau;
/* Sample time (in seconds) */
float T;
/* Controller "memory" */
float prevInput; /* Required for integrator */
float prevOutput; /* Required for differentiator */
/* Controller output */
float output;
} Differentiator;
void Differentiator_Init(Differentiator *diff);
float Differentiator_Update(Differentiator *diff, float input);



#endif /* INC_DIFF_H_ */
