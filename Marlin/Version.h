/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

////////////////////////////
// VENDOR VERSION EXAMPLE //
////////////////////////////

/**
 * Marlin release version identifier
 */
#define SHORT_BUILD_VERSION "T3DH 2.0.9.5"

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */

#if(ENABLED(MACHINESV02_1) || ENABLED(MACHINESV02_2) || ENABLED(MACHINESV02_3) || ENABLED(MACHINESV02_4))
  #define VerChar1 "SV02"
#endif

#if(ENABLED(BLTOUCH))
  #define VerChar2 "BLT"
#else
  #define VerChar2 "NP"
#endif

#if(ENABLED(AUTO_BED_LEVELING_BILINEAR))
  #define VerChar3 "BIL"
#elif(ENABLED(MESH_BED_LEVELING))
  #define VerChar3 "MSH"
#else
  #define VerChar3 "MAN"
#endif

#if(ENABLED(MKS_MINI_12864_V3))
  #define VerChar4 "MKSMV3"
#elif(ENABLED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER))
  #define VerChar4 "12864"
#endif

#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION " T3DH " VerChar1 VerChar2 VerChar3 VerChar4

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE "2022-10-05"

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */

#if(ENABLED(MACHINESV02))
  #define CUSTOM_MACHINE_NAME "T3DH SV02"
#endif

/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
#define SOURCE_CODE_URL "https://github.com/the3dhammer/Marlin/tree/t3dh-v2.0.9.5"

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL "the3dhammer.com"

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
