/*
 * ri.h
 *
 *  Created on: 24-09-2012
 *      Author: Tomek
 */

#ifndef STM32L_RI_H_
#define STM32L_RI_H_

#include <stm32l/stm32l.h>

/* routing intereface base */
#define RI_BASE								0x40007C04
/* ri */
#define RI                  				((ri_t *) RI_BASE)

typedef struct {
	reg32_t ICR;
	reg32_t ASCR1;
	reg32_t ASCR2;
	reg32_t HYSCR1;
	reg32_t HYSCR2;
	reg32_t HYSCR3;
	reg32_t HYSCR4;
} ri_t;

/* RI input capture register */
#define  RI_ICR_IC1Z                    	(0x0000000F)
#define  RI_ICR_IC1Z_0                  	(0x00000001)
#define  RI_ICR_IC1Z_1                  	(0x00000002)
#define  RI_ICR_IC1Z_2                  	(0x00000004)
#define  RI_ICR_IC1Z_3                  	(0x00000008)
#define  RI_ICR_IC2Z                    	(0x000000F0)
#define  RI_ICR_IC2Z_0                  	(0x00000010)
#define  RI_ICR_IC2Z_1                  	(0x00000020)
#define  RI_ICR_IC2Z_2                  	(0x00000040)
#define  RI_ICR_IC2Z_3                  	(0x00000080)
#define  RI_ICR_IC3Z                    	(0x00000F00)
#define  RI_ICR_IC3Z_0                  	(0x00000100)
#define  RI_ICR_IC3Z_1                  	(0x00000200)
#define  RI_ICR_IC3Z_2                  	(0x00000400)
#define  RI_ICR_IC3Z_3                  	(0x00000800)
#define  RI_ICR_IC4Z                    	(0x0000F000)
#define  RI_ICR_IC4Z_0                  	(0x00001000)
#define  RI_ICR_IC4Z_1                  	(0x00002000)
#define  RI_ICR_IC4Z_2                  	(0x00004000)
#define  RI_ICR_IC4Z_3                  	(0x00008000)
#define  RI_ICR_TIM                     	(0x00030000)
#define  RI_ICR_TIM_0                   	(0x00010000)
#define  RI_ICR_TIM_1                   	(0x00020000)
#define  RI_ICR_IC1                     	(0x00040000)
#define  RI_ICR_IC2                     	(0x00080000)
#define  RI_ICR_IC3                     	(0x00100000)
#define  RI_ICR_IC4                     	(0x00200000)

/* RI analog switches control register */
#define  RI_ASCR1_CH                    	(0x03FCFFFF)
#define  RI_ASCR1_CH_0                  	(0x00000001)
#define  RI_ASCR1_CH_1                  	(0x00000002)
#define  RI_ASCR1_CH_2                  	(0x00000004)
#define  RI_ASCR1_CH_3                  	(0x00000008)
#define  RI_ASCR1_CH_4                  	(0x00000010)
#define  RI_ASCR1_CH_5                  	(0x00000020)
#define  RI_ASCR1_CH_6                  	(0x00000040)
#define  RI_ASCR1_CH_7                  	(0x00000080)
#define  RI_ASCR1_CH_8                  	(0x00000100)
#define  RI_ASCR1_CH_9                  	(0x00000200)
#define  RI_ASCR1_CH_10                 	(0x00000400)
#define  RI_ASCR1_CH_11                 	(0x00000800)
#define  RI_ASCR1_CH_12                 	(0x00001000)
#define  RI_ASCR1_CH_13                 	(0x00002000)
#define  RI_ASCR1_CH_14                 	(0x00004000)
#define  RI_ASCR1_CH_15                 	(0x00008000)
#define  RI_ASCR1_CH_31                 	(0x00010000)
#define  RI_ASCR1_CH_18                 	(0x00040000)
#define  RI_ASCR1_CH_19                 	(0x00080000)
#define  RI_ASCR1_CH_20                 	(0x00100000)
#define  RI_ASCR1_CH_21                 	(0x00200000)
#define  RI_ASCR1_CH_22                 	(0x00400000)
#define  RI_ASCR1_CH_23                 	(0x00800000)
#define  RI_ASCR1_CH_24                 	(0x01000000)
#define  RI_ASCR1_CH_25                 	(0x02000000)
#define  RI_ASCR1_VCOMP                 	(0x04000000)
#define  RI_ASCR1_CH_27                 	(0x00400000)
#define  RI_ASCR1_CH_28                 	(0x00800000)
#define  RI_ASCR1_CH_29                 	(0x01000000)
#define  RI_ASCR1_CH_30                 	(0x02000000)
#define  RI_ASCR1_SCM                   	(0x80000000)

