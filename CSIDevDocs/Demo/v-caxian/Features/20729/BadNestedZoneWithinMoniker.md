# [Check: "::: moniker" line is followed by a "::: zone" line, but NOT a "::: zone-end" line, before the closing "::: moniker-end"](https://ceapex.visualstudio.com/Engineering/_workitems/edit/23728)
- Severity: `Error`
- Message: `Bad nested zone within moniker. Add "::: zone-end" before "::: moniker-end". See https://aka.ms/ZonesAndMonikers.`

::: moniker range="product-1.0"
::: zone target="docs"
## Alt text
::: moniker-end
