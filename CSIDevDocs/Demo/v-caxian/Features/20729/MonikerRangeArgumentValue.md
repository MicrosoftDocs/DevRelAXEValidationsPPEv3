# [Check: "moniker range" followed by characters other than =", ="<=, =">=, ="<, or =">](https://ceapex.visualstudio.com/Engineering/_workitems/edit/23719)
- Severity: `Error`
- Message: `Bad syntax for range argument. See https://aka.ms/ZonesAndMonikers.`
- moniker range="product-1.0"
- moniker range="<product-1.0"
- moniker range="<=product-1.0"
- moniker range=">product-1.0"
- moniker ranger=">=product-1.0"

::: zone target="docs"
::: moniker range="<==product-1.0"
## Example-1
::: moniker-end
::: zone-end
