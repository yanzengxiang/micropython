/* This file is part of the MicroPython project, http://micropython.org/
 * MIT License; Copyright (c) 2021 Damien P. George
 */

// STM32F407ZGT6 by ALIENTEK
// 
// 
// 

// DFU mode can be accessed by switching BOOT0 DIP ON (towards USB)

#define MICROPY_HW_BOARD_NAME       "\r\nALIENTEK STM32F4"
#define MICROPY_HW_MCU_NAME         "STM32F407ZGT6\r\nLQFP144，FLASH：1M，SRAM：192K\r\nSPI FLASH：16M，external SRAM：1M"
#define MICROPY_HW_FLASH_FS_LABEL   "ALIENTEKF407ZGT6"

// 1 = use internal flash (1 MKByte)
// 0 = use onboard SPI flash (16 MByte) Winbond W25X128
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (0)

#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SDCARD    (1)
#define MICROPY_HW_I2S1		        (1)
#define MICROPY_HW_HAS_SWITCH       (1) //KEY_UP1
#define MICROPY_HW_HAS_KEYS         (0) //KEY1,2,3
#define MICROPY_HW_ENABLE_SERVO     (0)

// HSE is 8MHz
#define MICROPY_HW_CLK_PLLM (8)            // divide external clock by this to get 1MHz
#define MICROPY_HW_CLK_PLLN (336)           // PLL clock in MHz
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2) // divide PLL clock by this to get core clock
#define MICROPY_HW_CLK_PLLQ (7)             // divide core clock by this to get 48MHz

// The board has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
// #define MICROPY_HW_RTC_USE_CALOUT   (1)  // turn on/off PC13 512Hz output

// USART1
#define MICROPY_HW_UART1_TX     (pin_A9)   // PA9,PB6
#define MICROPY_HW_UART1_RX     (pin_A10)  // PA10,PB7
#define MICROPY_HW_UART1_RTS    (pin_A12)
#define MICROPY_HW_UART1_CTS    (pin_A11)
// USART1_CK  PA8

// USART2
#define MICROPY_HW_UART2_TX     (pin_A2)  // PA2,PD5
#define MICROPY_HW_UART2_RX     (pin_A3)  // PA3,PD6
#define MICROPY_HW_UART2_RTS    (pin_A1)  // PA1,PD4
#define MICROPY_HW_UART2_CTS    (pin_A0)  // PA0,PD3
// USART2_CK  PA4,PD7

// USART3
#define MICROPY_HW_UART3_TX     (pin_D8)  // PB10,PC10,PD8
#define MICROPY_HW_UART3_RX     (pin_D9)  // PB11,PC11,PD9
#define MICROPY_HW_UART3_RTS    (pin_D12) // PB14,PD12
#define MICROPY_HW_UART3_CTS    (pin_D11) // PB13,PD11
// USART3_CK  PB12,PC12,PD10

// UART4
#define MICROPY_HW_UART4_TX     (pin_A0)  // PA0,PC10
#define MICROPY_HW_UART4_RX     (pin_A1)  // PA1,PC11

// UART5
#define MICROPY_HW_UART5_TX     (pin_C12) // PC12
#define MICROPY_HW_UART5_RX     (pin_D2)  // PD2

// USART6
#define MICROPY_HW_UART6_TX     (pin_C6)  // PC6,PG14
#define MICROPY_HW_UART6_RX     (pin_C7)  // PC7,PG9
#define MICROPY_HW_UART6_RTS    (pin_G8)  // PG8,PG12
#define MICROPY_HW_UART6_CTS    (pin_G13) // PG13,PG15
// USART6_CK  PC8,PG7

// I2C buses
#define MICROPY_HW_I2C1_SCL     (pin_B6)  // PB8,PB6
#define MICROPY_HW_I2C1_SDA     (pin_B7)  // PB9,PB7
// I2C1_SMBA  PB5
#define MICROPY_HW_I2C2_SCL     (pin_B10) // PB10,PF1
#define MICROPY_HW_I2C2_SDA     (pin_B11) // PB11,PF0
// I2C2_SMBA  PB12,PF2
#define MICROPY_HW_I2C3_SCL     (pin_A8)  // PA8
#define MICROPY_HW_I2C3_SDA     (pin_C9)  // PC9
// I2C3_SMBA  PA9

// AT24C08 EEPROM on I2C1 0x50-0x53

// I2S buses - multiplexed with SPI2 and SPI3
// I2S2_CK  PB10,PB13
// I2S2_MCK PC6
// I2S2_SD  PB15,PC3
// I2S2_WS  PB9,PB12
// I2S3_CK  PB3,PC10
// I2S3_MCK PC7
// I2S3_SD  PB5,PC12
// I2S3_WS  PA4,PA15

// SPI buses
#define MICROPY_HW_SPI1_NSS     (pin_A4)  // PA4,PA15
#define MICROPY_HW_SPI1_SCK     (pin_A5)  // PA5,PB3
#define MICROPY_HW_SPI1_MISO    (pin_A6)  // PA6,PB4
#define MICROPY_HW_SPI1_MOSI    (pin_A7)  // PA7,PB5

#define MICROPY_HW_SPI2_NSS     (pin_B12) // PB12,PB9
#define MICROPY_HW_SPI2_SCK     (pin_B13) // PB13,PB10
#define MICROPY_HW_SPI2_MISO    (pin_B14) // PB14,PC2
#define MICROPY_HW_SPI2_MOSI    (pin_B15) // PB15,PC3

