---
title: Oracle Azure Virtual Machines DBMS deployment for SAP workload | Microsoft Docs
description: Oracle Azure Virtual Machines DBMS deployment for SAP workload
services: virtual-machines-linux,virtual-machines-windows
documentationcenter: ''
author: msjuergent
manager: patfilot
editor: ''
tags: azure-resource-manager
keywords: ''

ms.service: virtual-machines-linux
ms.devlang: NA
ms.topic: article
ms.tgt_pltfrm: vm-linux
ms.workload: infrastructure
ms.date: 07/12/2018
ms.author: juergent
ms.custom: H1Hack27Feb2017

---

# Oracle Azure Virtual Machines DBMS deployment for SAP workload

[767598]:https://launchpad.support.sap.com/#/notes/767598
[773830]:https://launchpad.support.sap.com/#/notes/773830

[#2039612](https://launchpad.support.sap.com/#/notes/2039612)

Exact configurations and functionality supported by Oracle and SAP on Azure are documented in SAP Note [#2039619](https://launchpad.support.sap.com/#/notes/2039619)

[#2039610](https://launchpad.support.sap.com/#/notes/2039610) configurations and functionality supported by Oracle and SAP on Azure are documented in SAP Note 

As you realize, only the two guest operating systems of Windows and Oracle Linux are supported. Widely used SLES and RHEL Linux are not supported to deploy Oracle components in Azure. Oracle components do include as well the Oracle database client, which is used by SAP applications to connect against the Oracle DBMS. Exceptions, according to SAP Note [#2039619](https://launchpad.support.sap.com/#/notes/2039619) are SAP components, which are not using the Oracle client because those components might not need to connect to the Oracle DBMS. Such SAP components are SAP's stand-alone enqueue, message server and Enqueue replication services. Means despite running your Oracle DBMS and SAP application instances on Oracle Linux, you could run your SAP Central Services on SLES or RHEL and protect it with a Pacemaker based cluster. A HA configuration that is not supported on Oracle Linux.
