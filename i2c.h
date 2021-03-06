/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2018 Daniel Campoverde Carrión [alx741]
 */

#pragma once

#include <stdlib.h>
#include <stdint.h>

typedef enum I2C_MODE_t {I2C_RECEIVE, I2C_TRANSMIT} I2C_MODE;

void i2c_init_100khz(void);
void i2c_start(void);
void i2c_stop(void);
void i2c_restart(void);
void i2c_ack(void);
void i2c_nack(void);
void i2c_slave_select(uint8_t addr, I2C_MODE mode);
void i2c_transmit_byte(uint8_t data);
uint8_t i2c_receive_byte(void);
void i2c_receive_bytestring(uint8_t *dest, size_t n);
