        ��  ��                  �  `   W I N E _ R E G I S T R Y   A C T X P R X Y _ H L I N K _ R _ R E S                     HKCR
{
    NoRemove Interface
    {
        '{79EAC9C3-BAF9-11CE-8C82-00AA004BA90B}' = s 'IHlink'
        {
            NumMethods = s 17
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{79EAC9C2-BAF9-11CE-8C82-00AA004BA90B}' = s 'IHlinkSite'
        {
            NumMethods = s 7
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{79EAC9C4-BAF9-11CE-8C82-00AA004BA90B}' = s 'IHlinkTarget'
        {
            NumMethods = s 8
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{79EAC9C5-BAF9-11CE-8C82-00AA004BA90B}' = s 'IHlinkFrame'
        {
            NumMethods = s 8
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
        '{79EAC9CB-BAF9-11CE-8C82-00AA004BA90B}' = s 'IExtensionServices'
        {
            NumMethods = s 5
            ProxyStubClsid32 = s '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}'
        }
    }
    NoRemove CLSID
    {
        '{B8DA6310-E19B-11D0-933C-00A0C90DCAA9}' = s 'PSFactoryBuffer'
        {
            InprocServer32 = s '%MODULE%' { val ThreadingModel = s 'Both' }
        }
    }
}
 