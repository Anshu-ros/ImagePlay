//#############################################################################
//
//  This file is part of ImagePlay.
//
//  ImagePlay is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ImagePlay is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with ImagePlay.  If not, see <http://www.gnu.org/licenses/>.
//
//#############################################################################

#ifndef IPLMERGEPLANES_H
#define IPLMERGEPLANES_H

#include "IPL_global.h"
#include "IPLProcess.h"

#include <string>
#include <vector>

/**
 * @brief The IPLSplitPlanes class
 */
class IPLSHARED_EXPORT IPLMergePlanes : public IPLClonableProcess<IPLMergePlanes>
{
public:
    IPLMergePlanes() : IPLClonableProcess() { init(); }
    ~IPLMergePlanes()  { destroy(); }

    void init();
    virtual void        destroy();

    virtual bool processInputData(IPLData*, int inNr, bool useOpenCV );
    virtual IPLImage* getResultData( int outputIndex );

protected:
    IPLImage*   _inputA;
    IPLImage*   _inputB;
    IPLImage*   _inputC;
    IPLImage*   _result;
    int         _inputType;
};

#endif // IPLMERGEPLANES_H
