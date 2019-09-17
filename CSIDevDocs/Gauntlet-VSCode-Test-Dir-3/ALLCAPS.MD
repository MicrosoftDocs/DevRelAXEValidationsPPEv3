---
# required metadata

title: "VS Code Authoring Extension"
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


# VS Code Authoring Extension


[Doc under construction!]

The VS Code Markdown Authoring Extension for OPS is a proof of concept to provide authoring assistance to writers working in OPS and authoring for docs.microsoft.com. It includes several functions, including applying the default docs template to new Markdown files and generating a GUID, applying common formatting to strings, inserting links and images, and previewing content using your site's CSS.


## Installation steps

1. Copy the installation folder from ----.
1. Save ops-platform-extension-poc-0.0.1.vsix to your machine.
2. Open VS Code and click the square icon on the left panel to open the Extensions menu.
3. Click the three dots for "More" and select "Install from VSIX..."
4. Navigate to the extension and select it.
5. VS Code will install the extension and prompt you to restart.

## Prerequisites and assumptions

To effectively use the OPS Authoring extension, you must:
- Clone your entire repo to your local machine and keep it in sync. Functions such as link and image insertion are not reliable if the repo is out of sync.
- For accurate content preview, you need to update your VS Code settings.json file, as described under **Preview Content** below.

## Create new topic using Docs template

This function enables you to create a new topic in the standard docs.microsoft.com authoring template, and automatically generate an ms.assetID (GUID).

1. Open a working folder in VS Code. This should be the root folder of your cloned docset.
2. Press `F1` to bring up the command palette and type "OPS: Create new docs topic". Alternatively you can use the hotkey `Ctrl + F1`.
3. Save the file with your desired name.

## Format text

1. Open a working folder in VS Code. This should be the root folder of your cloned docset.
2. In your Markdown file, select the string or block of text you want to format.
3. Press `F1` to bring up the command palette and type "OPS: Format [style]". 
    * Alternatively you can use the hotkey `Ctrl + Alt + b` after selecting your text for bold.
    * Alternatively you can use the hotkey `Ctrl + Alt + i` after selecting your text for italic.
    * Alternatively you can use the hotkey `Ctrl + Alt + c` after selecting your text for code.
4. The string will be formatted with the appropriate Markdown syntax. Note that for code, the extension will detect whether there are any line breaks, and style as code inline for one line or less, and as fenced code for code blocks.

## Insert a link to a local Markdown file

1. Open a working folder in VS Code. This should be the root folder of your cloned docset.
2. In your Markdown file, type the link text and select it.
3. Press `F1` to bring up the command palette and type "OPS: Insert a link into your Markdown file".  
    * Alternatively you can use the hotkey `Ctrl + Alt + l` after selecting your link text.
4. Choose the link target from the quick pick menu that appears. You can either scroll through the list or start typing in the text box to filter search results.
5. Select the link target and the extension will insert the correctly formatted Markdown link.

## Insert a link to a local art file

1. Open a working folder in VS Code. This should be the root folder of your cloned docset.
2. In your Markdown file, type the image alt text and select it.
3. Press `F1` to bring up the command palette and type "OPS: Insert art  into your Markdown file". 
     * Alternatively you can use the hotkey `Ctrl + Alt + a` after selecting your alt text.
4. Choose the link target from the quick pick menu that appears. You can either scroll through the list or start typing in the text box to filter search results.
5. Select the link target and the extension will insert the correctly formatted Markdown art link.

## Preview content

This function enables you to see more accurate Markdown preview using the CSS of your target site.

First, you need to configure your VS Code settings.json file as follows:

1. In VS Code, open File\Preferences\User Setting (to save settings globally for all your VS Code instances) or File\Preferences\Workspace (to save settings for the current folder only). This opens settings.json.
2. Inside the {}, paste the following:

**openpublishing.css**

This is a JSON array that points to all CSS you want to use to render the output. To use the docs.microsoft.com CSS included in the installation, add:

    "openpublishing.css": [ 
        "C:\\Users\\<username>\\.vscode\\extensions\\CSIDev.ops-platform-extension-poc-0.0.1\\preview\\css"
    ],

**openpublishing.newhope**

This switch supports the rendering pipeline from docs.microsoft.com. Set this property to true:

     "openpublishing.newhope": true
     
Once you have configured settings.json, you can Press `F1` to bring up the command palette and type "OPS: Preview" to see your content rendered with the docs CSS.