/* RI analog switch control register 2*/
#define  RI_ASCR2_GR10_1                	(0x00000001)
#define  RI_ASCR2_GR10_2                	(0x00000002)
#define  RI_ASCR2_GR10_3                	(0x00000004)
#define  RI_ASCR2_GR10_4                	(0x00000008)
#define  RI_ASCR2_GR6_1                 	(0x00000010)
#define  RI_ASCR2_GR6_2                 	(0x00000020)
#define  RI_ASCR2_GR5_1                 	(0x00000040)
#define  RI_ASCR2_GR5_2                 	(0x00000080)
#define  RI_ASCR2_GR5_3                 	(0x00000100)
#define  RI_ASCR2_GR4_1                 	(0x00000200)
#define  RI_ASCR2_GR4_2                 	(0x00000400)
#define  RI_ASCR2_GR4_3                 	(0x00000800)
#define  RI_ASCR2_GR4_4                 	(0x00008000)
#define  RI_ASCR2_CH0b                  	(0x00010000)
#define  RI_ASCR2_CH1b                  	(0x00020000)
#define  RI_ASCR2_CH2b                  	(0x00040000)
#define  RI_ASCR2_CH3b                  	(0x00080000)
#define  RI_ASCR2_CH6b                  	(0x00100000)
#define  RI_ASCR2_CH7b                  	(0x00200000)
#define  RI_ASCR2_CH8b                  	(0x00400000)
#define  RI_ASCR2_CH9b                  	(0x00800000)
#define  RI_ASCR2_CH10b                 	(0x01000000)
#define  RI_ASCR2_CH11b                 	(0x02000000)
#define  RI_ASCR2_CH12b                 	(0x04000000)
#define  RI_ASCR2_GR6_3                 	(0x08000000)
#define  RI_ASCR2_GR6_4                 	(0x10000000)
#define  RI_ASCR2_GR5_4                 	(0x20000000)

/* RI hysteresis control register */
#define  RI_HYSCR1_PA                   	(0x0000FFFF)
#define  RI_HYSCR1_PA_0                 	(0x00000001)
#define  RI_HYSCR1_PA_1                 	(0x00000002)
#define  RI_HYSCR1_PA_2                 	(0x00000004)
#define  RI_HYSCR1_PA_3                 	(0x00000008)
#define  RI_HYSCR1_PA_4                 	(0x00000010)
#define  RI_HYSCR1_PA_5                 	(0x00000020)
#define  RI_HYSCR1_PA_6                 	(0x00000040)
#define  RI_HYSCR1_PA_7                 	(0x00000080)
#define  RI_HYSCR1_PA_8                 	(0x00000100)
#define  RI_HYSCR1_PA_9                 	(0x00000200)
#define  RI_HYSCR1_PA_10                	(0x00000400)
#define  RI_HYSCR1_PA_11                	(0x00000800)
#define  RI_HYSCR1_PA_12                	(0x00001000)
#define  RI_HYSCR1_PA_13                	(0x00002000)
#define  RI_HYSCR1_PA_14                	(0x00004000)
#define  RI_HYSCR1_PA_15                	(0x00008000)
#define  RI_HYSCR1_PB                   	(0xFFFF0000)
#define  RI_HYSCR1_PB_0                 	(0x00010000)
#define  RI_HYSCR1_PB_1                 	(0x00020000)
#define  RI_HYSCR1_PB_2                 	(0x00040000)
#define  RI_HYSCR1_PB_3                 	(0x00080000)
#define  RI_HYSCR1_PB_4                 	(0x00100000)
#define  RI_HYSCR1_PB_5                 	(0x00200000)
#define  RI_HYSCR1_PB_6                 	(0x00400000)
#define  RI_HYSCR1_PB_7                 	(0x00800000)
#define  RI_HYSCR1_PB_8                 	(0x01000000)
#define  RI_HYSCR1_PB_9                 	(0x02000000)
#define  RI_HYSCR1_PB_10                	(0x04000000)
#define  RI_HYSCR1_PB_11                	(0x08000000)
#define  RI_HYSCR1_PB_12                	(0x10000000)
#define  RI_HYSCR1_PB_13                	(0x20000000)
#define  RI_HYSCR1_PB_14                	(0x40000000)
#define  RI_HYSCR1_PB_15                	(0x80000000)

