''<Snippet1>
Class ADSetupInformation

    Shared Sub Main()

        Dim root As AppDomain = AppDomain.CurrentDomain

        Dim setup As New AppDomainSetup()
        setup.ApplicationBase = _
            root.SetupInformation.ApplicationBase & "MyAppSubfolder\"

        Dim domain As AppDomain = AppDomain.CreateDomain("MyDomain", Nothing, setup)

        Console.WriteLine("Application base of {0}:" & vbCrLf & vbTab & "{1}", _
            root.FriendlyName, root.SetupInformation.ApplicationBase)
        Console.WriteLine("Application base of {0}:" & vbCrLf & vbTab & "{1}", _
            domain.FriendlyName, domain.SetupInformation.ApplicationBase)

        AppDomain.Unload(domain)
    End Sub
End Class

' This example produces output similar to the following:
'
'Application base of MyApp.exe:
'        C:\Program Files\MyApp\
'Application base of MyDomain:
'        C:\Program Files\MyApp\MyAppSubfolder\
'</Snippet1>

<snippet2>
Imports System.Reflection

Class AppDomain1
    Public Shared Sub Main()
        Console.WriteLine("Creating new AppDomain.")
        Dim domain As AppDomain = AppDomain.CreateDomain("MyDomain")

        Console.WriteLine("Host domain: " + AppDomain.CurrentDomain.FriendlyName)
        Console.WriteLine("child domain: " + domain.FriendlyName)
    End Sub
End Class
'</snippet2>