#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ListBaseGroupWidget.ListBaseGroupWidget_C
// 0x0008 (0x0248 - 0x0240)
class UListBaseGroupWidget_C : public UUserWidget
{
public:
	class UVerticalBox*                                List;                                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ListBaseGroupWidget.ListBaseGroupWidget_C");
		return ptr;
	}


	void GetChilderenCount(int* Count);
	void AddChild(class UWidget** Content);
	void Clear();
	void On_List_Prepass_1(class UWidget* BoundWidget);
	void AddCategoryGroup(class UCategoryGroupWidget_C* CategoryGroup);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