/* RI Hysteresis control register */
#define  RI_HYSCR2_PC                   	(0x0000FFFF)
#define  RI_HYSCR2_PC_0                 	(0x00000001)
#define  RI_HYSCR2_PC_1                 	(0x00000002)
#define  RI_HYSCR2_PC_2                 	(0x00000004)
#define  RI_HYSCR2_PC_3                 	(0x00000008)
#define  RI_HYSCR2_PC_4                 	(0x00000010)
#define  RI_HYSCR2_PC_5                 	(0x00000020)
#define  RI_HYSCR2_PC_6                 	(0x00000040)
#define  RI_HYSCR2_PC_7                 	(0x00000080)
#define  RI_HYSCR2_PC_8                 	(0x00000100)
#define  RI_HYSCR2_PC_9                 	(0x00000200)
#define  RI_HYSCR2_PC_10                	(0x00000400)
#define  RI_HYSCR2_PC_11                	(0x00000800)
#define  RI_HYSCR2_PC_12                	(0x00001000)
#define  RI_HYSCR2_PC_13                	(0x00002000)
#define  RI_HYSCR2_PC_14                	(0x00004000)
#define  RI_HYSCR2_PC_15                	(0x00008000)
#define  RI_HYSCR2_PD                   	(0xFFFF0000)
#define  RI_HYSCR2_PD_0                 	(0x00010000)
#define  RI_HYSCR2_PD_1                 	(0x00020000)
#define  RI_HYSCR2_PD_2                 	(0x00040000)
#define  RI_HYSCR2_PD_3                 	(0x00080000)
#define  RI_HYSCR2_PD_4                 	(0x00100000)
#define  RI_HYSCR2_PD_5                 	(0x00200000)
#define  RI_HYSCR2_PD_6                 	(0x00400000)
#define  RI_HYSCR2_PD_7                 	(0x00800000)
#define  RI_HYSCR2_PD_8                 	(0x01000000)
#define  RI_HYSCR2_PD_9                 	(0x02000000)
#define  RI_HYSCR2_PD_10                	(0x04000000)
#define  RI_HYSCR2_PD_11                	(0x08000000)
#define  RI_HYSCR2_PD_12                	(0x10000000)
#define  RI_HYSCR2_PD_13                	(0x20000000)
#define  RI_HYSCR2_PD_14                	(0x40000000)
#define  RI_HYSCR2_PD_15                	(0x80000000)

#define  RI_HYSCR2_PE                   	(0x0000FFFF)
#define  RI_HYSCR2_PE_0                 	(0x00000001)
#define  RI_HYSCR2_PE_1                 	(0x00000002)
#define  RI_HYSCR2_PE_2                 	(0x00000004)
#define  RI_HYSCR2_PE_3                 	(0x00000008)
#define  RI_HYSCR2_PE_4                 	(0x00000010)
#define  RI_HYSCR2_PE_5                 	(0x00000020)
#define  RI_HYSCR2_PE_6                 	(0x00000040)
#define  RI_HYSCR2_PE_7                 	(0x00000080)
#define  RI_HYSCR2_PE_8                 	(0x00000100)
#define  RI_HYSCR2_PE_9                 	(0x00000200)
#define  RI_HYSCR2_PE_10                	(0x00000400)
#define  RI_HYSCR2_PE_11                	(0x00000800)
#define  RI_HYSCR2_PE_12                	(0x00001000)
#define  RI_HYSCR2_PE_13                	(0x00002000)
#define  RI_HYSCR2_PE_14                	(0x00004000)
#define  RI_HYSCR2_PE_15                	(0x00008000)

/* RI Hysteresis control register */
#define  RI_HYSCR3_PF                   	(0xFFFF0000)
#define  RI_HYSCR3_PF_0                 	(0x00010000)
#define  RI_HYSCR3_PF_1                 	(0x00020000)
#define  RI_HYSCR3_PF_2                 	(0x00040000)
#define  RI_HYSCR3_PF_3                 	(0x00080000)
#define  RI_HYSCR3_PF_4                 	(0x00100000)
#define  RI_HYSCR3_PF_5                 	(0x00200000)
#define  RI_HYSCR3_PF_6                 	(0x00400000)
#define  RI_HYSCR3_PF_7                 	(0x00800000)
#define  RI_HYSCR3_PF_8                 	(0x01000000)
#define  RI_HYSCR3_PF_9                 	(0x02000000)
#define  RI_HYSCR3_PF_10                	(0x04000000)
#define  RI_HYSCR3_PF_11                	(0x08000000)
#define  RI_HYSCR3_PF_12                	(0x10000000)
#define  RI_HYSCR3_PF_13                	(0x20000000)
#define  RI_HYSCR3_PF_14                	(0x40000000)
#define  RI_HYSCR3_PF_15                	(0x80000000)

