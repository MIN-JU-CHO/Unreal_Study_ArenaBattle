// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ABWidgetComponent.h"
#include "ABUserWidget.h"

void UABWidgetComponent::InitWidget()
{
	Super::InitWidget();
	// Get Widget that this current component is owning
	// The widget is created in CreateWidget() inside Super::InitWidget()
	UABUserWidget* ABUserWidget = Cast<UABUserWidget>(GetWidget());
	if (ABUserWidget)
	{
		// Because this is a component, can GetOwner()
		ABUserWidget->SetOwningActor(GetOwner());
	}
}
