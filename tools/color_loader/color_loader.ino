// Simple sketch to write
// a list of colors in the EEPROM
// The list is generated in Python
#include <EEPROM.h>

#define COLOR_HUES 85
#define COLOR_SATS 4

uint8_t colors[COLOR_HUES*COLOR_SATS][3] = {{255, 127, 127}, {255, 85, 85}, {255, 42, 42}, {255, 0, 0}, {255, 136, 127}, {255, 97, 85}, {255, 57, 42}, {255, 17, 0}, {255, 145, 127}, {255, 109, 85}, {255, 72, 42}, {255, 35, 0}, {255, 154, 127}, {255, 121, 85}, {255, 87, 42}, {255, 54, 0}, {255, 163, 127}, {255, 133, 85}, {255, 102, 42}, {255, 72, 0}, {255, 172, 127}, {255, 145, 85}, {255, 117, 42}, {255, 89, 0}, {255, 181, 127}, {255, 157, 85}, {255, 132, 42}, {255, 108, 0}, {255, 190, 127}, {255, 169, 85}, {255, 147, 42}, {255, 126, 0}, {255, 199, 127}, {255, 181, 85}, {255, 162, 42}, {255, 144, 0}, {255, 208, 127}, {255, 193, 85}, {255, 177, 42}, {255, 162, 0}, {255, 217, 127}, {255, 205, 85}, {255, 192, 42}, {255, 179, 0}, {255, 226, 127}, {255, 217, 85}, {255, 207, 42}, {255, 198, 0}, {255, 235, 127}, {255, 229, 85}, {255, 222, 42}, {255, 216, 0}, {255, 244, 127}, {255, 241, 85}, {255, 237, 42}, {255, 234, 0}, {255, 253, 127}, {255, 253, 85}, {255, 252, 42}, {255, 252, 0}, {247, 255, 127}, {245, 255, 85}, {242, 255, 42}, {240, 255, 0}, {238, 255, 127}, {233, 255, 85}, {227, 255, 42}, {222, 255, 0}, {229, 255, 127}, {220, 255, 85}, {212, 255, 42}, {203, 255, 0}, {220, 255, 127}, {209, 255, 85}, {197, 255, 42}, {186, 255, 0}, {211, 255, 127}, {196, 255, 85}, {182, 255, 42}, {167, 255, 0}, {202, 255, 127}, {185, 255, 85}, {167, 255, 42}, {150, 255, 0}, {193, 255, 127}, {173, 255, 85}, {152, 255, 42}, {131, 255, 0}, {184, 255, 127}, {160, 255, 85}, {137, 255, 42}, {113, 255, 0}, {175, 255, 127}, {149, 255, 85}, {122, 255, 42}, {96, 255, 0}, {166, 255, 127}, {137, 255, 85}, {107, 255, 42}, {78, 255, 0}, {157, 255, 127}, {125, 255, 85}, {92, 255, 42}, {60, 255, 0}, {148, 255, 127}, {113, 255, 85}, {77, 255, 42}, {41, 255, 0}, {139, 255, 127}, {101, 255, 85}, {62, 255, 42}, {24, 255, 0}, {130, 255, 127}, {89, 255, 85}, {47, 255, 42}, {5, 255, 0}, {127, 255, 133}, {85, 255, 92}, {42, 255, 52}, {0, 255, 11}, {127, 255, 142}, {85, 255, 105}, {42, 255, 67}, {0, 255, 30}, {127, 255, 151}, {85, 255, 116}, {42, 255, 82}, {0, 255, 47}, {127, 255, 160}, {85, 255, 129}, {42, 255, 97}, {0, 255, 65}, {127, 255, 169}, {85, 255, 141}, {42, 255, 112}, {0, 255, 84}, {127, 255, 178}, {85, 255, 153}, {42, 255, 127}, {0, 255, 102}, {127, 255, 187}, {85, 255, 165}, {42, 255, 142}, {0, 255, 120}, {127, 255, 196}, {85, 255, 177}, {42, 255, 157}, {0, 255, 137}, {127, 255, 205}, {85, 255, 189}, {42, 255, 172}, {0, 255, 156}, {127, 255, 214}, {85, 255, 201}, {42, 255, 187}, {0, 255, 174}, {127, 255, 223}, {85, 255, 213}, {42, 255, 202}, {0, 255, 192}, {127, 255, 232}, {85, 255, 224}, {42, 255, 217}, {0, 255, 209}, {127, 255, 241}, {85, 255, 236}, {42, 255, 232}, {0, 255, 227}, {127, 255, 250}, {85, 255, 249}, {42, 255, 247}, {0, 255, 246}, {127, 250, 255}, {85, 249, 255}, {42, 247, 255}, {0, 246, 255}, {127, 241, 255}, {85, 236, 255}, {42, 232, 255}, {0, 227, 255}, {127, 232, 255}, {85, 224, 255}, {42, 217, 255}, {0, 209, 255}, {127, 223, 255}, {85, 213, 255}, {42, 202, 255}, {0, 192, 255}, {127, 214, 255}, {85, 200, 255}, {42, 187, 255}, {0, 173, 255}, {127, 205, 255}, {85, 189, 255}, {42, 172, 255}, {0, 156, 255}, {127, 196, 255}, {85, 177, 255}, {42, 157, 255}, {0, 138, 255}, {127, 187, 255}, {85, 165, 255}, {42, 142, 255}, {0, 120, 255}, {127, 178, 255}, {85, 153, 255}, {42, 127, 255}, {0, 102, 255}, {127, 169, 255}, {85, 140, 255}, {42, 112, 255}, {0, 83, 255}, {127, 160, 255}, {85, 129, 255}, {42, 97, 255}, {0, 65, 255}, {127, 151, 255}, {85, 117, 255}, {42, 82, 255}, {0, 48, 255}, {127, 142, 255}, {85, 104, 255}, {42, 67, 255}, {0, 29, 255}, {127, 133, 255}, {85, 92, 255}, {42, 52, 255}, {0, 11, 255}, {130, 127, 255}, {89, 85, 255}, {47, 42, 255}, {5, 0, 255}, {139, 127, 255}, {100, 85, 255}, {62, 42, 255}, {23, 0, 255}, {148, 127, 255}, {112, 85, 255}, {77, 42, 255}, {41, 0, 255}, {157, 127, 255}, {125, 85, 255}, {92, 42, 255}, {60, 0, 255}, {166, 127, 255}, {136, 85, 255}, {107, 42, 255}, {77, 0, 255}, {175, 127, 255}, {148, 85, 255}, {122, 42, 255}, {95, 0, 255}, {184, 127, 255}, {161, 85, 255}, {137, 42, 255}, {114, 0, 255}, {193, 127, 255}, {173, 85, 255}, {152, 42, 255}, {131, 0, 255}, {202, 127, 255}, {184, 85, 255}, {167, 42, 255}, {149, 0, 255}, {211, 127, 255}, {197, 85, 255}, {182, 42, 255}, {168, 0, 255}, {220, 127, 255}, {209, 85, 255}, {197, 42, 255}, {186, 0, 255}, {229, 127, 255}, {221, 85, 255}, {212, 42, 255}, {204, 0, 255}, {238, 127, 255}, {233, 85, 255}, {227, 42, 255}, {222, 0, 255}, {247, 127, 255}, {245, 85, 255}, {242, 42, 255}, {240, 0, 255}, {255, 127, 253}, {255, 85, 253}, {255, 42, 252}, {255, 0, 252}, {255, 127, 244}, {255, 85, 241}, {255, 42, 237}, {255, 0, 234}, {255, 127, 235}, {255, 85, 229}, {255, 42, 222}, {255, 0, 216}, {255, 127, 226}, {255, 85, 217}, {255, 42, 207}, {255, 0, 197}, {255, 127, 217}, {255, 85, 205}, {255, 42, 192}, {255, 0, 180}, {255, 127, 208}, {255, 85, 192}, {255, 42, 177}, {255, 0, 161}, {255, 127, 199}, {255, 85, 180}, {255, 42, 162}, {255, 0, 143}, {255, 127, 190}, {255, 85, 169}, {255, 42, 147}, {255, 0, 126}, {255, 127, 181}, {255, 85, 157}, {255, 42, 132}, {255, 0, 108}, {255, 127, 172}, {255, 85, 145}, {255, 42, 117}, {255, 0, 90}, {255, 127, 163}, {255, 85, 133}, {255, 42, 102}, {255, 0, 72}, {255, 127, 154}, {255, 85, 121}, {255, 42, 87}, {255, 0, 54}, {255, 127, 145}, {255, 85, 109}, {255, 42, 72}, {255, 0, 36}, {255, 127, 136}, {255, 85, 96}, {255, 42, 57}, {255, 0, 17}};

void setup() {
  for (uint16_t color = 0; color < COLOR_HUES*COLOR_SATS; color++) {
    for (uint8_t comp = 0; comp < 3; comp++) {
      EEPROM.write(color*3 + comp, colors[color][comp]);
    }
  }

}

void loop() {
  // nothing to do
}