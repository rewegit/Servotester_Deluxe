#include <Arduino.h>
// der RC Modellbauer Logo
#define Logo_width 128
#define Logo_height 64
static unsigned char Logo_bits[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xDC, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1C, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x00, 0x00, 
  0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1C, 0x38, 0x3E, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1C, 0xB8, 0xFF, 0xDC, 0xE0, 0x7F, 0xF0, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0xB8, 0xF7, 0xFC, 
  0xE0, 0xF0, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0C, 0xF8, 0xC3, 0xFD, 0xE0, 0xE0, 0x7C, 0x1F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0E, 0xF8, 0xDF, 0x3D, 0xE0, 0xE0, 0x1E, 0x1C, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0xFC, 0xFF, 0x1D, 
  0xE0, 0xE0, 0x0F, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0E, 0xDE, 0xFF, 0x0F, 0xE0, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFE, 0xCF, 0x01, 0x0E, 0xE0, 0x7F, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xC7, 0xE3, 0x0E, 
  0xE0, 0x3F, 0x07, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0x81, 0xFF, 0x0E, 0x70, 0x3C, 0x07, 0x00, 0xF0, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x0E, 0x70, 0x38, 0x0F, 0x80, 
  0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 
  0x70, 0x78, 0x0E, 0x8C, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x3E, 0xDE, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x70, 0xFC, 0xCF, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x0F, 0x00, 
  0x00, 0x00, 0xF8, 0xC7, 0xF3, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF0, 0x7F, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x7E, 0x00, 0x00, 
  0x00, 0x00, 0x3C, 0x00, 0xF0, 0xFE, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x78, 0x00, 0x00, 0x00, 0x7C, 0x7F, 0x00, 0xF0, 0xFF, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0xFC, 0xFF, 0x79, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 
  0xE0, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x77, 0x00, 0x00, 
  0x00, 0xFF, 0xFF, 0xF8, 0xDF, 0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0xFF, 0x5F, 0x00, 0x00, 0x00, 0xF7, 0x7F, 0xFE, 0x3F, 0xFE, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0x7E, 0x86, 0x07, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 
  0xFF, 0xFF, 0x03, 0x00, 0x00, 0xE0, 0xE7, 0x03, 0xF0, 0xFF, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0xE0, 0xFF, 0xC1, 
  0x73, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0xE0, 0xFE, 0xF1, 0x77, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0x8F, 0xFB, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0x8F, 0x3B, 
  0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7F, 0xFE, 0x7F, 0x00, 0x00, 
  0x00, 0xC0, 0x87, 0xBF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF7, 
  0x7F, 0x3F, 0x00, 0x00, 0x00, 0x80, 0x07, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0xEF, 0xFB, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
  0xEF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xE7, 0x1D, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0xFF, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xFE, 
  0xFF, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7C, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x80, 0x03, 
  0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x78, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xEF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xDE, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x0E, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0x3F, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 
  0x00, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0x00, 0x30, 0xCE, 0x01, 0x00, 0x00, 
  0x00, 0xE0, 0xE3, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 
  0xCE, 0x01, 0x00, 0x00, 0xE0, 0xF8, 0xC7, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x00, 0x70, 0x8E, 0x01, 0xE0, 0xC7, 0xE1, 0xFC, 0xCF, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x70, 0x8E, 0xFD, 0xF8, 0xCF, 
  0xE1, 0x1C, 0xDE, 0x01, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x70, 
  0x8E, 0xFF, 0xF9, 0xCF, 0xE1, 0x1C, 0xDC, 0x01, 0x80, 0x03, 0x3C, 0x00, 
  0x00, 0x70, 0xFC, 0x71, 0x8E, 0xFF, 0x1B, 0xDE, 0xC1, 0xFE, 0xDF, 0x01, 
  0x80, 0x03, 0x3C, 0x00, 0xC0, 0x7F, 0xFE, 0x73, 0x8E, 0x87, 0xC3, 0xDF, 
  0xC1, 0xFE, 0xDF, 0x01, 0x80, 0x07, 0x3E, 0xFC, 0xE1, 0x7F, 0xDE, 0x77, 
  0x8E, 0x83, 0xF3, 0xDF, 0xC1, 0x3F, 0xC0, 0x01, 0x80, 0x0F, 0x3E, 0xFE, 
  0xF3, 0x7D, 0x07, 0x77, 0x8C, 0x03, 0xFF, 0xDF, 0xE1, 0x1D, 0xDC, 0x01, 
  0x80, 0x1F, 0x3F, 0xDF, 0x77, 0x78, 0xC7, 0x7F, 0x9C, 0x03, 0x3F, 0xDC, 
  0xE3, 0x7D, 0xDF, 0x01, 0x80, 0x1F, 0x3F, 0x87, 0x7F, 0x70, 0xFF, 0x7F, 
  0x9C, 0x83, 0x3F, 0x9E, 0xFF, 0xF9, 0xCF, 0x01, 0x80, 0x3F, 0x77, 0x07, 
  0x3F, 0x70, 0xFF, 0x7F, 0x9C, 0xC7, 0x7B, 0xBF, 0xFF, 0xF1, 0x07, 0x00, 
  0x80, 0xFB, 0x73, 0x03, 0x3F, 0x70, 0x07, 0x77, 0x9C, 0xFF, 0xFB, 0x3F, 
  0xBF, 0x01, 0x00, 0x00, 0x80, 0xF3, 0x73, 0x03, 0x77, 0x70, 0x0F, 0xE7, 
  0xFF, 0xFF, 0xF1, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF3, 0x71, 0x07, 
  0xF7, 0x78, 0xFE, 0xE7, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0xE3, 0x71, 0x8F, 0xE7, 0xFF, 0xFC, 0xE3, 0x3B, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0xC3, 0x70, 0xFE, 0xE3, 0xFF, 0xF0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x70, 0xFE, 
  0x83, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0x70, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00,
};
