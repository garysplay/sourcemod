//=================================================================================================
//
// This is the precompiled header
//
//=================================================================================================

#pragma once

// Tier0
#include "tier0/basetypes.h"
#include "tier0/dbg.h"

#include "compat/compat_sdk2013.h"

#include "compat/branch_overrides.h"

// STD
// Ensure cmath is included everywhere
// so we get those sweet overloaded maths functions
#include <cstdlib>
#include <cmath>

// STL
#include <array>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <fstream>

// Mathlib
#include "mathlib/mathlib.h"
#include "mathlib/vector.h"

// Tier1
#include "tier1/tier1.h"
#include "tier1/strtools.h"
#include "tier1/interface.h"
#ifndef GAME_L4D2_OR_NEWER
#include "tier1/KeyValues.h"
#else
#include "tier1/keyvalues.h"
#endif
#include "tier1/UtlStringMap.h"
#include "tier1/utlbuffer.h"

// Misc
#ifdef JPH_DEBUG_RENDERER
#include "engine/ivdebugoverlay.h"
#endif
#include "bspfile.h"
#include "cmodel.h"
#include "const.h"
#include "isaverestore.h"
#include "vcollide_parse.h"

// VPhysics Interface
#include "vphysics_interface.h"
#include "vphysics/collision_set.h"
#include "vphysics/constraints.h"
#include "vphysics/friction.h"
#include "vphysics/object_hash.h"
#include "vphysics/performance.h"
#include "vphysics/player_controller.h"
#include "vphysics/stats.h"
#include "vphysics/vehicles.h"
#include "vphysics/virtualmesh.h"

// Jolt
#include <../joltphysics/src/Jolt/Jolt.h>
#include <../joltphysics/src/Jolt/RegisterTypes.h>

#include <../joltphysics/src/Jolt/Core/TempAllocator.h>
#include <../joltphysics/src/Jolt/Core/JobSystemThreadPool.h>
#include <../joltphysics/src/Jolt/Core/Factory.h>

#include <../joltphysics/src/Jolt/Skeleton/Skeleton.h>

#include <../joltphysics/src/Jolt/Physics/PhysicsSystem.h>
#include <../joltphysics/src/Jolt/Physics/PhysicsScene.h>
#include <../joltphysics/src/Jolt/Physics/Body/Body.h>
#include <../joltphysics/src/Jolt/Physics/Body/BodyCreationSettings.h>
#include <../joltphysics/src/Jolt/Physics/Collision/RayCast.h>
#include <../joltphysics/src/Jolt/Physics/Collision/CastResult.h>
#include <../joltphysics/src/Jolt/Physics/Collision/CollidePointResult.h>
#include <../joltphysics/src/Jolt/Physics/Collision/Shape/BoxShape.h>
#include <../joltphysics/src/Jolt/Physics/Collision/Shape/SphereShape.h>
#include <../joltphysics/src/Jolt/Physics/Collision/Shape/MeshShape.h>
#include <../joltphysics/src/Jolt/Physics/Collision/Shape/StaticCompoundShape.h>
#include <../joltphysics/src/Jolt/Physics/Collision/Shape/ConvexHullShape.h>
#include <../joltphysics/src/Jolt/Physics/Collision/Shape/RotatedTranslatedShape.h>
#include <../joltphysics/src/Jolt/Physics/Collision/Shape/OffsetCenterOfMassShape.h>
#include <../joltphysics/src/Jolt/Physics/Ragdoll/Ragdoll.h>
#include <../joltphysics/src/Jolt/Physics/Collision/ShapeCast.h>
#include <../joltphysics/src/Jolt/Physics/Collision/CollisionDispatch.h>
#include <../joltphysics/src/Jolt/Physics/Collision/CollisionCollectorImpl.h>
#include <../joltphysics/src/Jolt/Physics/Collision/GroupFilter.h>
#include <../joltphysics/src/Jolt/Physics/Collision/GroupFilterTable.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/ConeConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/PointConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/HingeConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/SwingTwistConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/FixedConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/SixDOFConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/DistanceConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Constraints/SliderConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Vehicle/VehicleConstraint.h>
#include <../joltphysics/src/Jolt/Physics/Vehicle/VehicleCollisionTester.h>
#include <../joltphysics/src/Jolt/Physics/Vehicle/WheeledVehicleController.h>

// Ourselves
#include "vjolt_interface.h"
#include "vjolt_util.h"
