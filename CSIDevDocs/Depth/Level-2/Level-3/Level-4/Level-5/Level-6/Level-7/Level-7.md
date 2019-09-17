---
# required metadata

title: "Test File"
#description:
#keywords:
author: meganbradley
ms.author: mbradley
manager: arthurya
ms.date:  10/29/2016
ms.topic: article
#ms.prod:
#ms.service:
#ms.technology:
ms.assetid: ee80d46d-4682-4f4e-a111-185d4078bf9b

# optional metadata

#ROBOTS:
#audience:
#ms.devlang:
ms.reviewer: martinof
#ms.suite: ems
#ms.tgt_pltfrm:
#ms.custom:
---


# Level 7

> [!NOTE]
> The NuGetDefaults.Config file will never cause a package source to be removed from a developer's NuGet configuration. That means if the developer has already used NuGet and therefore has the nuget.org package source registered, it won't be removed after the creation of a NuGetDefaults.config file.
>
> Furthermore, neither NuGetDefaults.config or any other mechanism in NuGet can prevent access to package sources like nuget.org. If an organization wishes to block such access, it much use other means such as firewalls to do so.

This migration to Azure Monitor will bring several key diagnostic improvements and will be completely seamless for most customers, who will simply see new Redis metrics in the Azure portal. If you don’t access metrics directly from your Azure Storage account today, you won’t need to take any explicit action after the update has occurred. 

However, if you access metrics data directly from your Azure Storage account, there is an important change to note: after February 2017, Redis Cache telemetry data won’t be updated in your Storage account. You must use one of the following methods to retrieve your data: