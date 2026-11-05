// SPDX-License-Identifier: GPL-2.0

#include <linux/delay.h>
#include <linux/ktime.h>
#include <linux/timekeeping.h>

__rust_helper u64 rust_helper_ktime_get_ns(void)
{
	return ktime_get_ns();
}
