/*
 * Copyright 2024 Tedd OKANO
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include	"r01lib.h"
r01lib_start;	/* *** place this word before making instance of r01lib classes *** */

DigitalOut	r( RED   );
DigitalOut	g( GREEN );
DigitalOut	b( BLUE  );

int main(void)
{
	r = 1;
	g = 1;
	b = 1;

	while ( true )
	{
		r	= 0;
		wait( 0.2 );
		r	= 1;
		wait( 0.2 );

		g	= 0;
		wait( 0.2 );
		g	= 1;
		wait( 0.2 );

		b	= 0;
		wait( 0.2 );
		b	= 1;
		wait( 0.2 );
	}
}