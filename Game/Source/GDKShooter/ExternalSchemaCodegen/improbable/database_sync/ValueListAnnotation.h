﻿// Generated by Unreal External Schema Codegen

#pragma once

#include "CoreMinimal.h"
#include "Utils/SchemaOption.h"
#include <WorkerSDK/improbable/c_schema.h>
#include <WorkerSDK/improbable/c_worker.h>

#include "../../ExternalSchemaHelperFunctions.h"

namespace improbable {
namespace database_sync {

// Generated from C:\dev\UnrealEngine\Samples\UnrealGDKReferenceProject\dbsync\database_sync.schema(19,1)
class ValueListAnnotation : public improbable::SpatialType
{
public:
	// Creates a new instance with default values for each field.
	ValueListAnnotation();
	// Creates a new instance with default values for each field. This is
	// equivalent to a default-constructed instance.
	static ValueListAnnotation Create() { return {}; }
	// Copyable and movable.
	ValueListAnnotation(ValueListAnnotation&&) = default;
	ValueListAnnotation(const ValueListAnnotation&) = default;
	ValueListAnnotation& operator=(ValueListAnnotation&&) = default;
	ValueListAnnotation& operator=(const ValueListAnnotation&) = default;
	~ValueListAnnotation() = default;
	
	bool operator==(const ValueListAnnotation&) const;
	bool operator!=(const ValueListAnnotation&) const;
	
	// Serialize this object data into the C API argument
	void Serialize(Schema_Object* SchemaObject) const override;
	
	// Deserialize the C API object argument into an instance of this class and return it
	static ValueListAnnotation Deserialize(Schema_Object* SchemaObject);
	
};

inline uint32 GetTypeHash(const ValueListAnnotation& Value);

} // namespace database_sync
} // namespace improbable

