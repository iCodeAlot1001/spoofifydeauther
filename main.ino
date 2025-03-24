#include <tft_eSPI.h>

tft_eSPI tft = tft.tft_eSPI();

void setup() {
    stdio_init_all();       // Initialize Pico USB serial (optional for debugging)
    tft.init();             // Initialize the display
    tft.setRotation(1);     // Landscape mode (0-3 for different orientations)
    tft.fillScreen(TFT_RED); // Fill screen with red (RGB565: 0xF800)
}

void loop() {
    // Nothing needed here for a static display
    sleep_ms(1000);         // Keep the program running
}

int main() {
    setup();
    while (true) {
        loop();
    }
    return 0;
}