#define MICROPY_HW_SPI3_NSS     (pin_A15) // PA15,PA4
#define MICROPY_HW_SPI3_SCK     (pin_B3)  // PB3,PC10
#define MICROPY_HW_SPI3_MISO    (pin_B4)  // PB4,PC11
#define MICROPY_HW_SPI3_MOSI    (pin_B5)  // PB5,PC12

// CAN buses
#define MICROPY_HW_CAN1_TX      (pin_A12)  // PB9,PD1,PA12  //USB D+
#define MICROPY_HW_CAN1_RX      (pin_A11)  // PB8,PD0,PA11  //USB D-
#define MICROPY_HW_CAN2_TX      (pin_B13) // PB13,PB6 //I2S CLK
#define MICROPY_HW_CAN2_RX      (pin_B12) // PB12,PB5 //I2S LRCKS

// DAC
// DAC_OUT1 PA4
// DAC_OUT2 PA5

// USRSW is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_A0)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLDOWN)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// KEYS is pulled high. Pressing the button makes the input go low.
#define MICROPY_HW_KEY1       (pin_E4)
#define MICROPY_HW_KEY2       (pin_E3)
#define MICROPY_HW_KEY3       (pin_E2)
#define MICROPY_HW_KEYS_PULL       (GPIO_PULLUP)
#define MICROPY_HW_KEYS_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_KEYS_PRESSED    (0)

// LEDs
#define MICROPY_HW_LED1         (pin_F9) // Red
#define MICROPY_HW_LED2         (pin_F10) // Green
#define MICROPY_HW_LED_ON(pin)  (mp_hal_pin_low(pin))
#define MICROPY_HW_LED_OFF(pin) (mp_hal_pin_high(pin))

// If using external SPI flash
#if !MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE

// The board does not have onboard SPI flash. You need to add an external one.
// #define MICROPY_HW_SPIFLASH_SIZE_BITS (4 * 1024 * 1024) // W25X40 - 4 Mbit (512 KByte)
// #define MICROPY_HW_SPIFLASH_SIZE_BITS (32 * 1024 * 1024) // W25Q32 - 32 Mbit (4 MByte)
// #define MICROPY_HW_SPIFLASH_SIZE_BITS (64 * 1024 * 1024) // W25Q64 - 64 Mbit (8 MByte)
#define MICROPY_HW_SPIFLASH_SIZE_BITS (128 * 1024 * 1024) // W25Q128 - 128 Mbit (16 MByte)

#define MICROPY_HW_SPIFLASH_CS      (pin_B14) // also in board_init.c
#define MICROPY_HW_SPIFLASH_SCK     (pin_B3)
#define MICROPY_HW_SPIFLASH_MISO    (pin_B4)
#define MICROPY_HW_SPIFLASH_MOSI    (pin_B5)

#define MICROPY_BOARD_EARLY_INIT    ALIENTEK_STM32_F407ZG_board_early_init
void ALIENTEK_STM32_F407ZG_board_early_init(void);

extern const struct _mp_spiflash_config_t spiflash_config;
extern struct _spi_bdev_t spi_bdev;
#define MICROPY_HW_SPIFLASH_ENABLE_CACHE (1)
#define MICROPY_HW_BDEV_IOCTL(op, arg) ( \
    (op) == BDEV_IOCTL_NUM_BLOCKS ? (MICROPY_HW_SPIFLASH_SIZE_BITS / 8 / FLASH_BLOCK_SIZE) : \
    (op) == BDEV_IOCTL_INIT ? spi_bdev_ioctl(&spi_bdev, (op), (uint32_t)&spiflash_config) : \
    spi_bdev_ioctl(&spi_bdev, (op), (arg)) \
    )
#define MICROPY_HW_BDEV_READBLOCKS(dest, bl, n) spi_bdev_readblocks(&spi_bdev, (dest), (bl), (n))
#define MICROPY_HW_BDEV_WRITEBLOCKS(src, bl, n) spi_bdev_writeblocks(&spi_bdev, (src), (bl), (n))

#endif

// SD card detect switch
// #define MICROPY_HW_SDCARD_DETECT_PIN        (pin_F10)
// #define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
// #define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)
// 1      - PC10 - DAT2/RES
// 2      - PC11 - CD/DAT3/CS
// 3      - PD2  - CMD/DI
// 4      - VCC  - VDD
// 5      - PC12 - CLK/SCLK
// 6      - GND  - VSS
// 7      - PC8  - DAT0/D0
// 8      - PC9  - DAT1/RES
// 9  SW2 - GND
// 10 SW1 - PF10

// USB config
#define MICROPY_HW_USB_FS (1)
// #define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
// #define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

// Ethernet via RMII
// #define MICROPY_HW_ETH_MDC          (pin_C1)
// #define MICROPY_HW_ETH_MDIO         (pin_A2)
// #define MICROPY_HW_ETH_RMII_REF_CLK (pin_A1)
// #define MICROPY_HW_ETH_RMII_CRS_DV  (pin_A7)
// #define MICROPY_HW_ETH_RMII_RXD0    (pin_C4)
// #define MICROPY_HW_ETH_RMII_RXD1    (pin_C5)
// #define MICROPY_HW_ETH_RMII_TX_EN   (pin_B11)
// #define MICROPY_HW_ETH_RMII_TXD0    (pin_B12)
// #define MICROPY_HW_ETH_RMII_TXD1    (pin_B13)
