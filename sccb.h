#ifndef __sccb_h__
#define __sccb_h__

#include <zephyr/kernel.h>
#include <zephyr/drivers/i2c.h>

int sccb_write_dt(const struct i2c_dt_spec *dev, uint8_t reg, uint8_t val);
int sccb_read_dt(const struct i2c_dt_spec *dev, uint8_t reg, uint8_t *val);

#endif