// Copyright 2023 CAtOSe (@CAtOSe)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define QMK_ESC_OUTPUT B12  // ROW pin if ROW2COL
#define QMK_ESC_INPUT  A15  // COL pin if ROW2COL