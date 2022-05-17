#ifndef webfiles_h
#define webfiles_h

// comment that out if you want to save program memory and know how to upload
// the web files to the SPIFFS manually
#define USE_PROGMEM_WEB_FILES

#ifdef USE_PROGMEM_WEB_FILES

const char fontawesomewebfontsvg[] PROGMEM = {
    0x1F, 0x8B, 0x08, 0x08, 0xDC, 0x4D, 0x1B, 0x5E, 0x00, 0x03, 0x66, 0x6F,
    0x6E, 0x74, 0x61, 0x77, 0x65, 0x73, 0x6F, 0x6D, 0x65, 0x2D, 0x77, 0x65,
    0x62, 0x66, 0x6F, 0x6E, 0x74, 0x2E, 0x73, 0x76, 0x67, 0x00, 0x75, 0x54,
    0xDB, 0x6E, 0xD3, 0x40, 0x10, 0x7D, 0xEF, 0x57, 0x0C, 0x46, 0xE2, 0x6D,
    0xED, 0xBD, 0x78, 0xD7, 0x36, 0x24, 0xAD, 0x44, 0x5B, 0x55, 0x48, 0x04,
    0x2A, 0x51, 0x40, 0x3C, 0x9A, 0xD8, 0x89, 0x23, 0x25, 0xCE, 0xC5, 0x5B,
    0xA7, 0xE4, 0xEB, 0x39, 0xB3, 0x4E, 0x43, 0x29, 0xF4, 0xC1, 0xDE, 0x99,
    0x9D, 0x33, 0x73, 0xCE, 0xCE, 0xAC, 0x3D, 0xBA, 0x78, 0x58, 0x2D, 0xA9,
    0xAF, 0x77, 0xDD, 0x62, 0xDD, 0x8E, 0x23, 0x15, 0xCB, 0x88, 0x3A, 0x5F,
    0xB6, 0x55, 0xB9, 0x5C, 0xB7, 0xF5, 0x38, 0x6A, 0xD7, 0xD1, 0xC5, 0xF9,
    0xD9, 0xE8, 0xD5, 0xD5, 0xE7, 0xCB, 0xBB, 0x1F, 0xB7, 0xD7, 0xD4, 0xF5,
    0x73, 0xBA, 0xFD, 0xFA, 0xFE, 0xE3, 0x87, 0x4B, 0x8A, 0x44, 0x92, 0x7C,
    0x37, 0x97, 0x49, 0x72, 0x75, 0x77, 0x45, 0x5F, 0xBE, 0xDD, 0x90, 0x8A,
    0x55, 0x92, 0x5C, 0x7F, 0x8A, 0x28, 0x6A, 0xBC, 0xDF, 0xBC, 0x4D, 0x92,
    0xFD, 0x7E, 0x1F, 0xEF, 0x4D, 0xBC, 0xDE, 0xCD, 0x93, 0x9B, 0x5D, 0xB9,
    0x69, 0x16, 0xD3, 0x2E, 0x01, 0x30, 0x61, 0x20, 0x92, 0x12, 0x14, 0x53,
    0x2A, 0xAE, 0x7C, 0x15, 0x11, 0x38, 0xB8, 0x34, 0xC4, 0xB4, 0xDD, 0xF8,
    0x3F, 0xF9, 0x5A, 0x4A, 0xC9, 0xF8, 0x08, 0xC0, 0x55, 0xED, 0xCB, 0xAA,
    0xF4, 0xE5, 0xF9, 0x28, 0x39, 0x99, 0x67, 0xA3, 0xAA, 0x9E, 0x75, 0x58,
    0x66, 0xEB, 0xD6, 0xD3, 0xA2, 0x1A, 0x47, 0x6C, 0x94, 0xFB, 0xBA, 0x5B,
    0xAF, 0xEA, 0x5D, 0x3D, 0xBF, 0x5F, 0x96, 0xBB, 0x88, 0x9A, 0xF5, 0x6E,
    0x71, 0x10, 0x65, 0xD5, 0x8B, 0x07, 0x9C, 0xD5, 0x1A, 0x17, 0x88, 0x19,
    0x29, 0x66, 0xE5, 0xB4, 0xA6, 0xFB, 0x76, 0xE1, 0x3B, 0xB1, 0xA9, 0x77,
    0xA2, 0x5E, 0x01, 0x90, 0x15, 0x3A, 0xA2, 0xB2, 0x9B, 0xD6, 0xAD, 0x7F,
    0x84, 0x57, 0xF5, 0xD1, 0x15, 0xDA, 0xC2, 0x4D, 0x58, 0xCE, 0xA2, 0xEB,
    0x16, 0xED, 0x5C, 0xCC, 0x97, 0xBF, 0x36, 0xCD, 0xDF, 0x14, 0x69, 0x9A,
    0x0F, 0x98, 0x21, 0x86, 0xF2, 0xD3, 0x75, 0x85, 0xAE, 0xBE, 0x79, 0xFD,
    0x30, 0x93, 0xDA, 0xBC, 0x7B, 0xAE, 0x48, 0x59, 0x10, 0x42, 0xFB, 0xC4,
    0x68, 0x49, 0x99, 0xCB, 0x1B, 0xAB, 0x74, 0xAF, 0x0A, 0xBD, 0x95, 0xA4,
    0xA4, 0x23, 0x91, 0x59, 0x52, 0xB9, 0xF2, 0x02, 0x2F, 0xCA, 0xEC, 0xB0,
    0x0A, 0x36, 0x10, 0x60, 0xA7, 0x17, 0x00, 0x1F, 0x26, 0x5C, 0x87, 0x5C,
    0xA6, 0x7B, 0x61, 0x33, 0x87, 0x5C, 0x91, 0xE2, 0xD1, 0x39, 0x09, 0x97,
    0x7B, 0x3C, 0x6C, 0x37, 0xA2, 0x70, 0x72, 0xCB, 0x01, 0xC9, 0xDB, 0xA4,
    0x11, 0x01, 0xC2, 0xE5, 0xFD, 0x90, 0x82, 0x40, 0x70, 0x7D, 0x88, 0x35,
    0xE6, 0x24, 0x23, 0x4F, 0x49, 0x19, 0x4D, 0x46, 0x39, 0x8F, 0x87, 0xED,
    0xB0, 0x0A, 0x36, 0x38, 0x20, 0xE0, 0x05, 0x19, 0xC8, 0xD9, 0x86, 0xF2,
    0x03, 0xA1, 0x1F, 0xF8, 0x0F, 0x2F, 0xF7, 0xA3, 0x28, 0xFF, 0xE9, 0x87,
    0xD4, 0xE9, 0xD0, 0x8F, 0xC2, 0x16, 0x84, 0x43, 0xA5, 0xBD, 0xD0, 0x2E,
    0x6D, 0x84, 0xB2, 0xD9, 0x56, 0xE4, 0x8E, 0xB5, 0x2B, 0x26, 0x37, 0xCE,
    0x0B, 0xC3, 0x8E, 0xCC, 0xC1, 0x9D, 0x17, 0x8D, 0x2E, 0xCC, 0x52, 0x98,
    0x02, 0xC4, 0x85, 0x6B, 0x30, 0x2A, 0x24, 0x66, 0xB6, 0x68, 0x00, 0x72,
    0x7D, 0x30, 0xB4, 0xB5, 0x3D, 0xC7, 0xC2, 0xAA, 0xF2, 0x70, 0x32, 0x9C,
    0x46, 0xA6, 0x38, 0x6D, 0x1E, 0x5B, 0xAF, 0xB3, 0x0C, 0x9E, 0x8E, 0xED,
    0x56, 0xA5, 0x19, 0x78, 0x34, 0xCB, 0x57, 0xFA, 0x65, 0xF9, 0x4A, 0xFE,
    0x7C, 0x2E, 0x1F, 0x03, 0x1C, 0xD4, 0xA7, 0x0E, 0x4D, 0xD3, 0x4C, 0x62,
    0x0C, 0x24, 0x99, 0xD8, 0x92, 0x75, 0x20, 0x11, 0xFC, 0x26, 0xF6, 0x8F,
    0xA6, 0x18, 0xEC, 0x80, 0x08, 0x3B, 0xFE, 0x89, 0xF9, 0x04, 0xF1, 0x27,
    0xEF, 0x54, 0xEC, 0x30, 0xC1, 0xC0, 0x59, 0x7C, 0x9F, 0xC9, 0x94, 0x8F,
    0x03, 0xA6, 0x82, 0x51, 0x3A, 0x54, 0xC4, 0x9B, 0xE0, 0x36, 0x02, 0x37,
    0x6A, 0x8B, 0x61, 0x71, 0xEB, 0xC2, 0x26, 0x83, 0x7C, 0x40, 0x06, 0x1F,
    0x7D, 0x0A, 0xE9, 0x0C, 0x39, 0x6D, 0xFA, 0x13, 0x92, 0x2F, 0xE4, 0x36,
    0x64, 0x3F, 0x56, 0xF4, 0x8F, 0x24, 0x87, 0x49, 0x9A, 0x83, 0x56, 0x19,
    0x47, 0x4C, 0xCF, 0x57, 0x02, 0x0D, 0x45, 0xF7, 0x15, 0x5F, 0x34, 0x35,
    0x0C, 0x2B, 0xEC, 0xFA, 0x61, 0x69, 0x38, 0x10, 0xF6, 0x03, 0xF0, 0x30,
    0x41, 0xBF, 0x88, 0xAF, 0x2E, 0x46, 0x88, 0xC1, 0xB3, 0x08, 0xCB, 0xF7,
    0x09, 0x8D, 0x2F, 0x24, 0x24, 0x4A, 0xB6, 0x8F, 0x07, 0x40, 0x40, 0xF2,
    0x36, 0x19, 0xDC, 0x5B, 0x20, 0x0A, 0xD9, 0x1F, 0x73, 0x10, 0x09, 0xBE,
    0x0F, 0xC1, 0xA0, 0x37, 0x80, 0x87, 0x74, 0x3F, 0x54, 0x3B, 0x8E, 0x31,
    0xE1, 0x2F, 0x9F, 0xD7, 0xF0, 0xEF, 0x18, 0xF1, 0xFF, 0xE5, 0x9C, 0x7E,
    0x03, 0x51, 0x15, 0x1E, 0x93, 0x12, 0x05, 0x00, 0x00,
};

