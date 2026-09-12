#ifndef CONFIG_H
#define CONFIG_H

/**
 * @file config.h
 * A catch-all file for configuring various bugfixes and other settings
 * (maybe eventually) in SM64
 */

#define DEBUG
// #define FEBRUARY // DECEMBER, FEBRUARY and leaving undefined for the default March 1996
#define DECEMBER
#define NINTENDO_LOGO

// Support Rumble Pak
#define ENABLE_RUMBLE (0 || VERSION_SH || VERSION_CN)

// Screen Size Defines
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

// Stack Size Defines
#define IDLE_STACKSIZE 0x800
#define STACKSIZE 0x2000
#define UNUSED_STACKSIZE 0x1400

// What's the point of having a border?
#define BORDER_HEIGHT 0

#endif // CONFIG_H
