/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2002 Chris Schoeneman
 * 
 * This package is free software you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file COPYING that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef CARCHTIMEWINDOWS_H
#define CARCHTIMEWINDOWS_H

#include "IArchTime.h"

#define ARCH_TIME CArchTimeWindows

class CArchTimeWindows : public IArchTime {
public:
	CArchTimeWindows();
	virtual ~CArchTimeWindows();

	// IArchTime overrides
	virtual double		time();
};

#endif