const char wifihtml[] PROGMEM = { 
    0x1F, 0x8B, 0x08, 0x08, 0x67, 0xDF, 0x9C, 0x5F, 0x02, 0xFF, 0x77, 0x69,
    0x66, 0x69, 0x2D, 0x65, 0x6E, 0x2E, 0x68, 0x74, 0x6D, 0x6C, 0x00, 0x6D,
    0x53, 0x4D, 0x8F, 0xD3, 0x40, 0x0C, 0xFD, 0x2B, 0x56, 0xB8, 0x80, 0xB4,
    0x69, 0xA1, 0xAD, 0xD0, 0x02, 0x9D, 0x4A, 0x1C, 0x16, 0x89, 0x1B, 0x12,
    0x20, 0xCE, 0xEE, 0x8C, 0xDB, 0x78, 0x77, 0x32, 0x13, 0x66, 0x9C, 0x64,
    0xFB, 0xEF, 0xF1, 0x24, 0xDD, 0x8F, 0xEE, 0x72, 0x48, 0x22, 0xDB, 0xCF,
    0xCF, 0xCF, 0x1F, 0xD9, 0xB6, 0x24, 0x08, 0xB6, 0xC1, 0x94, 0x49, 0x4C,
    0x2F, 0x87, 0xFA, 0x1A, 0x76, 0xB0, 0x9D, 0xBC, 0x01, 0x5B, 0x32, 0x03,
    0xD3, 0xD8, 0xC5, 0x24, 0x60, 0x63, 0x10, 0x0A, 0x62, 0xAA, 0x91, 0x9D,
    0x34, 0xC6, 0xD1, 0xC0, 0x96, 0xEA, 0xC9, 0xB8, 0x02, 0x0E, 0x2C, 0x8C,
    0xBE, 0xCE, 0x16, 0x3D, 0x99, 0xF7, 0x8B, 0xEB, 0x2B, 0x68, 0xD5, 0xD7,
    0xAA, 0xAB, 0xE7, 0xEA, 0x82, 0xD0, 0x51, 0xB6, 0x89, 0x3B, 0xE1, 0x18,
    0x1E, 0x39, 0x57, 0x9B, 0xCD, 0xB0, 0x5A, 0x6F, 0x2E, 0x2B, 0x4B, 0x43,
    0x2D, 0xD5, 0x36, 0xFA, 0x98, 0x9E, 0x8A, 0xBF, 0x59, 0x7F, 0x5C, 0x7F,
    0x5A, 0xDF, 0x54, 0xB0, 0x54, 0xAC, 0xB0, 0x78, 0xDA, 0x9D, 0x93, 0xB7,
    0xCB, 0xD9, 0x84, 0xAD, 0xE7, 0x70, 0x07, 0x89, 0xBC, 0xC9, 0x72, 0xF2,
    0x94, 0x1B, 0x22, 0x81, 0x26, 0xD1, 0x61, 0xB6, 0x17, 0x36, 0x67, 0x05,
    0xCD, 0x22, 0x20, 0x27, 0x6B, 0xAA, 0xDB, 0xBC, 0xCC, 0x2C, 0xB4, 0xB8,
    0xCD, 0xD5, 0x6E, 0xBB, 0x9C, 0x23, 0xAF, 0x21, 0x36, 0x91, 0x53, 0x0D,
    0xDA, 0xE6, 0x4B, 0xE0, 0x3E, 0xBA, 0x13, 0xC4, 0xE0, 0x23, 0x3A, 0x53,
    0x95, 0xF7, 0xDB, 0x77, 0xA5, 0x67, 0xC7, 0x03, 0x58, 0x8F, 0x39, 0x9B,
    0x22, 0x1F, 0x39, 0x50, 0xBA, 0xF0, 0xA6, 0x38, 0xBE, 0x40, 0xF9, 0xFA,
    0xC3, 0xEA, 0xEC, 0x62, 0x67, 0x28, 0x25, 0x6D, 0xFD, 0x1C, 0x6C, 0xD8,
    0x11, 0x68, 0x51, 0x8D, 0x95, 0x8A, 0x85, 0xA9, 0x7B, 0xC8, 0x53, 0x55,
    0xA4, 0xE2, 0xC0, 0xA1, 0x60, 0x2D, 0x09, 0x43, 0xF6, 0x28, 0x3A, 0x69,
    0xCE, 0x0A, 0xE0, 0xB6, 0x94, 0xFD, 0xC6, 0xA9, 0x1D, 0x31, 0x11, 0xFC,
    0xEE, 0x8E, 0x09, 0x1D, 0xCD, 0x0C, 0xE5, 0xF5, 0xAB, 0xD1, 0x5C, 0xE0,
    0x0C, 0x21, 0xC2, 0xF7, 0x42, 0x14, 0x68, 0x5A, 0x76, 0x20, 0x5B, 0x76,
    0x34, 0x61, 0xBE, 0x42, 0xA0, 0x11, 0x06, 0x4A, 0xB9, 0x6C, 0xAD, 0xC1,
    0x0C, 0x7B, 0xA2, 0x00, 0x8E, 0x44, 0x41, 0x5A, 0x18, 0x83, 0x3E, 0x23,
    0xEA, 0x0D, 0x84, 0xA3, 0xDE, 0x42, 0x16, 0xF4, 0xAA, 0x40, 0xB1, 0x8B,
    0x29, 0xFD, 0x87, 0x27, 0xCC, 0x54, 0x48, 0x0F, 0x2A, 0x03, 0x74, 0xB1,
    0xD0, 0xA9, 0xF0, 0x31, 0x26, 0x07, 0x12, 0xA1, 0x4B, 0xD1, 0x92, 0xB2,
    0x8C, 0x2C, 0xCD, 0x14, 0x7C, 0xCD, 0xB0, 0x5D, 0x76, 0x17, 0xA3, 0xDA,
    0xC7, 0xFB, 0x72, 0x2C, 0xCD, 0xAA, 0xCC, 0x29, 0x67, 0x76, 0x00, 0xD3,
    0x72, 0x4D, 0x25, 0x74, 0x2F, 0x35, 0x7A, 0x3E, 0x86, 0xCF, 0x30, 0x0F,
    0xE6, 0x4B, 0xD9, 0x55, 0x53, 0xE6, 0xCA, 0xA1, 0xEB, 0x05, 0xE4, 0xD4,
    0x91, 0xA1, 0x16, 0xD9, 0x43, 0xC9, 0x9E, 0x94, 0xF0, 0x81, 0x61, 0xBE,
    0xBA, 0x27, 0x33, 0xD1, 0xDF, 0x9E, 0xCB, 0x58, 0x3B, 0x8F, 0x96, 0x9A,
    0xE8, 0x1D, 0x25, 0x53, 0xDD, 0x14, 0xCA, 0x47, 0xF9, 0xF3, 0x1D, 0x3E,
    0xE3, 0xCD, 0xFD, 0xBE, 0x65, 0x01, 0xBD, 0x06, 0xEB, 0xD9, 0xDE, 0x99,
    0x2A, 0xE3, 0x40, 0x7F, 0x94, 0x4F, 0x4F, 0x02, 0x06, 0xF4, 0xBD, 0x4A,
    0xFC, 0x29, 0xA8, 0xFF, 0xD3, 0x79, 0x11, 0xD5, 0x43, 0x47, 0xBD, 0x88,
    0xCE, 0xB6, 0xB4, 0x3A, 0xAF, 0xF8, 0x3F, 0x9F, 0x7F, 0x0F, 0x9E, 0x7D,
    0xAD, 0xAD, 0x03, 0x00, 0x00,
};

