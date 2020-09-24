---
author: bharney-msft
description: asdf
ms.author: asdf
ms.date: Thu Sep 24 2020 00:00:00 GMT-0700
ms.prod: .net-core
ms.topic: best-practice
title: asdf
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
