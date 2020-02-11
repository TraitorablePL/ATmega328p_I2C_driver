/*
 * I2C_driver.c
 *
 * Created: 03.02.2020 15:50:23
 * Author : Daniel Stankiewicz
 */ 

#include <avr/io.h>

#include "i2c/i2c.h"

// MCU clock
#define F_CPU 4000000UL //explicit declaration of type Unsigned Long

int main(void) {
	// Clock to 4MHz from standard 16MHz
	CLKPR = (1<<CLKPCE);
	CLKPR = (1<<CLKPS1);

	i2c_init();
	
    while(1) {
		
    }
}

