#include "CoreMinimal.h"
#include "FMyStruct.generated.h"

USTRUCT(BlueprintType)
strcut FMyStruct 
{
	GENERATED_BODY()
	
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //���ֶι�������ͼ����
		int32 index;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //���ֶι�������ͼ����
		FText NickName;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //���ֶι�������ͼ����
		int32 kill;
	URPOPERTY(EditAnywhere,BlueprintReadWrite)    //���ֶι�������ͼ����
		int32 death;
}
