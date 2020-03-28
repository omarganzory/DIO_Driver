/*
 *
 * BIT_MATH.h
 *
 *******Created on  : Mar 26, 2020
 *******Author      : OMAR ELGANZORY
 *******Version     : 1.0 V
 * 
 */
 

/*************************************************************
***         Guard Of File Will Call One Time IN .c         ***
**************************************************************/


#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_


#define SET_BIT(REG, BitNum)     REG |=(1<<BitNum)
#define CLEAR_BIT(REG, BitNum)   REG &=~(1<<BitNum)
#define TOGGLE_BIT(REG, BitNum)  REG ^=(1<<BitNum)
#define GET_BIT(REG, BitNum)     ((REG>>BitNum)&0x01)

#endif /* LIB_BIT_MATH_H_ */
