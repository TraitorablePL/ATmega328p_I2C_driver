/*
 * i2c.c
 *
 * Created: 03.02.2020 15:58:22
 *  Author: Trait
 */ 

#include "i2c.h"
#include <avr/interrupt.h>

// MCU clock
#define F_CPU 4000000UL //explicit declaration of type Unsigned Long

// I2C Bus clock
#define SCL_CLOCK  100000L //explicit declaration of type Long

// I2C Status
#define START 0x08
#define REP_START  0x10

// Master Transmitter Mode
#define ADDR_WRITE_ACK 0x18
#define ADDR_WRITE_NACK 0x20
#define WRITE_DATA_ACK 0x28
#define WRITE_DATA_NACK 0x30

// Master Receiver Mode
#define ADDR_READ_ACK 0x40
#define ADDR_READ_NACK 0x48
#define READ_DATA_ACK 0x50
#define READ_DATA_NACK 0x58

static I2C_ActionParams localParams;

ISR(TWI_vect){
	
	
}

void i2c_init(){
	TWSR = 0;
	TWBR = (F_CPU/SCL_CLOCK-16)/2;
	
	TWCR |= (1<<TWEN) | (1<<TWIE);
}

enum I2C_Actions i2c_eGetActionStatus(){
	return localParams.eCurrentAction;
}

