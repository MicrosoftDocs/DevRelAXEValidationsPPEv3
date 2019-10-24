---
# required metadata

title: "VS Code Authoring Extension "
#description:
#keywords:
author: adunndevster
ms.author: adunndevster
manager: v-caxian
ms.date:  10/29/2016
ms.topic: article
#ms.prod:
#ms.service:
#ms.technology:
ms.assetid: c44deb70-bd5b-4efa-bcee-4e4b4c8f418c

# optional metadata

#ROBOTS:
#audience:
#ms.devlang:
ms.reviewer: martinof
#ms.suite: ems
#ms.tgt_pltfrm:
#ms.custom:
---


#VS Code Authoring Extensionee Test 5

VS Code Markdown Authoring Extension for OPS is a poc to provide authoring help to writers working in OPS and authoring for docs.microsoft.com. It includes several functions, including applying the default docs template to new Markdown files and generating a GUID, applying common formattidng to strings, inserting links and images, and previewing content using your site's CSS.

GOOD:  
[Link text should go here](https://microsoft.com)

BAD:  
[](https://microsoft.com)

BAD:  
[ ](https://microsoft.com)

BAD:
Here is a grand text blurb that contains an [](https://microsoft.com) empty link. Can we find the problem in this paragraph?

[Link text should go here](auto-merge.md)

[](https://microsoft.com)

![](media/indianaJones.jpg)

![ ](media/indianaJones.jpg)

<img src="media/indianaJones.jpg" />

<img class="image" src="media/indianaJones.jpg" />

<img alt="" class="image" src="media/indianaJones.jpg" />

<img class="image" alt="Lorem Ipsum" src="media/indianaJones.jpg" />
