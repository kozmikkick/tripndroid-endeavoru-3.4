/*
 * arch/arm/mach-tegra/include/mach/system.h
 *
 * Copyright (C) 2010 Google, Inc.
 *
 * Author:
 *	Colin Cross <ccross@google.com>
 *	Erik Gilling <konkers@google.com>
 *
 * Copyright (C) 2010-2011 NVIDIA Corporation
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MACH_TEGRA_SYSTEM_H
#define __MACH_TEGRA_SYSTEM_H

#include <mach/hardware.h>

extern void (*arch_reset)(char mode, const char *cmd);

static inline void arch_idle(void)
{
}

#endif
