---
# required metadata

title: "Test File - Test-Dir-1"
#description:
#keywords:
author: daveba
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


# Test file for VS Code stuff

> [!NOTE]
> The NuGetDefaults.Config file will never cause a package source to be removed from a developer's NuGet configuration. That means if the developer has already used NuGet and therefore has the nuget.org package source registered, it won't be removed after the creation of a NuGetDefaults.config file.
>
> Furthermore, neither NuGetDefaults.config or any other mechanism in NuGet can prevent access to package sources like nuget.org. If an organization wishes to block such access, it much use other means such as firewalls to do so.