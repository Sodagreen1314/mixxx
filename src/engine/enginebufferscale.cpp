/***************************************************************************
                          enginebufferscale.cpp  -  description
                             -------------------
    begin                : Sun Apr 13 2003
    copyright            : (C) 2003 by Tue & Ken Haste Andersen
    email                : haste@diku.dk
***************************************************************************/

/***************************************************************************
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
***************************************************************************/

#include "engine/enginebufferscale.h"
#include "util/defs.h"

EngineBufferScale::EngineBufferScale()
        : m_iSampleRate(44100),
          m_dBaseRate(1.0),
          m_bSpeedAffectsPitch(true),
          m_dSpeedAdjust(1.0),
          m_dPitchAdjust(1.0),
          m_buffer(new CSAMPLE[MAX_BUFFER_LEN]),
          m_samplesRead(0) {
}

EngineBufferScale::~EngineBufferScale() {
    delete [] m_buffer;
}

double EngineBufferScale::getSamplesRead() {
    return m_samplesRead;
}