/* RI Hysteresis control register */
#define  RI_HYSCR4_PG                   	(0x0000FFFF)
#define  RI_HYSCR4_PG_0                 	(0x00000001)
#define  RI_HYSCR4_PG_1                 	(0x00000002)
#define  RI_HYSCR4_PG_2                 	(0x00000004)
#define  RI_HYSCR4_PG_3                 	(0x00000008)
#define  RI_HYSCR4_PG_4                 	(0x00000010)
#define  RI_HYSCR4_PG_5                	 	(0x00000020)
#define  RI_HYSCR4_PG_6                 	(0x00000040)
#define  RI_HYSCR4_PG_7                 	(0x00000080)
#define  RI_HYSCR4_PG_8                 	(0x00000100)
#define  RI_HYSCR4_PG_9                 	(0x00000200)
#define  RI_HYSCR4_PG_10                	(0x00000400)
#define  RI_HYSCR4_PG_11                	(0x00000800)
#define  RI_HYSCR4_PG_12                	(0x00001000)
#define  RI_HYSCR4_PG_13                	(0x00002000)
#define  RI_HYSCR4_PG_14                	(0x00004000)
#define  RI_HYSCR4_PG_15                	(0x00008000)

/* ASCR1 I/O switch: bit 31 is set to '1' to indicate that the mask is in
 * ASCR1 register */
#define RI_CH0        						(0x80000001)
#define RI_CH1        						(0x80000002)
#define RI_CH2        						(0x80000004)
#define RI_CH3        						(0x80000008)
#define RI_CH4        						(0x80000010)
#define RI_CH5        						(0x80000020)
#define RI_CH6        						(0x80000040)
#define RI_CH7       	 					(0x80000080)
#define RI_CH8        						(0x80000100)
#define RI_CH9        						(0x80000200)
#define RI_CH10       						(0x80000400)
#define RI_CH11       						(0x80000800)
#define RI_CH12       						(0x80001000)
#define RI_CH13       						(0x80002000)
#define RI_CH14       						(0x80004000)
#define RI_CH15       						(0x80008000)
#define RI_CH31       						(0x80010000)
#define RI_CH18      			 			(0x80040000)
#define RI_CH19       						(0x80080000)
#define RI_CH20       						(0x80100000)
#define RI_CH21       						(0x80200000)
#define RI_CH22       						(0x80400000)
#define RI_CH23       						(0x80800000)
#define RI_CH24       						(0x81000000)
#define RI_CH25       						(0x82000000)
/* VCOMP is an internal switch used to connect
   selected channel to COMP1 non inverting input */
#define RI_VCOMP      						(0x84000000)
#define RI_CH27       						(0x88000000)
#define RI_CH28       						(0x90000000)
#define RI_CH29       						(0xA0000000)
#define RI_CH30       						(0xC0000000)

/* ASCR2 IO switch: bit 31 is set to '0' to indicate that
 * the mask is in ASCR2 register */
#define RI_GR10_1     						(0x00000001)
#define RI_GR10_2     						(0x00000002)
#define RI_GR10_3     						(0x00000004)
#define RI_GR10_4     						(0x00000008)
#define RI_GR6_1      						(0x00000010)
#define RI_GR6_2      						(0x00000020)
#define RI_GR5_1      						(0x00000040)
#define RI_GR5_2      						(0x00000080)
#define RI_GR5_3      						(0x00000100)
#define RI_GR4_1      						(0x00000200)
#define RI_GR4_2      						(0x00000400)
#define RI_GR4_3      						(0x00000800)
#define RI_GR4_4      						(0x00008000)
#define RI_CH0b       						(0x00010000)
#define RI_CH1b       						(0x00020000)
#define RI_CH2b       						(0x00040000)
#define RI_CH3b       						(0x00080000)
#define RI_CH6b       						(0x00100000)
#define RI_CH7b       						(0x00200000)
#define RI_CH8b       						(0x00400000)
#define RI_CH9b       						(0x00800000)
#define RI_CH10b      						(0x01000000)
#define RI_CH11b      						(0x02000000)
#define RI_CH12b      						(0x04000000)
#define RI_GR6_3      						(0x08000000)
#define RI_GR6_4      						(0x10000000)
#define RI_GR5_4      						(0x20000000)

/* routing interface pins */
#define RI_PORTA                 			(0x01)
#define RI_PORTB                 			(0x02)
#define RI_PORTC                 			(0x03)
#define RI_PORTD                 			(0x04)
#define RI_PORTE                 			(0x05)
#define RI_PORTF                 			(0x06)
#define RI_PORTG                 			(0x07)

/* open/close analog switch on corresponding i/o */
void RI_IOSwitchConfig(uint32_t sw, int state);
/* configure corresponding pin hysteresis */
void RI_HysteresisConfig(int port, uint16_t pin, int state);

#endif /* STM32_RI_H_ */
