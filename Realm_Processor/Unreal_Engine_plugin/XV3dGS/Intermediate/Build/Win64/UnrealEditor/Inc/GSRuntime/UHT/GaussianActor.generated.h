// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GaussianActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef GSRUNTIME_GaussianActor_generated_h
#error "GaussianActor.generated.h already included, missing '#pragma once' in GaussianActor.h"
#endif
#define GSRUNTIME_GaussianActor_generated_h

#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTestHandler); \
	DECLARE_FUNCTION(execOnCropInfoChangedHandler); \
	DECLARE_FUNCTION(execreset_niagara);


#if WITH_EDITOR
#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execTest);
#else // WITH_EDITOR
#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AGaussianActor, NO_API)


#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGaussianActor(); \
	friend struct Z_Construct_UClass_AGaussianActor_Statics; \
public: \
	DECLARE_CLASS(AGaussianActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GSRuntime"), NO_API) \
	DECLARE_SERIALIZER(AGaussianActor) \
	FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_ARCHIVESERIALIZER


#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGaussianActor(AGaussianActor&&); \
	AGaussianActor(const AGaussianActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaussianActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaussianActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGaussianActor)


#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_39_PROLOG
#define FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_INCLASS_NO_PURE_DECLS \
	FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GSRUNTIME_API UClass* StaticClass<class AGaussianActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_zyl_object_project_nerf_output_pluginPack_5_4_v07_XV3dGS_HostProject_Plugins_XV3dGS_Source_GSRuntime_Public_GaussianActor_h


#define FOREACH_ENUM_EGAUSSIANLODTVISTYPE(op) \
	op(EGaussianLodTVisType::LodVisSelected) 

enum class EGaussianLodTVisType : uint8;
template<> struct TIsUEnumClass<EGaussianLodTVisType> { enum { Value = true }; };
template<> GSRUNTIME_API UEnum* StaticEnum<EGaussianLodTVisType>();

#define FOREACH_ENUM_SELECTMODEL(op) \
	op(SelectModel::Add) \
	op(SelectModel::Replace) \
	op(SelectModel::Subtract) 

enum class SelectModel : uint8;
template<> struct TIsUEnumClass<SelectModel> { enum { Value = true }; };
template<> GSRUNTIME_API UEnum* StaticEnum<SelectModel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
