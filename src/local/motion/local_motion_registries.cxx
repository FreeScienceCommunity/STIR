//
//
/*
    Copyright (C) 2003- 2007, Hammersmith Imanet Ltd
    For GE internal use only
*/
/*!
  \file
  \ingroup motion
  \brief registration of parsing objects related to motion

  \author Kris Thielemans

*/


#include "local/stir/motion/RigidObject3DMotionFromPolaris.h"
#include "local/stir/motion/Transform3DObjectImageProcessor.h"
#include "local/stir/motion/NonRigidObjectTransformationUsingBSplines.h"

#include "stir/DiscretisedDensity.h"
// TODO remove next. artefact of current shared_ptr
#include "stir/DataSymmetriesForViewSegmentNumbers.h"

#include "local/stir/motion/PoissonLogLikelihoodWithLinearModelForMeanAndGatedProjDataWithMotion.h"
START_NAMESPACE_STIR

static RigidObject3DMotionFromPolaris::RegisterIt dummy100;

static Transform3DObjectImageProcessor<float>::RegisterIt dummy1000;

static NonRigidObjectTransformationUsingBSplines<3,float>::RegisterIt dummy2000;
//static RigidObject3DTransformation::RegisterIt dummy2000;

static PoissonLogLikelihoodWithLinearModelForMeanAndGatedProjDataWithMotion<DiscretisedDensity<3,float> >::RegisterIt dummy4000;
END_NAMESPACE_STIR

