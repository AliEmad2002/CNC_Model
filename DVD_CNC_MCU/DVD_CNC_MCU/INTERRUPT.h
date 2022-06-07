/*
 * INTERRUPT.h
 *
 * Created: 4/11/2022 11:44:41 PM
 *  Author: Ali Emad
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#define INTERRUPT_REG_SREG				(*(volatile u8*)0x5F)

#define INTERRUPT_ENABLE_GLOBAL_INTERRUPT				(SET_BIT(INTERRUPT_REG_SREG,7))
#define INTERRUPT_DISABLE_GLOBAL_INTERRUPT				(CLR_BIT(INTERRUPT_REG_SREG,7))




#endif /* INTERRUPT_H_ */