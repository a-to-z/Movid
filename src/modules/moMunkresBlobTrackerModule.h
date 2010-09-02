/***********************************************************************
 ** Copyright (C) 2010 Movid Authors.  All rights reserved.
 **
 ** This file is part of the Movid Software.
 **
 ** This file may be distributed under the terms of the Q Public License
 ** as defined by Trolltech AS of Norway and appearing in the file
 ** LICENSE included in the packaging of this file.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ** Contact info@movid.org if any conditions of this licensing are
 ** not clear to you.
 **
 **********************************************************************/


#ifndef MO_MUNKRESBLOBTRACKER_MODULE_H
#define MO_MUNKRESBLOBTRACKER_MODULE_H

#include "moAbstractBlobTrackerModule.h"
#include "../moDataStream.h"
#include "../moDataGenericContainer.h"
#include "cv.h"
extern "C" {
	#include "match.h"
}


class moMunkresBlobTrackerModule : public moAbstractBlobTrackerModule {
public:
	moMunkresBlobTrackerModule();

protected:
	virtual void trackBlobs();
	virtual double calcWeight(moDataGenericContainer* old_blob,
			        		  moDataGenericContainer* new_blob);
	MODULE_INTERNALS();
};

#endif

