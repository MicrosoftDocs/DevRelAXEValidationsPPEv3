//<Snippet1>
using namespace System;

int main()
{
    AppDomain^ root = AppDomain::CurrentDomain;

    AppDomainSetup^ setup = gcnew AppDomainSetup();
    setup->ApplicationBase = 
        root->SetupInformation->ApplicationBase + "MyAppSubfolder\\";

    AppDomain^ domain = AppDomain::CreateDomain("MyDomain", nullptr, setup);

    Console::WriteLine("Application base of {0}:\r\n\t{1}", 
        root->FriendlyName, root->SetupInformation->ApplicationBase);
    Console::WriteLine("Application base of {0}:\r\n\t{1}", 
        domain->FriendlyName, domain->SetupInformation->ApplicationBase);

    AppDomain::Unload(domain);
}

/* This example produces output similar to the following:
Application base of MyApp.exe:
        C:\Program Files\MyApp\
Application base of MyDomain:
        C:\Program Files\MyApp\MyAppSubfolder\
 */
//</Snippet1>


// <snippet2>
using namespace System;
using namespace System::Reflection;

ref class AppDomain4
{
public:
    static void Main()
    {
        // Create application domain setup information.
        AppDomainSetup^ domaininfo = gcnew AppDomainSetup();
        domaininfo->ApplicationBase = "f:\\work\\development\\latest";

        // Create the application domain.
        AppDomain^ domain = AppDomain::CreateDomain("MyDomain", nullptr, domaininfo);

        // Write application domain information to the console.
        Console::WriteLine("Host domain: " + AppDomain::CurrentDomain->FriendlyName);
        Console::WriteLine("child domain: " + domain->FriendlyName);
        Console::WriteLine("Application base is: " + domain->SetupInformation->ApplicationBase);

        // Unload the application domain.
        AppDomain::Unload(domain);
    }
};

int main()
{
    AppDomain4::Main();
}
// </snippet2>