const char stylecss[] PROGMEM = {
    0x1F, 0x8B, 0x08, 0x08, 0x42, 0x91, 0xA1, 0x5E, 0x02, 0xFF, 0x73, 0x74,
    0x79, 0x6C, 0x65, 0x2E, 0x63, 0x73, 0x73, 0x00, 0xB5, 0x57, 0xDD, 0x8F,
    0xA3, 0x36, 0x10, 0xFF, 0x57, 0xE8, 0x46, 0x27, 0xED, 0x4A, 0x0B, 0x0A,
    0x1F, 0x21, 0x09, 0xD1, 0x49, 0x77, 0xD7, 0xF6, 0xA4, 0xBE, 0xF4, 0xA9,
    0x6F, 0xA7, 0x6D, 0x65, 0xC0, 0x24, 0x56, 0x00, 0x23, 0xE3, 0xEC, 0x26,
    0x87, 0xE8, 0xDF, 0xDE, 0xF1, 0x17, 0x18, 0xC8, 0xAA, 0x0F, 0xED, 0x29,
    0xDA, 0x35, 0x1E, 0xDB, 0xF3, 0xE5, 0x99, 0xDF, 0x8C, 0x3F, 0x65, 0x27,
    0xC4, 0x5A, 0xCC, 0x9D, 0x0B, 0x2F, 0xDC, 0xDD, 0x21, 0xA5, 0xF9, 0xAD,
    0x4B, 0x51, 0x76, 0x3E, 0x32, 0x7A, 0xA9, 0xF3, 0x64, 0x15, 0xC6, 0xE1,
    0x3E, 0xC4, 0x87, 0x8C, 0x96, 0x94, 0x25, 0xAB, 0xB4, 0x10, 0xBF, 0x43,
    0x41, 0x6B, 0xEE, 0x16, 0xA8, 0x22, 0xE5, 0x2D, 0x69, 0x51, 0xDD, 0xBA,
    0x2D, 0x66, 0xA4, 0x38, 0x54, 0x88, 0x1D, 0x49, 0x9D, 0xAC, 0xFB, 0x93,
    0xDF, 0xC9, 0x2D, 0x2D, 0xF9, 0x8E, 0x13, 0xDF, 0xDB, 0x32, 0x5C, 0xE9,
    0x45, 0x97, 0xD3, 0x26, 0xF1, 0xC5, 0xDC, 0x16, 0x12, 0x14, 0xA1, 0x1F,
    0xC6, 0x13, 0x21, 0xE9, 0xA1, 0x41, 0x79, 0x4E, 0xEA, 0x63, 0xE2, 0x05,
    0xB8, 0x72, 0x7C, 0x71, 0x82, 0xB2, 0x1C, 0x33, 0x97, 0xA1, 0x9C, 0x5C,
    0xDA, 0x24, 0x6C, 0xAE, 0x86, 0x52, 0xE2, 0x82, 0x27, 0x2D, 0x2D, 0x49,
    0xEE, 0xAC, 0xA2, 0xFD, 0x36, 0x42, 0x7B, 0x67, 0x03, 0xAB, 0x52, 0x85,
    0x37, 0x4C, 0x8E, 0x27, 0x9E, 0xF8, 0x6B, 0xD0, 0x2A, 0x98, 0x68, 0xE5,
    0xFF, 0x37, 0xAD, 0x22, 0xA1, 0x95, 0xB7, 0xFB, 0x1F, 0xF4, 0xF2, 0x52,
    0x7A, 0xED, 0x4E, 0xC3, 0xFC, 0xC3, 0xE1, 0x8D, 0xE4, 0xFC, 0xA4, 0x3E,
    0x8D, 0x38, 0x38, 0xE7, 0xC0, 0xCE, 0x92, 0x66, 0xE7, 0xEE, 0x15, 0x33,
    0x4E, 0x32, 0x54, 0xBA, 0xA8, 0x24, 0xC7, 0x3A, 0xA9, 0x48, 0x9E, 0x97,
    0x78, 0x70, 0xBE, 0xE3, 0xAF, 0x9B, 0xAB, 0xE4, 0xE9, 0x90, 0xBA, 0xB9,
    0xF0, 0x2E, 0x27, 0x6D, 0x53, 0xA2, 0x5B, 0x92, 0x8A, 0xC3, 0x9A, 0x77,
    0xB8, 0x86, 0x4D, 0xE6, 0x48, 0x00, 0xDF, 0x0E, 0xBA, 0x70, 0x3A, 0x48,
    0x13, 0x2C, 0x6C, 0x57, 0xB0, 0x63, 0x8A, 0x1E, 0xD7, 0xCF, 0xF2, 0xE7,
    0x45, 0x4F, 0xC6, 0x25, 0x45, 0x51, 0x68, 0x53, 0x13, 0x65, 0x85, 0xE3,
    0xA5, 0x17, 0xCE, 0x69, 0xDD, 0xDD, 0x71, 0xA3, 0xD9, 0x68, 0x1F, 0x1E,
    0xAF, 0x43, 0xE8, 0x60, 0x74, 0x93, 0xDF, 0x7A, 0x57, 0xB0, 0x45, 0x38,
    0x5E, 0x2F, 0x35, 0x9D, 0x1A, 0x95, 0x5D, 0x58, 0x0B, 0xBB, 0x1B, 0x4A,
    0x6A, 0x8E, 0xD9, 0xEC, 0x42, 0x46, 0x7F, 0x78, 0x05, 0xCA, 0x70, 0x4A,
    0xE9, 0xD9, 0xD2, 0xCF, 0xD5, 0x82, 0xA2, 0x20, 0xDE, 0xA6, 0x81, 0xA5,
    0x91, 0x3F, 0xD7, 0xE8, 0x5F, 0x74, 0x78, 0x57, 0xE8, 0x77, 0x54, 0xD2,
    0x3B, 0x02, 0x77, 0xDB, 0x2C, 0xC6, 0xD9, 0x8F, 0x10, 0xD8, 0x9C, 0x68,
    0x8D, 0xEF, 0x5D, 0xC1, 0x0F, 0x90, 0xC5, 0xDF, 0x08, 0x07, 0x97, 0xDF,
    0x73, 0x28, 0x4A, 0xC3, 0x22, 0xFA, 0x01, 0x32, 0x1B, 0x3B, 0x8B, 0x23,
    0xE0, 0xC3, 0xF1, 0x95, 0xEB, 0x5C, 0xC8, 0xB0, 0x0C, 0x00, 0x13, 0xC7,
    0xB0, 0xDA, 0x73, 0x94, 0x96, 0xE0, 0x0D, 0xC5, 0x0C, 0x74, 0x2B, 0x51,
    0xD3, 0xE2, 0xC4, 0x7C, 0xF4, 0x25, 0x4A, 0x71, 0xD9, 0x95, 0xA4, 0xC6,
    0xAE, 0x4E, 0xC1, 0x70, 0x07, 0xA7, 0x9A, 0x4E, 0x6B, 0xE7, 0x6D, 0x20,
    0xCF, 0x45, 0xE6, 0x41, 0x2E, 0x77, 0x45, 0x49, 0x11, 0x4F, 0xC4, 0x67,
    0xEF, 0x31, 0xB1, 0x59, 0x53, 0xE4, 0xB7, 0xD0, 0xAE, 0xCC, 0x3B, 0x3B,
    0xBB, 0x05, 0x01, 0x76, 0xE2, 0xBC, 0xD3, 0x4E, 0xF9, 0xBA, 0x8E, 0xB6,
    0xD1, 0xB6, 0xF7, 0x8E, 0x0C, 0xE3, 0xDA, 0x10, 0xA3, 0xF0, 0xCB, 0x66,
    0xE7, 0xF7, 0x5E, 0x56, 0x62, 0xC4, 0x3A, 0xF9, 0x1F, 0x4E, 0xF2, 0x13,
    0x50, 0xA4, 0x39, 0x70, 0x7C, 0x61, 0x62, 0xEF, 0xB5, 0xB8, 0xC4, 0x19,
    0xEF, 0x94, 0x43, 0xF7, 0xA0, 0xB3, 0xF3, 0x13, 0xA9, 0x1A, 0xCA, 0x38,
    0xAA, 0xF9, 0xE0, 0x80, 0xB5, 0x45, 0x34, 0x47, 0x80, 0x9D, 0x1D, 0x1B,
    0x0A, 0x98, 0x60, 0x91, 0x23, 0x7E, 0x69, 0x35, 0x3F, 0x5F, 0x5E, 0x90,
    0xE6, 0xA2, 0x70, 0x4C, 0x78, 0xC5, 0x93, 0xDE, 0xFA, 0x4A, 0xAE, 0x13,
    0x87, 0x45, 0xC2, 0xCD, 0xA0, 0x3D, 0xC9, 0xCE, 0xD2, 0xD7, 0xD3, 0x6C,
    0x14, 0x62, 0x39, 0x07, 0x36, 0xBF, 0xA3, 0x0A, 0x2B, 0x43, 0x38, 0x83,
    0x9A, 0x51, 0x50, 0x56, 0x25, 0x97, 0xA6, 0xC1, 0x2C, 0x43, 0x2D, 0x3E,
    0xCC, 0xDD, 0xA6, 0x6E, 0x35, 0xC7, 0x19, 0x65, 0x88, 0x13, 0x5A, 0x27,
    0xA0, 0x2C, 0x66, 0x42, 0x6C, 0xBF, 0xC2, 0x8C, 0x51, 0xB6, 0xF4, 0xC9,
    0x04, 0x96, 0x2C, 0x0B, 0x51, 0x11, 0x6E, 0xC2, 0xCD, 0x2C, 0x9E, 0x36,
    0xA3, 0x7D, 0x2A, 0x32, 0xED, 0x4A, 0x20, 0x62, 0x6D, 0x95, 0x95, 0xB4,
    0xC5, 0xBF, 0x4A, 0x51, 0xD6, 0x2D, 0xDB, 0x42, 0x46, 0x2F, 0x4B, 0x0E,
    0x33, 0xBB, 0x57, 0x19, 0x6D, 0x6E, 0x3A, 0x4A, 0x86, 0x80, 0xF5, 0xF6,
    0x10, 0x4F, 0x77, 0x22, 0xD6, 0x92, 0x1E, 0x8E, 0x65, 0x09, 0xA2, 0x80,
    0xD3, 0x4A, 0x50, 0xC0, 0xBF, 0x27, 0x9C, 0x9D, 0xBF, 0xD0, 0xEB, 0xCF,
    0xC0, 0x0B, 0x81, 0x1B, 0xD8, 0x0C, 0xD8, 0x1B, 0xDA, 0x12, 0xE9, 0x28,
    0x86, 0x4B, 0xF0, 0xD8, 0x2B, 0x9E, 0x5E, 0x5F, 0xB8, 0x19, 0x6D, 0xD4,
    0x6C, 0xFD, 0x60, 0xA1, 0xB4, 0x8D, 0xC8, 0x62, 0x15, 0x6E, 0x24, 0x3D,
    0x13, 0xEE, 0x5E, 0xA0, 0xC0, 0xBB, 0x2A, 0x7C, 0x92, 0x1A, 0xD0, 0xE5,
    0xE0, 0x56, 0xF4, 0xFB, 0x3D, 0x6A, 0xBB, 0x24, 0x2E, 0x08, 0x26, 0xCF,
    0x02, 0x19, 0x36, 0x73, 0xB3, 0x74, 0xD5, 0x1A, 0xCC, 0x41, 0x29, 0x54,
    0xD0, 0x0B, 0xC7, 0x07, 0xDA, 0xA0, 0x8C, 0xF0, 0x9B, 0xA8, 0x20, 0xB3,
    0x00, 0x93, 0x3C, 0xC0, 0xB6, 0xF3, 0x9D, 0x53, 0xC2, 0xA3, 0x10, 0xBA,
    0x07, 0xE9, 0x84, 0xB5, 0x91, 0x1D, 0xEC, 0x06, 0x2C, 0x92, 0x9F, 0x4B,
    0xF8, 0x0A, 0xBE, 0x5A, 0x55, 0xCB, 0x04, 0x4D, 0x34, 0x68, 0x2C, 0xA4,
    0x25, 0xA8, 0x10, 0xD0, 0x97, 0x81, 0xE6, 0x70, 0x89, 0xC9, 0xC3, 0xC3,
    0x61, 0x29, 0xDE, 0xDC, 0x91, 0x30, 0xFC, 0x5D, 0x63, 0x13, 0x49, 0xC7,
    0xF9, 0xDF, 0x0B, 0xDE, 0x93, 0x2B, 0xBE, 0x77, 0x7E, 0x71, 0x42, 0xDA,
    0x29, 0xC3, 0x51, 0x58, 0xBE, 0x1D, 0xCC, 0x14, 0x40, 0x39, 0xF4, 0x18,
    0x43, 0x8B, 0xA2, 0xBB, 0x93, 0xB7, 0x13, 0x01, 0x5D, 0xB5, 0xAD, 0x6A,
    0xFF, 0xDA, 0x81, 0x46, 0x46, 0xFE, 0xAD, 0x87, 0x28, 0x18, 0xF3, 0x96,
    0x51, 0x40, 0x0B, 0xFC, 0x18, 0x6D, 0x72, 0x7C, 0x7C, 0x92, 0xD7, 0xFE,
    0xDE, 0xDA, 0x3B, 0xF4, 0xDE, 0x3B, 0x91, 0x1C, 0x77, 0x53, 0xF7, 0xB4,
    0x27, 0xFA, 0x36, 0x35, 0xD9, 0xC6, 0x34, 0x54, 0x93, 0x4A, 0x42, 0x81,
    0x5B, 0x03, 0x92, 0x24, 0x05, 0xCA, 0xF1, 0x6F, 0xB5, 0x45, 0xCD, 0x2F,
    0x1A, 0x29, 0xFC, 0xB6, 0xFF, 0x74, 0xC6, 0xB7, 0x82, 0xC1, 0xB6, 0xD6,
    0x51, 0xFB, 0xBA, 0xF5, 0x87, 0x6E, 0x08, 0xA0, 0x5E, 0xB4, 0x56, 0xC3,
    0xD4, 0xEF, 0xFB, 0x13, 0x9B, 0xF6, 0xBC, 0x38, 0xF2, 0xA3, 0xB8, 0x47,
    0x06, 0xA0, 0x37, 0xC1, 0xCE, 0x87, 0xD6, 0x6F, 0x8E, 0x48, 0x52, 0x69,
    0x94, 0x9C, 0xE8, 0xAB, 0x8C, 0x02, 0xB9, 0x75, 0xBF, 0x49, 0x77, 0x38,
    0xEA, 0x4B, 0x62, 0xEA, 0x47, 0xA4, 0x1A, 0xB7, 0x0A, 0xC3, 0xE5, 0xFC,
    0x35, 0x0A, 0x99, 0x42, 0x70, 0x10, 0xC5, 0xD1, 0x2F, 0x76, 0xDB, 0xF7,
    0x06, 0x57, 0xE1, 0xA6, 0x0C, 0xA3, 0x33, 0x48, 0x61, 0x15, 0x2A, 0x0F,
    0x15, 0xE4, 0xED, 0xB0, 0x41, 0x84, 0xA1, 0xE2, 0x08, 0x9E, 0xD5, 0x0C,
    0xEF, 0xE0, 0xD2, 0x44, 0xB6, 0x2A, 0x39, 0x13, 0xB1, 0xBA, 0xEE, 0xA8,
    0x75, 0xB0, 0xAA, 0x3E, 0x4E, 0xDB, 0x86, 0xAF, 0x9F, 0x3F, 0xC7, 0xFE,
    0x67, 0xB3, 0x81, 0xCD, 0x0A, 0x87, 0xA9, 0x65, 0x6A, 0xF5, 0x15, 0x95,
    0x17, 0xDC, 0x2D, 0x2A, 0x86, 0xAA, 0xBE, 0x96, 0x65, 0xA3, 0x1D, 0x91,
    0xD5, 0x83, 0x1A, 0x48, 0x82, 0x56, 0xBF, 0xE7, 0x79, 0x67, 0x99, 0x2F,
    0xFF, 0x03, 0x56, 0x96, 0x3D, 0x3F, 0x2D, 0xE9, 0x82, 0x00, 0x0B, 0xCF,
    0x70, 0xC6, 0x06, 0x73, 0x27, 0x9E, 0xB6, 0x05, 0x42, 0x1D, 0x13, 0xDE,
    0x06, 0xFC, 0x60, 0x97, 0x6E, 0xCD, 0x37, 0xB9, 0xF8, 0xF5, 0x9F, 0x2A,
    0x9C, 0x13, 0xE4, 0xB4, 0x99, 0x70, 0x94, 0x83, 0xEA, 0xDC, 0x79, 0xAC,
    0xD0, 0x55, 0x2B, 0xBB, 0x13, 0x05, 0xF1, 0xA9, 0x5B, 0xA1, 0xE6, 0x0F,
    0x61, 0x91, 0xE3, 0x91, 0xFC, 0x79, 0x9C, 0xE0, 0x3A, 0xB3, 0x66, 0x15,
    0xB2, 0x67, 0xAF, 0xB8, 0xCE, 0x29, 0xB3, 0x08, 0x22, 0x7A, 0x9F, 0x57,
    0x2D, 0xB7, 0x18, 0x0D, 0x93, 0xE6, 0xCC, 0x5B, 0x6B, 0x5A, 0xA2, 0x96,
    0xB7, 0xA0, 0x8D, 0x45, 0x92, 0xCC, 0x6B, 0xEB, 0x6C, 0x3D, 0x93, 0x63,
    0xE6, 0xA8, 0x19, 0xBF, 0xE5, 0xA1, 0xB6, 0x25, 0xF9, 0x70, 0x6E, 0x96,
    0x79, 0x8B, 0xF0, 0xB4, 0xAE, 0x09, 0x0A, 0x47, 0xDF, 0xD7, 0xE8, 0x75,
    0x5E, 0x6F, 0xB4, 0xBF, 0x45, 0xE7, 0x31, 0x7F, 0x2F, 0xE8, 0x86, 0x53,
    0x9C, 0x72, 0x86, 0x2C, 0xD2, 0x6F, 0xC7, 0xE1, 0x01, 0x25, 0x0A, 0xA1,
    0x61, 0x49, 0x6A, 0xD9, 0x50, 0x28, 0xCE, 0x77, 0xF3, 0x4C, 0xB2, 0xD2,
    0xB9, 0xB6, 0x78, 0x9F, 0x16, 0xA6, 0x2A, 0x67, 0x58, 0xFC, 0xEE, 0xA1,
    0xF6, 0xA5, 0x81, 0x1A, 0x9E, 0xBB, 0x70, 0xBB, 0xA4, 0xE1, 0xCF, 0xFA,
    0x9D, 0xF2, 0xAC, 0x07, 0x89, 0xC2, 0xDF, 0xF8, 0xAD, 0xC1, 0x1F, 0xDB,
    0x4B, 0x5A, 0x11, 0xFE, 0x62, 0x93, 0x18, 0x86, 0x0E, 0x66, 0x42, 0x51,
    0xC7, 0x5E, 0xBA, 0xBB, 0xEA, 0x5B, 0x6D, 0xA4, 0xD5, 0x21, 0xD8, 0x8F,
    0x1A, 0x91, 0xA3, 0xCB, 0x16, 0xC0, 0xEA, 0x6A, 0xFD, 0xD9, 0x2B, 0x31,
    0x5E, 0xAF, 0x0F, 0xF3, 0x16, 0x15, 0x2A, 0x9A, 0xE8, 0xBC, 0xDD, 0x56,
    0xC0, 0x98, 0xF0, 0xA7, 0x7C, 0xBF, 0xBE, 0xDB, 0x5F, 0xDD, 0x73, 0xEA,
    0x41, 0xE2, 0xBE, 0xE4, 0x80, 0x81, 0xF0, 0xC6, 0x50, 0x73, 0x78, 0xF7,
    0xE5, 0x66, 0x79, 0xD3, 0x7A, 0xCB, 0xCD, 0x1F, 0x5E, 0x57, 0x61, 0x81,
    0x50, 0x67, 0xC8, 0xB6, 0x6B, 0xAF, 0xBC, 0x95, 0xA0, 0x4C, 0x74, 0x25,
    0x77, 0x7C, 0x7D, 0x67, 0x45, 0xB9, 0xFC, 0xCE, 0x82, 0xF6, 0xBC, 0x5E,
    0xE9, 0x46, 0x4B, 0x5B, 0x78, 0x10, 0xE3, 0x47, 0x6F, 0x1F, 0x3E, 0xF5,
    0xD6, 0x76, 0x61, 0xF5, 0xCB, 0x00, 0x3F, 0xA2, 0x8D, 0xD2, 0xCD, 0xA8,
    0x05, 0x49, 0x76, 0x8D, 0x19, 0x13, 0x3E, 0xD8, 0x45, 0x93, 0x96, 0x1A,
    0x8A, 0xEF, 0xD0, 0x78, 0xD9, 0x70, 0xA6, 0xE0, 0x4B, 0xE2, 0x9D, 0x7C,
    0xC3, 0x68, 0x82, 0xEC, 0xFB, 0x0C, 0xC5, 0xF0, 0xF4, 0xFD, 0x48, 0x42,
    0x37, 0x83, 0x32, 0xB7, 0x6C, 0xD7, 0x46, 0xAE, 0x72, 0x87, 0xF3, 0x2D,
    0x83, 0xF4, 0x6F, 0xFF, 0xFC, 0xF8, 0x00, 0x51, 0xF3, 0xF0, 0x62, 0xBD,
    0x3D, 0xCC, 0xC3, 0xC9, 0x0B, 0x36, 0x70, 0xE5, 0x4E, 0xA0, 0x40, 0x55,
    0x87, 0x86, 0xE7, 0x4B, 0xAA, 0x50, 0xB7, 0x74, 0xFD, 0x67, 0x39, 0x04,
    0x6A, 0x08, 0xD5, 0x10, 0xA9, 0x61, 0xA3, 0x86, 0x58, 0x0D, 0x5B, 0x35,
    0xEC, 0xD4, 0xB0, 0x57, 0x83, 0xBF, 0xD6, 0xA3, 0xE6, 0xE3, 0x07, 0xE6,
    0xB9, 0x11, 0x2B, 0x1D, 0x93, 0x65, 0x0B, 0x64, 0x52, 0x42, 0x02, 0xFF,
    0xC1, 0x7E, 0xCC, 0x40, 0xC1, 0xCF, 0x71, 0xED, 0xB6, 0xD5, 0x14, 0x7B,
    0x34, 0xEC, 0xD2, 0xBA, 0xBC, 0x4D, 0xB1, 0x77, 0x40, 0xA0, 0x20, 0xC2,
    0xD5, 0x53, 0xA7, 0x34, 0xD0, 0x0A, 0x44, 0x5E, 0x18, 0x7E, 0x50, 0x36,
    0x06, 0xC3, 0x93, 0xC5, 0x8B, 0x63, 0x4D, 0x0B, 0x35, 0x2D, 0xF0, 0x35,
    0x21, 0x32, 0x84, 0xFD, 0x78, 0x70, 0xA3, 0x69, 0xE1, 0x76, 0x3C, 0x18,
    0x1B, 0xFE, 0x86, 0xB0, 0xD5, 0x84, 0x8D, 0x25, 0x71, 0xA7, 0x69, 0xB1,
    0x25, 0x71, 0xAF, 0x69, 0x5B, 0x23, 0xD1, 0x5F, 0x1B, 0x8A, 0x25, 0xD2,
    0x37, 0xFA, 0xEF, 0x2C, 0x99, 0x53, 0xAF, 0x2E, 0xBD, 0xA4, 0x7A, 0xBF,
    0xFE, 0x1F, 0x21, 0xEC, 0xE9, 0x51, 0xA9, 0x13, 0x00, 0x00,
};

