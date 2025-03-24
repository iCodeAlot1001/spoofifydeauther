#define USER_SETUP_INFO "RP2040_ST7735"

#define ST7735_DRIVER      // Define ST7735 driver
#define TFT_WIDTH  128     // ST7735 128x160 resolution
#define TFT_HEIGHT 160

#define ST7735_GREENTAB2   // Common variant for 1.8" ST7735; try others (e.g., REDTAB, BLACKTAB) if colors are off

#define TFT_MOSI 16        // SPI MOSI
#define TFT_SCLK 11        // SPI SCK
#define TFT_CS   17        // Chip Select
#define TFT_DC   14        // Data/Command
#define TFT_RST  15        // Reset

#define SPI_FREQUENCY  40000000  // 40 MHz, adjust if unstable
#define LOAD_GFXFF             // Enable FreeFonts (optional)
#define SMOOTH_FONT