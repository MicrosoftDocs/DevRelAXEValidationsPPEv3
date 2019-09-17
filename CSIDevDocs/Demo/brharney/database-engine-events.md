---
title: 'Database Engine Events and Errors'
ms.custom: ""
ms.date: "06/27/2018"
ms.prod: sql
ms.reviewer: ""
ms.technology: supportability
ms.topic: conceptual
ms.assetid: 04ba51b6-cdc7-409c-8d7e-26ead13e614d
author: bharney0
---

# Database Engine Errors
The table contains error message numbers and the description, which is the text of the error message from the sys.messages catalog view. 


## Errors -2 to 999
| Error| Severity | Event Logged | Description|
| :------ | :------| :------| :----------------------------- |
|		|		|		|	Timeout expired. The timeout period elapsed prior to completion of the operation or the server is not responding. (Microsoft SQL Server, Error: -2).	|
|		|		|		|	An error has occurred while establishing a connection to the server. When connecting to SQL Server 2005, this failure may be caused by the fact that under the default settings SQL Server does not allow remote connections. (provider: SQL Network Interfaces, error: 28 - Server doesn't support requested protocol) (Microsoft SQL Server, Error: -1).	|
|		|		|		|	An error has occurred while establishing a connection to the server. When connecting to SQL Server, this failure may be caused by the fact that under the default settings SQL Server does not allow remote connections. (provider: Named Pipes Provider, error: 40 - Could not open a connection to SQL Server) (.Net SqlClient Data Provider)	|
|	21	|	20	|	No	|	Warning: Fatal error %d occurred at %S_DATE. Note the error and time, and contact your system administrator.	|
|		|		|		|	An error has occurred while establishing a connection to the server. When connecting to SQL Server, this failure may be caused by the fact that under the default settings SQL Server does not allow remote connections. (provider: Named Pipes Provider, error: 40 - Could not open a connection to SQL Server) (.Net SqlClient Data Provider).	|
|	101	|	15	|	No	|	Query not allowed in Wait for.	|
|		|	15	|	No	|	Incorrect syntax near '%.*ls'.	|
|	103	|	15	|	No	|	The %S_MSG that starts with '%.*ls' is too long. Maximum length is %d.	|
|	104	|	15	|	No	|	ORDER BY items must appear in the select list if the statement contains a UNION, INTERSECT or EXCEPT operator.	|
|	105	|	15	|	No	|	Unclosed quotation mark after the character string '%.*ls'.	|
|	106	|	16	|	No	|	Too many table names in the query. The maximum allowable is %d.	|
|		|	15	|	No	|	The column prefix '%.*ls' does not match with a table name or alias name used in the query.	|
|	108	|	15	|	No	|	The ORDER BY position number %ld is out of range of the number of items in the select list.	|
|	109	|	15	|	No	|	There are more columns in the INSERT statement than values specified in the VALUES clause. The number of values in the VALUES clause must match the number of columns specified in the INSERT statement.	|