// MARK: done
const char credentialjs[] PROGMEM = {
    0x1F, 0x8B, 0x08, 0x08, 0x42, 0x91, 0xA1, 0x5E, 0x02, 0xFF, 0x63, 0x72,
    0x65, 0x64, 0x65, 0x6E, 0x74, 0x69, 0x61, 0x6C, 0x2E, 0x6A, 0x73, 0x00,
    0xED, 0x96, 0xCF, 0x6B, 0x13, 0x41, 0x14, 0xC7, 0xEF, 0xF9, 0x2B, 0x1E,
    0x8B, 0xD2, 0x5D, 0xF2, 0xD3, 0xB6, 0xD6, 0x94, 0x58, 0xAA, 0x42, 0x8B,
    0x4A, 0x0B, 0x22, 0x15, 0xA1, 0x49, 0x2D, 0x9B, 0xDD, 0x49, 0x76, 0xEC,
    0x66, 0x36, 0xCC, 0xCE, 0x26, 0x6D, 0x7E, 0x9C, 0x3D, 0x88, 0x60, 0x4F,
    0x22, 0x5E, 0x2C, 0x9E, 0x7A, 0x08, 0x58, 0x15, 0x84, 0xE4, 0x98, 0xD2,
    0xFF, 0x63, 0xFF, 0x13, 0xDF, 0x6C, 0x36, 0x9B, 0xA4, 0x4D, 0x7F, 0xA1,
    0x87, 0x0A, 0xDD, 0x43, 0xB2, 0xF3, 0xE6, 0xBD, 0xEF, 0xBC, 0x79, 0xEF,
    0x93, 0xC9, 0xD4, 0x74, 0x0E, 0x06, 0x27, 0x26, 0x61, 0x82, 0xEA, 0xF6,
    0x73, 0xD7, 0x61, 0xB0, 0x04, 0xCD, 0x76, 0x2E, 0x16, 0x2B, 0x79, 0xCC,
    0x10, 0x14, 0xC7, 0xB6, 0xA3, 0x9B, 0xAA, 0x06, 0xCD, 0x18, 0xE0, 0x53,
    0x26, 0x62, 0x95, 0xDA, 0x44, 0x55, 0xEA, 0xB4, 0x44, 0x5D, 0x97, 0x9A,
    0xA9, 0xB7, 0x18, 0xA3, 0x24, 0x20, 0x72, 0x57, 0x39, 0x71, 0x87, 0xDE,
    0xF2, 0x31, 0x1D, 0xC3, 0xAB, 0xA0, 0x7C, 0x0A, 0x43, 0x57, 0x6C, 0x22,
    0x5F, 0x9F, 0xEC, 0x3D, 0x33, 0x55, 0x45, 0x46, 0x2B, 0x5A, 0x8A, 0x32,
    0x46, 0xF8, 0xD3, 0x8D, 0xF5, 0x35, 0x5C, 0x18, 0x43, 0x73, 0x41, 0x60,
    0x5B, 0xCB, 0xC5, 0xDA, 0x63, 0x39, 0xB8, 0x7A, 0x8D, 0xAC, 0xEA, 0x06,
    0x29, 0x3A, 0xCE, 0x4E, 0x94, 0x4B, 0x0D, 0x73, 0xF7, 0x5C, 0xC2, 0xF4,
    0x0A, 0xC1, 0x58, 0x29, 0xAF, 0x2A, 0x38, 0xE6, 0xD2, 0x80, 0xC2, 0x35,
    0xDD, 0xF6, 0x48, 0x2E, 0xF2, 0xAC, 0xEA, 0xAE, 0x5B, 0x77, 0xB8, 0x19,
    0xB9, 0x0E, 0x0D, 0x93, 0xAE, 0x86, 0xC3, 0x5C, 0x01, 0xD4, 0x7D, 0x61,
    0x39, 0x4C, 0xCA, 0xA6, 0xDF, 0xA8, 0x99, 0x56, 0x21, 0x9E, 0x9D, 0xD7,
    0xD4, 0x82, 0xDB, 0x2A, 0xA4, 0xB4, 0x65, 0x55, 0x9D, 0xCB, 0xCF, 0x26,
    0x17, 0xB7, 0xB4, 0x96, 0x7A, 0x3F, 0xBF, 0x90, 0x0D, 0x5E, 0x1E, 0xE4,
    0x33, 0x0B, 0x03, 0x53, 0x36, 0x7F, 0x2F, 0x19, 0x1A, 0x17, 0xF3, 0x99,
    0xE4, 0x7C, 0x60, 0xC6, 0x58, 0x73, 0x14, 0x5F, 0x30, 0x9B, 0x73, 0xED,
    0xD3, 0xC3, 0x3B, 0xE9, 0x51, 0xAA, 0x9C, 0x94, 0x71, 0x65, 0x46, 0xEA,
    0xF0, 0x92, 0x94, 0x57, 0x76, 0xAB, 0xEA, 0x8C, 0x9A, 0x7F, 0x9C, 0xDC,
    0xD4, 0x93, 0x8D, 0x4C, 0x72, 0x31, 0xB5, 0x7D, 0x37, 0x9E, 0xDC, 0x8A,
    0x3F, 0xCA, 0x87, 0x43, 0x7C, 0x2F, 0xA4, 0xE4, 0x60, 0xAB, 0x39, 0x9B,
    0x90, 0x42, 0x33, 0xDA, 0x40, 0x89, 0x96, 0x40, 0x0D, 0xF7, 0x91, 0x12,
    0xC4, 0x15, 0x6A, 0x58, 0x2B, 0x0D, 0x5A, 0x2D, 0xB9, 0xC4, 0xA4, 0x71,
    0xBC, 0x65, 0x51, 0x93, 0xB9, 0xC7, 0x96, 0x8D, 0x8A, 0xB9, 0x24, 0xCB,
    0x5F, 0x2A, 0x2A, 0x10, 0x07, 0x05, 0x0A, 0x8A, 0xFC, 0x1E, 0xD6, 0x1D,
    0x2D, 0x03, 0xC3, 0x70, 0x22, 0x2A, 0xF3, 0x60, 0x26, 0xCC, 0x45, 0x3E,
    0xBA, 0x4D, 0xB8, 0x50, 0x95, 0x35, 0xBF, 0xF7, 0x89, 0xC2, 0x6E, 0xFF,
    0xC0, 0x00, 0x61, 0xF9, 0xBD, 0x23, 0x03, 0x6A, 0x1E, 0x05, 0xBB, 0xFF,
    0x83, 0x95, 0x03, 0x43, 0x07, 0x6C, 0xBF, 0x7B, 0x40, 0xC1, 0x72, 0xFC,
    0xEE, 0x6F, 0x03, 0x0C, 0x34, 0x7D, 0x60, 0x50, 0xB5, 0x4E, 0xBE, 0x9F,
    0x1C, 0x84, 0x2E, 0x87, 0x06, 0xEC, 0x58, 0x28, 0x30, 0x54, 0x6F, 0x03,
    0xB1, 0x5D, 0x32, 0xB6, 0x81, 0x70, 0xA9, 0x75, 0x9D, 0xDA, 0x43, 0x1D,
    0xD7, 0xEF, 0xED, 0xC3, 0xF1, 0x3E, 0xF5, 0x7B, 0xEF, 0x18, 0x8A, 0x38,
    0xC1, 0x1A, 0x06, 0xAA, 0xEA, 0xF8, 0xD9, 0xEF, 0x30, 0x2B, 0x48, 0x29,
    0x52, 0x3C, 0x43, 0xDF, 0x46, 0x9D, 0x0A, 0x41, 0xF8, 0x85, 0xF0, 0x89,
    0x81, 0xCF, 0xB6, 0x84, 0xF0, 0x0A, 0x00, 0x0E, 0xDD, 0xE5, 0xC4, 0x2D,
    0x84, 0x57, 0x82, 0x30, 0x2C, 0xD9, 0xBF, 0x21, 0x71, 0x85, 0x73, 0x87,
    0x03, 0x2A, 0x5A, 0x08, 0x04, 0x75, 0xA1, 0x42, 0x90, 0x0B, 0x33, 0x01,
    0x55, 0x9B, 0xE8, 0x88, 0x93, 0xE0, 0x7B, 0xE0, 0x08, 0x8B, 0x70, 0xF7,
    0x32, 0xCE, 0x82, 0xED, 0x25, 0x60, 0xA5, 0x22, 0x79, 0x43, 0xC9, 0x57,
    0xE1, 0x21, 0x04, 0xCC, 0x11, 0xD8, 0x4B, 0xCE, 0x89, 0x21, 0x26, 0x64,
    0xF5, 0xB2, 0x4E, 0xD9, 0xF9, 0xAC, 0x6D, 0xEA, 0xB6, 0x73, 0x21, 0x68,
    0x0D, 0xFB, 0x1A, 0xE7, 0x5C, 0xC3, 0xBE, 0x3D, 0xE9, 0xAE, 0x05, 0x59,
    0x03, 0xCB, 0xFF, 0xDF, 0x9D, 0x75, 0x7F, 0x7B, 0xBE, 0x05, 0xD5, 0x9B,
    0x80, 0x6E, 0x82, 0xB8, 0xE9, 0xAC, 0x31, 0xAF, 0x52, 0x24, 0x7C, 0xF4,
    0x8F, 0x2A, 0x35, 0x06, 0xB6, 0x9B, 0x83, 0xDA, 0x74, 0x42, 0x06, 0x59,
    0x5E, 0xCE, 0x42, 0xB0, 0xA5, 0xF1, 0x9E, 0x4F, 0x27, 0x21, 0x2C, 0xC4,
    0x0D, 0xE0, 0xE0, 0xF8, 0xA3, 0xDF, 0x7B, 0x8F, 0xDD, 0x36, 0x51, 0x10,
    0x43, 0xA7, 0x62, 0x81, 0x42, 0xBF, 0x70, 0x6E, 0x8C, 0x8B, 0xD4, 0xF9,
    0x60, 0xBC, 0xC6, 0x8B, 0x5E, 0xC4, 0x45, 0x3A, 0x7D, 0x16, 0x8D, 0xF0,
    0x1E, 0x77, 0x1A, 0x8D, 0x81, 0xCB, 0x95, 0x6F, 0x7F, 0x93, 0x07, 0xD8,
    0xE4, 0x25, 0x0D, 0x33, 0x98, 0x5C, 0x40, 0xB6, 0x33, 0x70, 0x7B, 0x08,
    0x59, 0x6D, 0xCA, 0xFF, 0xBE, 0xDF, 0xED, 0x08, 0xDC, 0xA5, 0xDF, 0x3D,
    0xF4, 0xB0, 0x8A, 0x7E, 0xF7, 0x1B, 0xFE, 0x14, 0xFA, 0x3F, 0xB1, 0x0E,
    0x7E, 0xEF, 0x33, 0x98, 0xFD, 0xAF, 0x58, 0x7B, 0xBF, 0xF7, 0x85, 0x81,
    0x85, 0xE5, 0x1D, 0x16, 0xBD, 0xE8, 0x77, 0x8F, 0xB0, 0x28, 0x59, 0xD8,
    0xE9, 0x77, 0x40, 0x60, 0x93, 0xCE, 0xAD, 0xF4, 0x54, 0x50, 0x82, 0x24,
    0x2F, 0xE5, 0x24, 0x48, 0xFA, 0x62, 0x4A, 0x46, 0x64, 0x30, 0xCC, 0xBC,
    0x53, 0x0D, 0xD1, 0xA8, 0x8C, 0xED, 0x69, 0xAC, 0x59, 0x7F, 0x00, 0xE0,
    0x27, 0xE6, 0x9A, 0xC0, 0x0B, 0x00, 0x00,
};

