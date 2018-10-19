/* randomness machinery
 *
 * Copyright (C) 1998, 1999  D. Hugh Redelmeier.
 * Copyright (C) 2018 Andrew Cagney
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <https://www.gnu.org/licenses/gpl2.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef PLUTO_RND_H
#define PLUTO_RND_H

#include <stdint.h>

#include "chunk.h"

/* for SHA1_DIGEST_SIZE */
#include "constants.h"
#include "ietf_constants.h"

extern uint8_t secret_of_the_day[SHA1_DIGEST_SIZE];
extern uint8_t ikev2_secret_of_the_day[SHA1_DIGEST_SIZE];

extern void fill_rnd_chunk(chunk_t chunk);
extern void get_rnd_bytes(uint8_t *buffer, int length);

extern void init_secret(void);

#endif
