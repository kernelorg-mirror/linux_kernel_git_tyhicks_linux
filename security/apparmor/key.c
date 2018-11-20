/*
 * AppArmor security module
 *
 * This file contains AppArmor kernel keyring fine grained mediation
 *
 * Copyright 2018 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 2 of the
 * License.
 */

#include <linux/key.h>

#include "include/label.h"

#ifdef CONFIG_KEYS

int aa_key_perm(key_ref_t key_ref, const struct aa_label *label, unsigned perm)
{
	return 0;
}

#endif
