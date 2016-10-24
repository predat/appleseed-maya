
//
// This source file is part of appleseed.
// Visit http://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2016 Haggi Krey, The appleseedhq Organization
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

// Interface header.
#include "appleseedmaya/envlightnode.h"

// Maya headers.
#include <maya/MFnUnitAttribute.h>

// appleseed maya headers.
#include "appleseedmaya/config.h"
#include "appleseedmaya/typeids.h"


const MString EnvLightNode::nodeName("appleseedEnvLight");
const MTypeId EnvLightNode::id(EnvLightNodeTypeId);
const MString EnvLightNode::drawDbClassification("drawdb/geometry/appleseedEnvLight");
const MString EnvLightNode::drawRegistrantId("appleseedMaya");

void* EnvLightNode::creator()
{
    return new EnvLightNode();
}

MStatus EnvLightNode::initialize()
{
    MStatus status;
    return status;
}

MStatus EnvLightNode::compute(const MPlug& plug, MDataBlock& dataBlock)
{
    return MS::kUnknownParameter;
}

void EnvLightNode::draw(
    M3dView&                view,
    const MDagPath &        path,
    M3dView::DisplayStyle   style,
    M3dView::DisplayStatus  status)
{
}

bool EnvLightNode::isBounded() const
{
    return true;
}

MBoundingBox EnvLightNode::boundingBox() const
{
    return MBoundingBox();
}