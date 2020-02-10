/*
 * i2c.h
 *
 * Created: 03.02.2020 15:59:20
 *  Author: Trait
 */ 


#ifndef I2C_H_
#define I2C_H_

#include <stdint.h>

enum I2C_Actions {
	I2C_Idle,
	I2C_WriteAndReadAction,
	I2C_WriteAction,
	I2C_ReadAction
};

struct I2C_ActionParams {
	enum I2C_Actions eCurrentAction;
	uint8_t receiverAddr;
	uint8_t* pTxDataBuffer;
	uint8_t* pRxDataBuffer;
	uint8_t dataCounter;
};

void i2c_init();
enum I2C_Actions i2c_eGetActionStatus();



#endif /* I2C_H_ */