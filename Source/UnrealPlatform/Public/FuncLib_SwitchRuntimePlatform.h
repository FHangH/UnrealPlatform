﻿#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuntimePlatform.h"
#include "FuncLib_SwitchRuntimePlatform.generated.h"

UCLASS()
class UNREALPLATFORM_API UFuncLib_SwitchRuntimePlatform : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "RUNTIME", ToolTip = "判断当前的环境"), Category = "FH|Runtime")
	static void SwitchRuntime(ERuntime& RUNTIME);

	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "RUNTIME", ToolTip = "判断当前的环境"), Category = "FH|Runtime")
	static void SwitchRuntime_Editor_Debug_Development_Shipping(ERuntime_Editor_Debug_Development_Shipping& RUNTIME);

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="依旧当前的平台,在蓝图中走不同的分支"), Category="FH|Platform")
	static void SwitchPlatform(EPlatform& PLATFORM);

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="仅判断是PC, Linux"), Category="FH|Platform")
	static void SwitchPC_Linux(EPlatform_PC_Linux& PLATFORM);

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="仅判断是PC, Linux, Android"), Category="FH|Platform")
	static void SwitchPC_Linux_Android(EPlatform_PC_Linux_Android& PLATFORM);

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="仅判断是PC, Linux, Android, IOS"), Category="FH|Platform")
	static void SwitchPC_Linux_Android_IOS(EPlatform_PC_Linux_Android_IOS& PLATFORM);
};