// MARK: done
const char sitejs[] PROGMEM = {
    0x1F, 0x8B, 0x08, 0x08, 0x42, 0x91, 0xA1, 0x5E, 0x02, 0xFF, 0x73, 0x69,
    0x74, 0x65, 0x2E, 0x6A, 0x73, 0x00, 0xA5, 0x56, 0x6D, 0x6F, 0xE2, 0x46,
    0x10, 0xFE, 0x0C, 0xBF, 0x62, 0xCF, 0x95, 0xCE, 0xE6, 0x42, 0x6D, 0x94,
    0xEB, 0x87, 0x36, 0x40, 0xAA, 0x9C, 0x94, 0x7B, 0x13, 0xE9, 0x49, 0x40,
    0xA5, 0x4A, 0x21, 0x1F, 0x36, 0xF6, 0x00, 0x6E, 0x96, 0x5D, 0xDF, 0xEE,
    0x9A, 0x0B, 0xCA, 0xF1, 0xDF, 0x3B, 0xFB, 0x62, 0x63, 0x03, 0xAD, 0x5A,
    0xF5, 0x43, 0x94, 0xF5, 0x3E, 0x33, 0xB3, 0x33, 0xCF, 0xBC, 0xB1, 0xA5,
    0x92, 0x30, 0xCA, 0x57, 0x9F, 0x95, 0xE0, 0x64, 0x4C, 0x5E, 0xF6, 0xC3,
    0x6E, 0x77, 0x59, 0xF2, 0x54, 0xE7, 0xF8, 0xBD, 0x02, 0x7D, 0x1B, 0x71,
    0xBA, 0x81, 0x1E, 0x79, 0xE9, 0x76, 0x24, 0xE8, 0x52, 0x72, 0x92, 0x89,
    0xB4, 0xDC, 0x00, 0xD7, 0xB1, 0x41, 0x19, 0x98, 0xE3, 0xBB, 0xDD, 0xA7,
    0xCC, 0xC9, 0x0D, 0xBB, 0xFB, 0x86, 0x3E, 0xA8, 0x34, 0x52, 0x5A, 0x5A,
    0xED, 0x7C, 0x49, 0xEA, 0x73, 0x65, 0x0A, 0xBF, 0x63, 0x2D, 0x66, 0x5A,
    0xE6, 0x7C, 0x15, 0xF5, 0xF0, 0xBE, 0x13, 0x4B, 0x28, 0x18, 0x4D, 0x21,
    0x4A, 0x5E, 0x27, 0xAB, 0x3E, 0x09, 0x5F, 0xD3, 0x4D, 0x31, 0x0C, 0x8F,
    0xA0, 0x91, 0x83, 0x98, 0x3E, 0x41, 0xAE, 0x1D, 0xB2, 0x3A, 0x45, 0x16,
    0x81, 0x83, 0xBE, 0x96, 0xE2, 0x0C, 0x18, 0x3A, 0xF0, 0x87, 0xB7, 0xBF,
    0x9C, 0x62, 0x89, 0xC7, 0x9E, 0x2F, 0xDF, 0x23, 0x38, 0xEC, 0x76, 0xF6,
    0x35, 0x15, 0x41, 0xD0, 0x8E, 0x37, 0x15, 0x7C, 0x0B, 0x52, 0x4F, 0x72,
    0x0E, 0xEF, 0x24, 0xD0, 0x27, 0x75, 0x3E, 0x7A, 0x3C, 0x20, 0xD5, 0xED,
    0xE0, 0x87, 0xAD, 0xFB, 0xFA, 0xF5, 0xE8, 0xD7, 0xAB, 0x85, 0x5C, 0xF0,
    0xEF, 0x0B, 0xF9, 0x7D, 0xC1, 0x7B, 0xD6, 0x93, 0xD1, 0xA3, 0xBC, 0xB6,
    0x7E, 0x34, 0x58, 0xFC, 0x47, 0xAF, 0xD4, 0x5A, 0x7C, 0xBB, 0x03, 0xA5,
    0xE8, 0x0A, 0xA2, 0x8D, 0x42, 0x13, 0x29, 0x13, 0x0A, 0x6E, 0x96, 0x1A,
    0x9C, 0x3F, 0x5B, 0x2C, 0x01, 0x60, 0x1B, 0x8D, 0x6F, 0xDB, 0x84, 0x07,
    0x20, 0xA5, 0x90, 0x81, 0x79, 0xC2, 0x5C, 0xC7, 0x39, 0xE7, 0x20, 0x3F,
    0xCE, 0xEF, 0x26, 0x28, 0x60, 0x32, 0x8A, 0x36, 0x7A, 0xE4, 0x82, 0x04,
    0x23, 0x4A, 0x04, 0x4F, 0x59, 0x9E, 0x3E, 0x8D, 0x43, 0x6B, 0xB2, 0x7A,
    0xA4, 0x17, 0x92, 0x3C, 0xF3, 0x77, 0xB7, 0xC6, 0x56, 0x78, 0xFD, 0x3C,
    0x4A, 0xE8, 0x35, 0xFA, 0xE5, 0x4D, 0xA6, 0x8C, 0x2A, 0x35, 0xC9, 0x95,
    0xC6, 0x48, 0x37, 0x62, 0x0B, 0x51, 0xB8, 0xCE, 0x33, 0x08, 0xEB, 0x27,
    0x0F, 0x38, 0xCD, 0xB2, 0x28, 0x34, 0x11, 0x18, 0xD0, 0xF1, 0x78, 0x70,
    0x9F, 0xBC, 0x1A, 0x8F, 0x49, 0xC9, 0x33, 0x58, 0x22, 0xE3, 0x99, 0x27,
    0x17, 0xF4, 0x3C, 0xDF, 0x80, 0x28, 0x75, 0xD4, 0x76, 0xAA, 0x15, 0xB7,
    0x25, 0xAC, 0x95, 0xBA, 0x96, 0xEC, 0x7F, 0xA5, 0xC5, 0x50, 0xFE, 0x77,
    0x91, 0x55, 0xCE, 0x9F, 0x8D, 0xAC, 0x0A, 0x7B, 0xDF, 0xEE, 0xBA, 0xF7,
    0x39, 0x83, 0x88, 0x66, 0x12, 0x7D, 0xA6, 0x8C, 0x3D, 0xD2, 0xF4, 0xA9,
    0x4F, 0xB4, 0x8B, 0xAA, 0x4F, 0x36, 0xA0, 0xD7, 0x22, 0xEB, 0x23, 0xF9,
    0xF3, 0xEA, 0x4A, 0x70, 0xCB, 0xB3, 0xF5, 0x3B, 0x79, 0x43, 0x96, 0x5E,
    0x09, 0x4B, 0xA3, 0x5C, 0x2E, 0xC9, 0x9B, 0xC4, 0x11, 0x87, 0x06, 0xC9,
    0xB8, 0xCD, 0x98, 0x2B, 0x99, 0xA1, 0x27, 0xB6, 0x52, 0x3B, 0x12, 0x3A,
    0xDC, 0x93, 0xDA, 0x49, 0xC3, 0xD1, 0xDE, 0xEB, 0x79, 0xCF, 0x8E, 0xD5,
    0xEA, 0x6B, 0xF2, 0xF3, 0x60, 0x30, 0xF0, 0xB2, 0xCE, 0xF9, 0x63, 0xD1,
    0xEA, 0x96, 0x04, 0x1F, 0x6E, 0xE7, 0x81, 0x17, 0xAD, 0xE3, 0x3B, 0x96,
    0x36, 0x69, 0x6E, 0x80, 0x6D, 0xA7, 0x4C, 0xF7, 0x36, 0x2B, 0x3E, 0xB8,
    0x9D, 0x4E, 0xBF, 0x4C, 0xAF, 0x6A, 0x6F, 0x98, 0xA0, 0x19, 0x76, 0x1C,
    0x59, 0x22, 0xC5, 0x24, 0xC0, 0x3A, 0x46, 0x56, 0x6C, 0x37, 0xED, 0x5D,
    0x13, 0xB9, 0x97, 0x2D, 0x9D, 0xE7, 0xDF, 0xF5, 0xD0, 0xBF, 0x7B, 0xB5,
    0xF9, 0xDA, 0xD5, 0x99, 0xE7, 0x6C, 0xBA, 0x52, 0x9C, 0x15, 0x1A, 0x30,
    0x17, 0x5F, 0x4B, 0x50, 0xDA, 0xA6, 0xCB, 0x14, 0x5F, 0xF5, 0x3D, 0x26,
    0x1C, 0xBE, 0x91, 0x3F, 0xEE, 0x26, 0x1F, 0xB5, 0x2E, 0xA6, 0xEE, 0x32,
    0xB2, 0xDD, 0x80, 0xBA, 0x58, 0xEE, 0xA4, 0xA0, 0x12, 0x67, 0xAF, 0xE9,
    0x87, 0xA5, 0x90, 0x2D, 0x33, 0xFE, 0x1C, 0x8B, 0x02, 0x78, 0x54, 0xD5,
    0x0D, 0xF0, 0x54, 0x64, 0xF0, 0xFB, 0xF4, 0x93, 0x29, 0x08, 0x6C, 0x0B,
    0x2D, 0x4B, 0x33, 0xB8, 0x6B, 0xE1, 0x43, 0xDE, 0xFC, 0xA9, 0x81, 0x09,
    0x7E, 0x40, 0xEB, 0x14, 0xB4, 0x70, 0xF0, 0xF4, 0x78, 0xA2, 0x9A, 0x18,
    0xCE, 0x46, 0x89, 0xF5, 0x7E, 0x87, 0x5A, 0xF3, 0x5D, 0x81, 0x24, 0xD1,
    0xA2, 0xC0, 0xF1, 0x41, 0x0D, 0x8B, 0xC9, 0x9F, 0xB8, 0x80, 0x02, 0x1B,
    0xD5, 0xC1, 0x16, 0xF2, 0x92, 0xED, 0x94, 0x46, 0x72, 0xD2, 0x35, 0xEE,
    0x28, 0x38, 0xC3, 0xBA, 0xAD, 0xBF, 0x75, 0xAE, 0x62, 0x2B, 0x3B, 0x33,
    0xB2, 0x98, 0x36, 0xF2, 0x93, 0xCF, 0x49, 0x0D, 0x1B, 0x2B, 0xA5, 0x32,
    0xD0, 0xE5, 0x60, 0xE0, 0xC1, 0x4E, 0x55, 0xD8, 0x95, 0x05, 0x55, 0x08,
    0xAE, 0x60, 0x0E, 0xCF, 0xDA, 0xA6, 0xC8, 0x94, 0x83, 0xF9, 0xDB, 0xD7,
    0x5C, 0xF3, 0xEC, 0x2C, 0xBD, 0x06, 0x70, 0x19, 0xC1, 0x0D, 0xA0, 0x04,
    0x83, 0x98, 0x89, 0x55, 0xE4, 0x32, 0xDD, 0xEC, 0x6C, 0xB3, 0x68, 0xA3,
    0x27, 0xD8, 0x35, 0xD7, 0xE9, 0xE9, 0xCE, 0x30, 0x33, 0xB6, 0x5A, 0xC9,
    0xF7, 0x28, 0xFD, 0xD0, 0x3B, 0x32, 0x83, 0xF9, 0x56, 0x30, 0x31, 0xB6,
    0x4C, 0x59, 0xCD, 0xFC, 0x5A, 0x69, 0x6C, 0xF1, 0xCF, 0xB3, 0x2F, 0xBF,
    0xC5, 0x56, 0xAA, 0x96, 0xF0, 0x3D, 0x55, 0xDB, 0x0D, 0xCC, 0x29, 0x78,
    0xC0, 0x09, 0x4A, 0x02, 0x40, 0xE2, 0xC9, 0x0B, 0x49, 0x12, 0xC2, 0x05,
    0xD6, 0x1A, 0x64, 0x44, 0x0B, 0x52, 0x16, 0x99, 0xE1, 0x52, 0xAF, 0x81,
    0x98, 0x21, 0xD7, 0x41, 0x2A, 0xDC, 0x44, 0xB4, 0x1B, 0x1F, 0x99, 0x3C,
    0xFC, 0x10, 0x40, 0x12, 0xE4, 0x6E, 0x86, 0x48, 0xAA, 0x85, 0xBC, 0x61,
    0x2C, 0x0A, 0xEE, 0x51, 0x97, 0xFE, 0xA8, 0x25, 0xE5, 0x8A, 0xA1, 0x95,
    0x07, 0x3B, 0x35, 0x3B, 0xA6, 0x3A, 0xA3, 0x1C, 0x35, 0x07, 0x43, 0x92,
    0x93, 0x51, 0x6D, 0x2B, 0x66, 0xC0, 0x57, 0x7A, 0x8D, 0x97, 0x17, 0x17,
    0x3E, 0x35, 0x8D, 0xA7, 0xCC, 0xD6, 0xF1, 0x82, 0xF7, 0xF9, 0x83, 0xCD,
    0x8B, 0xFF, 0x6E, 0x8D, 0x60, 0xCB, 0x6D, 0x05, 0xE0, 0x08, 0xBD, 0xD1,
    0xB8, 0x59, 0x1F, 0x4B, 0x8D, 0x65, 0xD6, 0x76, 0x26, 0xE8, 0xB9, 0xFE,
    0xB3, 0xDD, 0x7E, 0x3E, 0x06, 0x9C, 0xCB, 0x7A, 0xC3, 0xC2, 0x1E, 0x26,
    0xB6, 0x69, 0xC7, 0x52, 0xD6, 0x27, 0xC7, 0x1C, 0x56, 0xDC, 0x6A, 0xAC,
    0x69, 0xB1, 0xB4, 0x2D, 0x6F, 0x17, 0x53, 0x58, 0x8F, 0x8E, 0xB0, 0x67,
    0x6F, 0xA3, 0xE3, 0x72, 0xC0, 0x3B, 0x9B, 0xC6, 0x7A, 0xDF, 0x18, 0x83,
    0x25, 0xB5, 0x85, 0x1E, 0xA0, 0x2E, 0x2D, 0x99, 0x0E, 0x86, 0x98, 0x18,
    0x4E, 0xB7, 0xF9, 0x8A, 0xA2, 0x67, 0x71, 0x25, 0x11, 0x2B, 0xEC, 0x1C,
    0x88, 0x06, 0x7D, 0x72, 0x69, 0xDE, 0xAF, 0x76, 0x86, 0x75, 0x29, 0x31,
    0x73, 0xA6, 0x36, 0x85, 0x9B, 0x3A, 0x76, 0x9E, 0x63, 0xD4, 0x75, 0xE9,
    0x98, 0x0F, 0xEC, 0x84, 0x81, 0xF9, 0x6F, 0x87, 0xAE, 0x39, 0x9C, 0x8C,
    0xB4, 0xB6, 0x59, 0xE0, 0xDE, 0xD0, 0xA1, 0x02, 0x1D, 0x95, 0xFF, 0x47,
    0xB7, 0xDB, 0x31, 0xAC, 0xFC, 0x05, 0xCD, 0x94, 0x16, 0xF5, 0x87, 0x0A,
    0x00, 0x00,
};
#endif
void copyWebFiles(bool force) {
    //
}
#endif
