#include <sccb.h>

int sccb_write_dt(const struct i2c_dt_spec *dev, uint8_t reg, uint8_t val)
{
    return i2c_reg_write_byte_dt(dev, reg, val);
}

int sccb_read_dt(const struct i2c_dt_spec *dev, uint8_t reg, uint8_t *val)
{
    struct i2c_msg msgs[2];

    msgs[0].buf = &reg;
    msgs[0].len = 1;
    msgs[0].flags = I2C_MSG_WRITE;

    msgs[1].buf = val;
    msgs[1].len = 1;
    msgs[1].flags = I2C_MSG_READ;

    int err = i2c_transfer(dev->bus, &msgs[0], 1, dev->addr);
    if (err)
        return err;

    return i2c_transfer(dev->bus, &msgs[1], 1, dev->addr);
}